//
// Created by Taraxtix on 07/05/2022.
//

#include "Calendar.h"

Calendar::Calendar(const std::string header[], const std::string params[]){
	std::string clndr_id_str;
	std::string day_hr_cnt_str;
	std::string week_hr_cnt_str;
	std::string month_hr_cnt_str;
	std::string year_hr_cnt_str;

	tsv = "%R\t";

	for(uint i = 0; i < header->length(); i++){
		if(header[i].empty()) break;

		if(header[i] == "clndr_id"){
			if(!params[i].empty()){
				clndr_id = stoi(params[i]);
				clndr_id_str = params[i];
			}
		}
		else if(header[i] == "day_hr_cnt"){
			if(!params[i].empty()){

				day_hr_cnt = stof(params[i]);
				day_hr_cnt_str = params[i];
			}
		}
		else if(header[i] == "week_hr_cnt"){
			if(!params[i].empty()){
				week_hr_cnt = stof(params[i]);
				week_hr_cnt_str = params[i];
			}
		}
		else if(header[i] == "month_hr_cnt"){
			if(!params[i].empty()){
				month_hr_cnt = stof(params[i]);
				month_hr_cnt_str = params[i];
			}
		}
		else if(header[i] == "year_hr_cnt"){
			if(!params[i].empty()){
				year_hr_cnt = stof(params[i]);
				year_hr_cnt_str = params[i];
			}
		}
		else if(header[i] == "base_clndr_id"){ base_clndr_id = params[i]; }
		else if(header[i] == "clndr_data"){ clndr_data = params[i]; }
		else if(header[i] == "clndr_name"){ clndr_name = params[i]; }
		else if(header[i] == "clndr_type"){ clndr_type = params[i]; }
		else if(header[i] == "default_flag"){ default_flag = params[i]; }
		else if(header[i] == "last_chng_date"){ last_chng_date = params[i]; }
		else if(header[i] == "proj_id"){ proj_id = params[i]; }
	}
	tsv.append(clndr_id_str).append("\t")
					.append(day_hr_cnt_str).append("\t")
					.append(week_hr_cnt_str).append("\t")
					.append(month_hr_cnt_str).append("\t")
					.append(year_hr_cnt_str).append("\t")
					.append(base_clndr_id).append("\t")
					.append(clndr_data).append("\t")
					.append(clndr_name).append("\t")
					.append(clndr_type).append("\t")
					.append(default_flag).append("\t")
					.append(last_chng_date).append("\t")
					.append(proj_id).append("\n");
}

std::string Calendar::get_tsv(){
	tsv = "";
	tsv.append(std::to_string(clndr_id)).append("\t")
					.append(std::to_string(day_hr_cnt)).append("\t")
					.append(std::to_string(week_hr_cnt)).append("\t")
					.append(std::to_string(month_hr_cnt)).append("\t")
					.append(std::to_string(year_hr_cnt)).append("\t")
					.append(base_clndr_id).append("\t")
					.append(clndr_data).append("\t")
					.append(clndr_name).append("\t")
					.append(clndr_type).append("\t")
					.append(default_flag).append("\t")
					.append(last_chng_date).append("\t")
					.append(proj_id).append("\n");
	return tsv;

}
