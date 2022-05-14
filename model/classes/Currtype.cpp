//
// Created by Taraxtix on 07/05/2022.
//

#include "Currtype.h"

Currtype::Currtype(const std::string header[], const std::string params[]){
	for (int i = 0; i < header->length(); i++){
        if(header[i].empty()) break;
        if (header[i] == "curr_id"){
            if(!params[i].empty()){
                curr_id = stoi(params[i]);
            }
        } else if (header[i] == "decimal_digit_cnt"){
            if(!params[i].empty()){
                decimal_digit_cnt = stoi(params[i]);
            }
        } else if (header[i] == "curr_symbol"){
            if (!params[i].empty()){
                curr_symbol = params[i];
            }
        } else if (header[i] == "decimal_symbol"){
            if(!params[i].empty()){
                decimal_symbol = params[i];
            }
        } else if (header[i] == "digit_group_symbol"){
            if(!params[i].empty()){
                digit_group_symbol = params[i];
            }
        } else if (header[i] == "pos_curr_fmt_type"){
            if(!params[i].empty()){
                pos_curr_fmt_type = params[i];
            }
        } else if (header[i] == "neg_curr_fmt_type"){
            if(!params[i].empty()){
                neg_curr_fmt_type = params[i];
            }
        } else if (header[i] == "curr_type"){
            if(!params[i].empty()){
                curr_type = params[i];
            }
        } else if (header[i] == "curr_short_name"){
            if(!params[i].empty()){
                curr_short_name = params[i];
            }
        } else if (header[i] == "group_digit_cnt"){
            if(!params[i].empty()){
                group_digit_cnt = stoi(params[i]);
            }
        } else if (header[i] == "base_exch_rate"){
            if(!params[i].empty()){
                base_exch_rate = stof(params[i]);
            }
        }  
    } 
}

std::string Currtype::get_tsv() {
    tsv = "%R\t";
    tsv.append(std::to_string(curr_id)).append("\t")
        .append(std::to_string(decimal_digit_cnt)).append("\t")
        .append(curr_symbol).append("\t")
        .append(decimal_symbol).append("\t")
        .append(digit_group_symbol).append("\t")
        .append(pos_curr_fmt_type).append("\t")
        .append(neg_curr_fmt_type).append("\t")
        .append(curr_type).append("\t")
        .append(curr_short_name).append("\t")
        .append(std::to_string(group_digit_cnt)).append("\t")
        .append(std::to_string(base_exch_rate)).append("\n");
    return tsv;
}