//
// Created by Taraxtix on 10/05/2022.
//

#include "TaskRsrc.h"

TaskRsrc::TaskRsrc(const std::string header[], const std::string params[]){
	tsv = "%R\t";
	for(uint i = 0; i < header->length(); i++){
		if(header[i] == "taskrsrc_id"){ 
			if(!params[i].empty()){
			taskrsrc_id = std::stoi(params[i]); 
			}
		}
		else if(header[i] == "task_id"){ 
			if(header[i] == "taskrsrc_id"){
				task_id = std::stoi(params[i]); 
				}
		}
		else if(header[i] == "proj_id"){
			if(!params[i].empty()){ 
			proj_id = std::stoi(params[i]); 
			}
		}
		else if(header[i] == "cost_qty_link_flag"){ cost_qty_link_flag = params[i]; }
		else if(header[i] == "role_id"){ 
			if(!params[i].empty()){
			role_id = std::stoi(params[i]); 
			}
		}
		else if(header[i] == "acct_id"){ 
			if(!params[i].empty()){
				acct_id = std::stoi(params[i]); 
			}
		}
		else if(header[i] == "rsrc_id"){ 
			if(!params[i].empty()){
				rsrc_id = std::stoi(params[i]); 
			}
		}
		else if(header[i] == "pobs_id"){ 
			if(!params[i].empty()){
				pobs_id = std::stoi(params[i]); 
				}
			}
		else if(header[i] == "skill_level"){ skill_level = params[i]; }
		else if(header[i] == "remain_qty"){ 
			if(!params[i].empty()){
				if(!params[i].empty()){
					remain_qty = stof(params[i]);
				} 
			}
		else if(header[i] == "target_qty"){ 
			if(!params[i].empty()){
				target_qty = stof(params[i]); 
				}
		}
		else if(header[i] == "remain_qty_per_hour"){ 
			if(!params[i].empty()){
				remain_qty_per_hour = stof(params[i]); 
				}
		}
		else if(header[i] == "target_lag_drtn_hr_cnt"){ 
			if(!params[i].empty()){
				target_lag_drtn_hr_cnt = stof(params[i]); 
				}
		}
		else if(header[i] == "target_qty_per_hour"){ 
			if(!params[i].empty()){
				target_qty_per_hour = stof(params[i]); 
			}
		}
		else if(header[i] == "act_ot_qty"){ act_ot_qty = params[i]; }
		else if(header[i] == "act_reg_qty"){ act_reg_qty = params[i]; }
		else if(header[i] == "relag_drtn_hr_cnt"){ relag_drtn_hr_cnt = params[i]; }
		else if(header[i] == "ot_factor"){ ot_factor = params[i]; }
		else if(header[i] == "cost_per_qty"){ cost_per_qty = params[i]; }
		else if(header[i] == "target_cost"){ target_cost = params[i]; }
		else if(header[i] == "act_reg_cost"){ act_reg_cost = params[i]; }
		else if(header[i] == "act_ot_cost"){ act_ot_cost = params[i]; }
		else if(header[i] == "remain_cost"){ remain_cost = params[i]; }
		else if(header[i] == "act_start_date"){ act_start_date = params[i]; }
		else if(header[i] == "act_end_date"){ act_end_date = params[i]; }
		else if(header[i] == "restart_date"){ restart_date = params[i]; }
		else if(header[i] == "reend_date"){ reend_date = params[i]; }
		else if(header[i] == "target_start_date"){ target_start_date = params[i]; }
		else if(header[i] == "target_end_date"){ target_end_date = params[i]; }
		else if(header[i] == "rem_late_start_date"){ rem_late_start_date = params[i]; }
		else if(header[i] == "rem_late_end_date"){ rem_late_end_date = params[i]; }
		else if(header[i] == "rollup_dates_flag"){ rollup_dates_flag = params[i]; }
		else if(header[i] == "target_crv"){ target_crv = params[i]; }
		else if(header[i] == "remain_crv"){ remain_crv = params[i]; }
		else if(header[i] == "actual_crv"){ actual_crv = params[i]; }
		else if(header[i] == "ts_pend_act_end_flag"){ ts_pend_act_end_flag = params[i]; }
		else if(header[i] == "guid"){ guid = params[i]; }
		else if(header[i] == "rate_type"){ rate_type = params[i]; }
		else if(header[i] == "act_this_per_cost"){ act_this_per_cost = params[i]; }
		else if(header[i] == "act_this_per_qty"){ act_this_per_qty = params[i]; }
		else if(header[i] == "curv_id"){ curv_id = params[i]; }
		else if(header[i] == "rsrc_type"){ rsrc_type = params[i]; }
		else if(header[i] == "cost_per_qty_source_type"){ cost_per_qty_source_type = params[i]; }
		else if(header[i] == "create_user"){ create_user = params[i]; }
		else if(header[i] == "create_date"){ create_date = params[i]; }
		else if(header[i] == "cbs_id"){ cbs_id = params[i]; }
		else if(header[i] == "has_rsrchours"){ has_rsrchours = params[i]; }
		else if(header[i] == "taskrsrc_sum_id"){ taskrsrc_sum_id = params[i]; }
	}
	}
	tsv.append(std::to_string(taskrsrc_id)).append("\t")
	.append(std::to_string(task_id)).append("\t")
	.append(std::to_string(proj_id)).append("\t")
	.append(cost_qty_link_flag).append("\t")
	.append(std::to_string(role_id)).append("\t")
	.append(std::to_string(acct_id)).append("\t")
	.append(std::to_string(rsrc_id)).append("\t")
	.append(std::to_string(pobs_id)).append("\t")
	.append(skill_level).append("\t")
	.append(std::to_string(remain_qty)).append("\t")
	.append(std::to_string(target_qty)).append("\t")
	.append(std::to_string(remain_qty_per_hour)).append("\t")
	.append(std::to_string(target_lag_drtn_hr_cnt)).append("\t")
	.append(std::to_string(target_qty_per_hour)).append("\t")
	.append(act_ot_qty).append("\t")
	.append(act_reg_qty).append("\t")
	.append(relag_drtn_hr_cnt).append("\t")
	.append(ot_factor).append("\t")
	.append(cost_per_qty).append("\t")
	.append(target_cost).append("\t")
	.append(act_reg_cost).append("\t")
	.append(act_ot_cost).append("\t")
	.append(remain_cost).append("\t")
	.append(act_start_date).append("\t")
	.append(act_end_date).append("\t")
	.append(restart_date).append("\t")
	.append(reend_date).append("\t")
	.append(target_start_date).append("\t")
	.append(target_end_date).append("\t")
	.append(rem_late_start_date).append("\t")
	.append(rem_late_end_date).append("\t")
	.append(rollup_dates_flag).append("\t")
	.append(target_crv).append("\t")
	.append(remain_crv).append("\t")
	.append(actual_crv).append("\t")
	.append(ts_pend_act_end_flag).append("\t")
	.append(guid).append("\t")
	.append(rate_type).append("\t")
	.append(act_this_per_cost).append("\t")
	.append(act_this_per_qty).append("\t")
	.append(curv_id).append("\t")
	.append(rsrc_type).append("\t")
	.append(cost_per_qty_source_type).append("\t")
	.append(create_user).append("\t")
	.append(create_date).append("\t")
	.append(cbs_id).append("\t")
	.append(has_rsrchours).append("\t")
	.append(taskrsrc_sum_id).append("\n");
}
