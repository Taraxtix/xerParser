#include "RCatValue.h"


RCatValue::RCatValue(const std::string header[], const std::string params[]){
    for (int i = 0; i < header->length(); i++){
        if(header[i].empty()) break;
        if (header[i] == "parent_rsrc_catg_id"){
            if(!params[i].empty()){
                parent_rsrc_catg_id = stoi(params[i]);
            }
        } else if (header[i] == "rsrc_catg_id"){
            if(!params[i].empty()){
                rsrc_catg_id = stoi(params[i]);
            }
        } else if (header[i] == "rsrc_catg_type_id"){
            if(!params[i].empty()){
                rsrc_catg_type_id = stoi(params[i]);
            }
        } else if (header[i] == "seq_num"){
            if(!params[i].empty()){
                seq_num = stoi(params[i]);
            }
        } else if (header[i] == "rsrc_catg_name"){
            rsrc_catg_name = params[i];
        } else if (header[i] == "rsrc_catg_short_name"){
            rsrc_catg_short_name = params[i];
        } 
    }
}

std::string RCatValue::get_tsv(){
    tsv = "%R\t";
    tsv.append(std::to_string(rsrc_catg_id).append("\t"))
        .append(std::to_string(rsrc_catg_type_id)).append("\t")
        .append(rsrc_catg_short_name).append("\t")
        .append(rsrc_catg_name).append("\t")
        .append(std::to_string(parent_rsrc_catg_id)).append("\t")
        .append(std::to_string(seq_num)).append("\n");
		return tsv;
}