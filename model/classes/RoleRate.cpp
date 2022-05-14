#include "RoleRate.h"

RoleRate::RoleRate(const std::string header[], const std::string params[]){
    for (int i = 0; i < header->length(); i++){
        if(header[i].empty()) break;
        if (header[i] == "role_rate_id"){
            if(!params[i].empty()){
                role_rate_id = stoi(params[i]);
            }
        } else if (header[i] == "role_id"){
            if(!params[i].empty()){
                role_id = stoi(params[i]);
            }
        } else if (header[i] == "cost_per_qty"){
            if(!params[i].empty()){
                cost_per_qty = stoi(params[i]);
            }
        } else if (header[i] == "cost_per_qty2"){
            if(!params[i].empty()){
                cost_per_qty2 = stoi(params[i]);
            }
        } else if (header[i] == "cost_per_qty3"){
            if(!params[i].empty()){
                cost_per_qty3 = stoi(params[i]);
            }
        } else if (header[i] == "cost_per_qty4"){
            if(!params[i].empty()){
                cost_per_qty4 = stoi(params[i]);
            }
        } else if (header[i] == "cost_per_qty5"){
            if(!params[i].empty()){
                cost_per_qty5 = stoi(params[i]);
            }
        }
    }
}

std::string RoleRate::get_tsv(){
    tsv = "%R\t";
    tsv.append(std::to_string(role_rate_id)).append("\t")
        .append(std::to_string(role_id)).append("\t")
        .append(std::to_string(cost_per_qty)).append("\t")
        .append(std::to_string(cost_per_qty2)).append("\t")
        .append(std::to_string(cost_per_qty3)).append("\t")
        .append(std::to_string(cost_per_qty4)).append("\t")
        .append(std::to_string(cost_per_qty5)).append("\n");
    return tsv;
}