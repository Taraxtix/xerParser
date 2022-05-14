//
// Created by Taraxtix on 06/05/2022.
//

#include "Actvcode.h"

Actvcode::Actvcode(const std::string header[], const std::string params[]){
	std::string actv_code_id_str;
	std::string actv_code_type_id_str;
	std::string parent_actv_code_id_str;
	std::string seq_num_str;

	tsv = "%R\t";

	for(uint i = 0; i < header->length(); i++){
		if(header[i].empty()) break;

		if(header[i] == "actv_code_id"){
			if(!params[i].empty()){
				actv_code_id = stoi(params[i]);
				actv_code_id_str = params[i];
			}
		}
		else if(header[i] == "actv_code_type_id"){
			if(!params[i].empty()){
				actv_code_type_id = stoi(params[i]);
				actv_code_type_id_str = params[i];
			}
		}
		else if(header[i] == "parent_actv_code_id"){
			if(!params[i].empty()){
				parent_actv_code_id = stoi(params[i]);
				parent_actv_code_id_str = params[i];
			}
		}
		else if(header[i] == "seq_num"){
			if(!params[i].empty()){
				seq_num = stoi(params[i]);
				seq_num_str = params[i];
			}
		}
		else if(header[i] == "actv_code_name"){ actv_code_name = params[i]; }
		else if(header[i] == "short_name"){ short_name = params[i]; }
	}
	tsv.append(actv_code_id_str).append("\t")
					.append(actv_code_type_id_str).append("\t")
					.append(parent_actv_code_id_str).append("\t")
					.append(seq_num_str).append("\t")
					.append(actv_code_name).append("\t")
					.append(short_name).append("\n");
}
