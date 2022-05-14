#include "UDFType.h"

UDFType::UDFType(const std::string header[], const std::string params[]){
    for (int i = 0; i < header->length(); i++){
        if(header[i].empty()) break;
        if (header[i] == "udf_type_id"){
            if(!params[i].empty()){
                udf_type_id = stoi(params[i]);
            }
        } else if (header[i] == "table_name"){
            table_name = params[i];
        } else if (header[i] == "udf_type_name"){
            udf_type_name = params[i];
        } else if (header[i] == "udf_type_label"){
            udf_type_label = params[i];
        } else if (header[i] == "logical_data_type"){
            logical_data_type = params[i];
        } else if (header[i] == "super_flag"){
            super_flag = params[i];
        } else if (header[i] == "indicator_expression"){
            indicator_expression = params[i];
        } else if (header[i] == "summary_indicator_expression"){
            summary_indicator_expression = params[i];
        }
    }
}

std::string UDFType::get_tsv(){
    tsv = "%R\t";
    tsv.append(std::to_string(udf_type_id)).append("\t")
        .append(table_name).append("\t")
        .append(udf_type_name).append("\t")
        .append(udf_type_label).append("\t")
        .append(logical_data_type).append("\t")
        .append(super_flag).append("\t")
        .append(indicator_expression).append("\t")
        .append(summary_indicator_expression).append("\n");
    return tsv;
}