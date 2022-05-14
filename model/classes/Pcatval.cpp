//
// Created by sorat on 12/05/2022.
//

#include "Pcatval.h"

Pcatval::Pcatval(const std::string *header, const std::string *params){
	tsv = "%R\t";
	for(uint i = 0; i < params->length(); i++){
		if(header[i] == "proj_catg_id"){ 
			if(!params[i].empty()){
				proj_catg_id = stoi(params[i]); 
				}
		}
		else if(header[i] == "proj_catg_type_id"){ 
			if(!params[i].empty()){
				proj_catg_type_id = stoi(params[i]); 
			}
		}
		else if(header[i] == "seq_num"){ 
			if(!params[i].empty()){
				seq_num = stoi(params[i]); 
			}
		}
		else if(header[i] == "parent_proj_catg_id"){ 
			if(!params[i].empty()){
				parent_proj_catg_id = stoi(params[i]); 
			}
		}
		else if(header[i] == "proj_catg_short_name"){ proj_catg_short_name = params[i]; }
		else if(header[i] == "proj_catg_name"){ proj_catg_name = params[i]; }
	}
	tsv.append(std::to_string(proj_catg_id)).append("\t")
	.append(std::to_string(proj_catg_type_id)).append("\t")
	.append(std::to_string(seq_num)).append("\t")
	.append(std::to_string(parent_proj_catg_id)).append("\t")
	.append(proj_catg_short_name).append("\t")
	.append(proj_catg_name).append("\n");
}
