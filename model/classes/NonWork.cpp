//
// Created by Taraxtix on 10/05/2022.
//

#include "NonWork.h"

NonWork::NonWork(const std::string *header, const std::string *params){
	tsv = "%R\t";
	for(uint i = 0; i < header->size(); i++){
		if (header[i] == "nonwork_type_id"){ 
			if(!params[i].empty()){
				nonwork_type_id = std::stoi(params[i]); 
				}
		}
		else if (header[i] == "seq_num"){ 
		if(!params[i].empty()){
			seq_num = std::stoi(params[i]); 
			}
		}
		else if (header[i] == "nonwork_code"){ nonwork_code = params[i]; }
		else if (header[i] == "nonwork_type"){ nonwork_type = params[i]; }
	}
	tsv.append(std::to_string(nonwork_type_id)).append("\t")
	.append(std::to_string(seq_num)).append("\t")
	.append(nonwork_code).append("\t")
	.append(nonwork_type).append("\n");
}