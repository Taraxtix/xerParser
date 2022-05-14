#include "Role.h"
#include "../../Reader.h"

Role::Role(const std::string header[], const std::string params[], Reader *readerObj){
    for (int i = 0; i < header->length(); i++){
        if(header[i].empty()) break;
        if (header[i] == "role_id"){
            if(!params[i].empty()){
                role_id = stoi(params[i]);
            }
        } else if (header[i] == "parent_role_id"){
            if(!params[i].empty()){
                parent_role_id = stoi(params[i]);
            }
        } else if (header[i] == "seq_num"){
            if(!params[i].empty()){
                seq_num = stoi(params[i]);
            }
        } else if (header[i] == "role_name"){
            role_name = params[i];
        } else if (header[i] == "role_short_name"){
            role_short_name = params[i];
        } else if (header[i] == "pobs_id"){
            if(!params[i].empty()){
                pobs_id = stoi(params[i]);
            }
        } else if (header[i] == "def_cost_qty_link_flag"){
            def_cost_qty_link_flag = params[i];
        } else if (header[i] == "cost_qty_type"){
            cost_qty_type = params[i];
        } else if (header[i] == "role_descr"){
            role_descr = params[i];
        } else if (header[i] == last_checksum){
            last_checksum = params[i];
        }
    }
    reader = readerObj;
}

std::string Role::get_tsv(){
    tsv = "%R\t";
    tsv.append(std::to_string(role_id)).append("\t")
        .append(std::to_string(parent_role_id)).append("\t")
        .append(std::to_string(seq_num)).append("\t")
        .append(role_name).append("\t")
        .append(role_short_name).append("\t")
        .append(std::to_string(pobs_id)).append("\t")
        .append(def_cost_qty_link_flag).append("\t")
        .append(cost_qty_type).append("\t")
        .append(role_descr).append("\t")
        .append(last_checksum).append("\n");
    return tsv;
}

std::vector<RoleRate> Role::getRoleRate(){
    std::vector<RoleRate> rates;

    reader->roleRates.getAll();
    return rates;
}