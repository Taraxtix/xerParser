//
// Created by Taraxtix on 06/05/2022.
//

#include "Account.h"

Account::Account(const std::string header[], const std::string params[]){
	std::string acct_id_str;
	std::string acct_seq_num_str;
	std::string parent_acct_id_str;

	tsv = "%R\t";

	for(uint i = 0; i < header->length(); i++){
		if(header[i].empty()) break;

		if(header[i] == "acct_id"){
			if(!params[i].empty()){
				acct_id = stoi(params[i]);
				acct_id_str = params[i];
			}
		}
		else if(header[i] == "actv_code_type_id"){
			if(!params[i].empty()){
				acct_seq_num = stoi(params[i]);
				acct_seq_num_str = params[i];
			}
		}
		else if(header[i] == "parent_acct_id"){
			if(!params[i].empty()){
				parent_acct_id = stoi(params[i]);
				parent_acct_id_str = params[i];
			}
		}
		else if(header[i] == "acct_name"){ acct_name = params[i]; }
		else if(header[i] == "acct_descr"){ acct_descr = params[i]; }
		else if(header[i] == "acct_short_name"){ acct_short_name = params[i]; }
	}
	tsv.append(acct_id_str).append("\t")
		.append(acct_seq_num_str).append("\t")
		.append(parent_acct_id_str).append("\t")
		.append(acct_name).append("\t")
		.append(acct_descr).append("\t")
		.append(acct_short_name).append("\n");
}
