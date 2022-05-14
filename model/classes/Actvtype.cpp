//
// Created by Taraxtix on 07/05/2022.
//

#include "Actvtype.h"

Actvtype::Actvtype(const std::string header[], const std::string params[]){
	std::string actv_code_type_id_str;
	std::string proj_id_str;
	std::string seq_num_str;
	std::string actv_short_len_str;

	tsv = "%R\t";

	for(uint i = 0; i < header->length(); i++){
		if(header[i].empty()) break;

		if(header[i] == "actv_code_type_id"){
			if(!params[i].empty()){
				actv_code_type_id = stoi(params[i]);
				actv_code_type_id_str = params[i];
			}
		}
		else if(header[i] == "actv_code_type_id"){
			if(!params[i].empty()){

				proj_id = stoi(params[i]);
				proj_id_str = params[i];
			}
		}
		else if(header[i] == "seq_num"){
			if(!params[i].empty()){

				seq_num = stoi(params[i]);
				seq_num_str = params[i];
			}
		}
		else if(header[i] == "actv_short_len"){
			if(!params[i].empty()){
				actv_short_len = stof(params[i]);
				actv_code_type_id_str = params[i];
			}
		}
		else if(header[i] == "actv_code_name"){ actv_code_type = params[i]; }
		else if(header[i] == "actv_code_type_scope"){ actv_code_type_scope = params[i]; }
		else if(header[i] == "short_name"){ super_flag = params[i]; }
	}
	tsv.append(actv_code_type_id_str).append("\t")
					.append(proj_id_str).append("\t")
					.append(seq_num_str).append("\t")
					.append(actv_short_len_str).append("\t")
					.append(actv_code_type).append("\t")
					.append(actv_code_type_scope).append("\t")
					.append(super_flag).append("\n");
}