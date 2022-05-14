#include "RCatType.h"

RCatType::RCatType(const std::string header[], const std::string params[]){
    for (int i = 0; i < header->length(); i++){
        if(header[i].empty()) break;
        if (header[i] == "rsrc_catg_short_len"){
            if(!params[i].empty()){
                rsrc_catg_short_len = stoi(params[i]);
            }
        } else if (header[i] == "rsrc_catg_type_id"){
            if(!params[i].empty()){
                rsrc_catg_type_id = stoi(params[i]);
            }
        } else if (header[i] == "seq_num"){
            if(!params[i].empty()){
                seq_num = stoi(params[i]);
            }
        } else if (header[i] == "rsrc_catg_type"){
                rsrc_catg_type = params[i];
        } else if (header[i] == "super_flag"){
                super_flag = params[i];
        }
    }
}

std::string RCatType::get_tsv(){
    tsv = "%R\t";
    tsv.append(std::to_string(rsrc_catg_short_len)).append("\t")
        .append(rsrc_catg_type).append("\t")
        .append(std::to_string(rsrc_catg_type_id)).append("\t")
        .append(std::to_string(seq_num)).append("\t")
        .append(super_flag).append("\n");

    return tsv;
}