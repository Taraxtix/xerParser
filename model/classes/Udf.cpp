#include "Udf.h"

Udf::Udf(const std::string header[], const std::string params[]){
	tsv = "%R\t";
	for (int i = 0; i < header->length(); i++){
		if(header[i] == "udf_code_id"){
			if(!params[i].empty()){
				udf_code_id = stoi(params[i]);
			}
		} else if (header[i] == "fk_id"){
			if(!params[i].empty()){
				fk_id = stoi(params[i]);
			}
		} else if (header[i] == "proj_id"){
			if(!params[i].empty()){
				proj_id = stoi(params[i]);
			}
		} else if (header[i] == "udf_date") {
			udf_date = params[i];
		} else if (header[i] == "udf_number"){
			if(!params[i].empty()){
				udf_number = stod(params[i]);
			}
		} else if (header[i] == "udf_text"){
			udf_text = params[i];
		} else if (header[i] == "udf_code_id"){
			if(!params[i].empty()){
				udf_code_id = stoi(params[i]);
			}
		}
	}
	tsv.append(std::to_string(udf_code_id)).append("\t")
	.append(std::to_string(fk_id)).append("\t")
	.append(std::to_string(proj_id)).append("\t")
	.append(udf_date).append("\t")
	.append(std::to_string(udf_number)).append("\t")
	.append(udf_text).append("\t")
	.append(std::to_string(udf_code_id)).append("\n");
}

std::string Udf::get_tsv(){ return tsv; }