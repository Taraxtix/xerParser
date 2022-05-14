//
// Created by sorat on 12/05/2022.
//

#include "Pcattype.h"

Pcattype::Pcattype(const std::string *header, const std::string *params){
	tsv = "%R\t";
	for(uint i = 0; i < params->length(); i++){
		if(header[i] == "proj_catg_type_id"){ 
			if(!params[i].empty()){
				proj_catg_type_id = stoi(params[i]);
			}
		}
		else if(header[i] == "seq_num"){ 
			if(!params[i].empty()){
				seq_num = stoi(params[i]);
			}
		}
		else if(header[i] == "proj_catg_short_len"){ proj_catg_short_len = stoi(params[i]);}
		else if(header[i] == "proj_catg_type"){ proj_catg_type = params[i]; }
		else if(header[i] == "export_flag"){ export_flag = params[i];}
	}
	tsv.append(std::to_string(proj_catg_type_id)).append("\t")
	.append(std::to_string(seq_num)).append("\t")
	.append(std::to_string(proj_catg_short_len)).append("\t")
	.append(proj_catg_type).append("\t")
	.append(export_flag).append("\n");
}