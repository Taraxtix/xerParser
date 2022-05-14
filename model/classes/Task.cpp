//
// Created by sorat on 13/05/2022.
//

#include "Task.h"

Task::Task(const std::string *header, const std::string *params){
	tsv = "%R\t";
	for(uint i = 0; i < params->length(); i++){
		if(header[i] == "task_id"){ task_id = stoi(params[i]);}
		else if(header[i] == "proj_id"){ proj_id = stoi(params[i]);}
		else if(header[i] == "wbs_id"){ wbs_id = stoi(params[i]);}
		else if(header[i] == "clndr_id"){ clndr_id = stoi(params[i]);}
		else if(header[i] == "rsrc_id"){ rsrc_id = stoi(params[i]);}
		else if(header[i] == "location_id"){ location_id = stoi(params[i]);}
		else if(header[i] == "total_float_hr_cnt"){ total_float_hr_cnt = stof(params[i]);}
		else if(header[i] == "free_float_hr_cnt"){ free_float_hr_cnt = stof(params[i]);}
		else if(header[i] == "remain_drtn_hr_cnt"){ remain_drtn_hr_cnt = stof(params[i]);}
		else if(header[i] == "float_path"){ float_path = stof(params[i]);}
		else if(header[i] == "float_path_order"){ float_path_order = stof(params[i]);}
		else if(header[i] == "phys_complete_pct"){ phys_complete_pct = params[i];}
		else if(header[i] == "rev_fdbk_flag"){ rev_fdbk_flag = params[i];}
		else if(header[i] == "est_wt"){ est_wt = params[i];}
		else if(header[i] == "lock_plan_flag"){ lock_plan_flag = params[i];}
		else if(header[i] == "auto_compute_act_flag"){ auto_compute_act_flag = params[i];}
		else if(header[i] == "complete_pct_type"){ complete_pct_type = params[i];}
		else if(header[i] == "task_type"){ task_type = params[i];}
		else if(header[i] == "duration_type"){ duration_type = params[i];}
		else if(header[i] == "status_code"){ status_code = params[i];}
		else if(header[i] == "task_code"){ task_code = params[i];}
		else if(header[i] == "task_name"){ task_name = params[i];}
		else if(header[i] == "act_work_qty"){ act_work_qty = params[i];}
		else if(header[i] == "remain_work_qty"){ remain_work_qty = params[i];}
		else if(header[i] == "target_work_qty"){ target_work_qty = params[i];}
		else if(header[i] == "target_drtn_hr_cnt"){ target_drtn_hr_cnt = params[i];}
		else if(header[i] == "target_equip_qty"){ target_equip_qty = params[i];}
		else if(header[i] == "act_equip_qty"){ act_equip_qty = params[i];}
		else if(header[i] == "remain_equip_qty"){ remain_equip_qty = params[i];}
		else if(header[i] == "cstr_type"){ cstr_type = params[i];}
		else if(header[i] == "priority_type"){ priority_type = params[i];}
		else if(header[i] == "guid"){ guid = params[i];}
		else if(header[i] == "tmpl_guid"){ tmpl_guid = params[i];}
		else if(header[i] == "cstr_type2"){ cstr_type2 = params[i];}
		else if(header[i] == "driving_path_flag"){ driving_path_flag = params[i];}
		else if(header[i] == "act_this_per_work_qty"){ act_this_per_work_qty = params[i];}
		else if(header[i] == "act_this_per_equip_qty"){ act_this_per_equip_qty = params[i];}
		else if(header[i] == "create_user"){ create_user = params[i];}
		else if(header[i] == "update_user"){ update_user = params[i];}
		else if(header[i] == "cstr_date"){ cstr_date = Date(params[i]);}
		else if(header[i] == "act_start_date"){ act_start_date = Date(params[i]);}
		else if(header[i] == "act_end_date"){ act_end_date = Date(params[i]);}
		else if(header[i] == "late_start_date"){ late_start_date = Date(params[i]);}
		else if(header[i] == "late_end_date"){ late_end_date = Date(params[i]);}
		else if(header[i] == "expect_end_date"){ expect_end_date = Date(params[i]);}
		else if(header[i] == "early_start_date"){ early_start_date = Date(params[i]);}
		else if(header[i] == "early_end_date"){ early_end_date = Date(params[i]);}
		else if(header[i] == "restart_date"){ restart_date = Date(params[i]);}
		else if(header[i] == "reend_date"){ reend_date = Date(params[i]);}
		else if(header[i] == "target_end_date"){ target_end_date = Date(params[i]);}
		else if(header[i] == "rem_late_start_date"){ rem_late_start_date = Date(params[i]);}
		else if(header[i] == "rem_late_end_date"){ rem_late_end_date = Date(params[i]);}
		else if(header[i] == "suspend_date"){ suspend_date = Date(params[i]);}
		else if(header[i] == "resume_date"){ resume_date = Date(params[i]);}
		else if(header[i] == "cstr_date2"){ cstr_date2 = Date(params[i]);}
		else if(header[i] == "external_early_start_date"){ external_early_start_date = Date(params[i]);}
		else if(header[i] == "external_late_end_date"){ external_late_end_date = Date(params[i]);}
		else if(header[i] == "create_date"){ create_date = Date(params[i]);}
		else if(header[i] == "update_date"){ update_date = Date(params[i]);}
	}
	tsv.append(std::to_string(task_id)).append("\t")
	.append(std::to_string(proj_id)).append("\t")
	.append(std::to_string(wbs_id)).append("\t")
	.append(std::to_string(clndr_id)).append("\t")
	.append(std::to_string(rsrc_id)).append("\t")
	.append(std::to_string(location_id)).append("\t")
	.append(std::to_string(total_float_hr_cnt)).append("\t")
	.append(std::to_string(free_float_hr_cnt)).append("\t")
	.append(std::to_string(remain_drtn_hr_cnt)).append("\t")
	.append(std::to_string(float_path)).append("\t")
	.append(std::to_string(float_path_order)).append("\t")
	.append(phys_complete_pct).append("\t")
	.append(rev_fdbk_flag).append("\t")
	.append(est_wt).append("\t")
	.append(lock_plan_flag).append("\t")
	.append(auto_compute_act_flag).append("\t")
	.append(complete_pct_type).append("\t")
	.append(task_type).append("\t")
	.append(duration_type).append("\t")
	.append(status_code).append("\t")
	.append(task_code).append("\t")
	.append(task_name).append("\t")
	.append(act_work_qty).append("\t")
	.append(remain_work_qty).append("\t")
	.append(target_work_qty).append("\t")
	.append(target_drtn_hr_cnt).append("\t")
	.append(target_equip_qty).append("\t")
	.append(act_equip_qty).append("\t")
	.append(remain_equip_qty).append("\t")
	.append(cstr_type).append("\t")
	.append(priority_type).append("\t")
	.append(guid).append("\t")
	.append(tmpl_guid).append("\t")
	.append(cstr_type2).append("\t")
	.append(driving_path_flag).append("\t")
	.append(act_this_per_work_qty).append("\t")
	.append(act_this_per_equip_qty).append("\t")
	.append(create_user).append("\t")
	.append(update_user).append("\t")
	.append(cstr_date.to_string()).append("\t")
	.append(act_start_date.to_string()).append("\t")
	.append(act_end_date.to_string()).append("\t")
	.append(late_start_date.to_string()).append("\t")
	.append(late_end_date.to_string()).append("\t")
	.append(expect_end_date.to_string()).append("\t")
	.append(early_start_date.to_string()).append("\t")
	.append(early_end_date.to_string()).append("\t")
	.append(restart_date.to_string()).append("\t")
	.append(reend_date.to_string()).append("\t")
	.append(target_start_date.to_string()).append("\t")
	.append(target_end_date.to_string()).append("\t")
	.append(rem_late_start_date.to_string()).append("\t")
	.append(rem_late_end_date.to_string()).append("\t")
	.append(suspend_date.to_string()).append("\t")
	.append(resume_date.to_string()).append("\t")
	.append(cstr_date2.to_string()).append("\t")
	.append(external_early_start_date.to_string()).append("\t")
	.append(external_late_end_date.to_string()).append("\t")
	.append(create_date.to_string()).append("\t")
	.append(update_date.to_string()).append("\n");
}