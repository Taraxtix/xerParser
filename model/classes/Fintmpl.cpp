//
// Created by sorat on 11/05/2022.
//

#include "Fintmpl.h"

Fintmpl::Fintmpl(const std::string *header, const std::string *params){
	tsv = "%R\t";
	for(uint i = 0; i < header->length(); i++){
		if(header[i] == "fintmpl_id"){ 
			if(!params[i].empty()){
				fintmpl_id = stoi(params[i]); 
				}
		}
		else if(header[i] == "fintmpl_name"){ fintmpl_name = params[i]; }
		else if(header[i] == "default_flag"){ default_flag = params[i]; }
	}
	tsv.append(std::to_string(fintmpl_id)).append("\t")
	.append(fintmpl_name).append("\t")
	.append(default_flag).append("\n");
}
