//
// Created by sorat on 12/05/2022.
//

#include "Project.h"

Project::Project(const std::string *header, const std::string *params)
{
	tsv = "%R\t";
	for (uint i = 0; i < params->length(); i++)
	{
		if (header[i] == "proj_id")
		{
			if (!params[i].empty())
			{
				proj_id = stoi(params[i]);
			}
		}
		else if (header[i] == "acct_id")
		{
			if (!params[i].empty())
			{
				acct_id = stoi(params[i]);
			}
		}
		else if (header[i] == "orig_proj_id")
		{
			if (!params[i].empty())
			{
				orig_proj_id = stoi(params[i]);
			}
		}
		else if (header[i] == "source_proj_id")
		{
			if (!params[i].empty())
			{
				source_proj_id = stoi(params[i]);
			}
		}
		else if (header[i] == "base_type_id")
		{
			if (!params[i].empty())
			{
				base_type_id = stoi(params[i]);
			}
		}
		else if (header[i] == "clndr_id")
		{
			if (!params[i].empty())
			{
				clndr_id = stoi(params[i]);
			}
		}
		else if (header[i] == "sum_base_proj_id")
		{
			if (!params[i].empty())
			{
				sum_base_proj_id = stoi(params[i]);
			}
		}
		else if (header[i] == "last_fin_dates_id")
		{
			if (!params[i].empty())
			{
				last_fin_dates_id = stoi(params[i]);
			}
		}
		else if (header[i] == "fintmpl_id")
		{
			if (!params[i].empty())
			{
				fintmpl_id = stoi(params[i]);
			}
		}
		else if (header[i] == "location_id")
		{
			if (!params[i].empty())
			{
				location_id = stoi(params[i]);
			}
		}
		else if (header[i] == "new_fin_dates_id")
		{
			if (!params[i].empty())
			{
				new_fin_dates_id = stoi(params[i]);
			}
		}
		else if (header[i] == "fy_start_month_num")
		{
			fy_start_month_num = params[i];
		}
		else if (header[i] == "rsrc_self_add_flag")
		{
			rsrc_self_add_flag = params[i];
		}
		else if (header[i] == "allow_complete_flag")
		{
			allow_complete_flag = params[i];
		}
		else if (header[i] == "rsrc_multi_assign_flag")
		{
			rsrc_multi_assign_flag = params[i];
		}
		else if (header[i] == "checkout_flag")
		{
			checkout_flag = params[i];
		}
		else if (header[i] == "project_flag")
		{
			project_flag = params[i];
		}
		else if (header[i] == "step_complete_flag")
		{
			step_complete_flag = params[i];
		}
		else if (header[i] == "cost_qty_recalc_flag")
		{
			cost_qty_recalc_flag = params[i];
		}
		else if (header[i] == "batch_sum_flag")
		{
			batch_sum_flag = params[i];
		}
		else if (header[i] == "name_sep_char")
		{
			name_sep_char = params[i];
		}
		else if (header[i] == "def_complete_pct_type")
		{
			def_complete_pct_type = params[i];
		}
		else if (header[i] == "proj_short_name")
		{
			proj_short_name = params[i];
		}
		else if (header[i] == "task_code_base")
		{
			task_code_base = params[i];
		}
		else if (header[i] == "task_code_step")
		{
			task_code_step = params[i];
		}
		else if (header[i] == "priority_num")
		{
			priority_num = params[i];
		}
		else if (header[i] == "wbs_max_sum_level")
		{
			wbs_max_sum_level = params[i];
		}
		else if (header[i] == "strgy_priority_num")
		{
			strgy_priority_num = params[i];
		}
		else if (header[i] == "last_checksum")
		{
			last_checksum = params[i];
		}
		else if (header[i] == "critical_drtn_hr_cnt")
		{
			critical_drtn_hr_cnt = params[i];
		}
		else if (header[i] == "def_cost_per_qty")
		{
			def_cost_per_qty = params[i];
		}
		else if (header[i] == "last_recalc_date")
		{
			last_recalc_date = params[i];
		}
		else if (header[i] == "plan_start_date")
		{
			plan_start_date = params[i];
		}
		else if (header[i] == "plan_end_date")
		{
			plan_end_date = params[i];
		}
		else if (header[i] == "scd_end_date")
		{
			scd_end_date = params[i];
		}
		else if (header[i] == "add_date")
		{
			add_date = params[i];
		}
		else if (header[i] == "last_tasksum_date")
		{
			last_tasksum_date = params[i];
		}
		else if (header[i] == "fcst_start_date")
		{
			fcst_start_date = params[i];
		}
		else if (header[i] == "def_duration_type")
		{
			def_duration_type = params[i];
		}
		else if (header[i] == "task_code_prefix")
		{
			task_code_prefix = params[i];
		}
		else if (header[i] == "guid")
		{
			guid = params[i];
		}
		else if (header[i] == "def_qty_type")
		{
			def_qty_type = params[i];
		}
		else if (header[i] == "add_by_name")
		{
			add_by_name = params[i];
		}
		else if (header[i] == "web_local_root_path")
		{
			web_local_root_path = params[i];
		}
		else if (header[i] == "proj_url")
		{
			proj_url = params[i];
		}
		else if (header[i] == "def_rate_type")
		{
			def_rate_type = params[i];
		}
		else if (header[i] == "add_act_remain_flag")
		{
			add_act_remain_flag = params[i];
		}
		else if (header[i] == "act_this_per_link_flag")
		{
			act_this_per_link_flag = params[i];
		}
		else if (header[i] == "def_task_type")
		{
			def_task_type = params[i];
		}
		else if (header[i] == "act_pct_link_flag")
		{
			act_pct_link_flag = params[i];
		}
		else if (header[i] == "critical_path_type")
		{
			critical_path_type = params[i];
		}
		else if (header[i] == "task_code_prefix_flag")
		{
			task_code_prefix_flag = params[i];
		}
		else if (header[i] == "def_rollup_dates_flag")
		{
			def_rollup_dates_flag = params[i];
		}
		else if (header[i] == "use_project_baseline_flag")
		{
			use_project_baseline_flag = params[i];
		}
		else if (header[i] == "rem_target_link_flag")
		{
			rem_target_link_flag = params[i];
		}
		else if (header[i] == "reset_planned_flag")
		{
			reset_planned_flag = params[i];
		}
		else if (header[i] == "allow_neg_act_flag")
		{
			allow_neg_act_flag = params[i];
		}
		else if (header[i] == "sum_assign_level")
		{
			sum_assign_level = params[i];
		}
		else if (header[i] == "last_baseline_update_date")
		{
			last_baseline_update_date = params[i];
		}
		else if (header[i] == "cr_external_key")
		{
			cr_external_key = params[i];
		}
		else if (header[i] == "apply_actuals_date")
		{
			apply_actuals_date = params[i];
		}
		else if (header[i] == "loaded_scope_level")
		{
			loaded_scope_level = params[i];
		}
		else if (header[i] == "export_flag")
		{
			export_flag = params[i];
		}
		else if (header[i] == "baselines_to_export")
		{
			baselines_to_export = params[i];
		}
		else if (header[i] == "baseline_names_to_export")
		{
			baseline_names_to_export = params[i];
		}
		else if (header[i] == "next_data_date")
		{
			next_data_date = params[i];
		}
		else if (header[i] == "close_period_flag")
		{
			close_period_flag = params[i];
		}
		else if (header[i] == "sum_refresh_date")
		{
			sum_refresh_date = params[i];
		}
		else if (header[i] == "trsrcsum_loaded")
		{
			trsrcsum_loaded = params[i];
		}
		else if (header[i] == "sumtask_loaded")
		{
			sumtask_loaded = params[i];
		}
	}
	tsv.append(std::to_string(proj_id)).append("\t").append(std::to_string(acct_id)).append("\t").append(std::to_string(orig_proj_id)).append("\t").append(std::to_string(source_proj_id)).append("\t").append(std::to_string(base_type_id)).append("\t").append(std::to_string(clndr_id)).append("\t").append(std::to_string(sum_base_proj_id)).append("\t").append(std::to_string(last_fin_dates_id)).append("\t").append(std::to_string(fintmpl_id)).append("\t").append(std::to_string(location_id)).append("\t").append(std::to_string(new_fin_dates_id)).append("\t").append(fy_start_month_num).append("\t").append(rsrc_self_add_flag).append("\t").append(allow_complete_flag).append("\t").append(rsrc_multi_assign_flag).append("\t").append(checkout_flag).append("\t").append(project_flag).append("\t").append(step_complete_flag).append("\t").append(cost_qty_recalc_flag).append("\t").append(batch_sum_flag).append("\t").append(name_sep_char).append("\t").append(def_complete_pct_type).append("\t").append(proj_short_name).append("\t").append(task_code_base).append("\t").append(task_code_step).append("\t").append(priority_num).append("\t").append(wbs_max_sum_level).append("\t").append(strgy_priority_num).append("\t").append(last_checksum).append("\t").append(critical_drtn_hr_cnt).append("\t").append(def_cost_per_qty).append("\t").append(last_recalc_date).append("\t").append(plan_start_date).append("\t").append(plan_end_date).append("\t").append(scd_end_date).append("\t").append(add_date).append("\t").append(last_tasksum_date).append("\t").append(fcst_start_date).append("\t").append(def_duration_type).append("\t").append(task_code_prefix).append("\t").append(guid).append("\t").append(def_qty_type).append("\t").append(add_by_name).append("\t").append(web_local_root_path).append("\t").append(proj_url).append("\t").append(def_rate_type).append("\t").append(add_act_remain_flag).append("\t").append(act_this_per_link_flag).append("\t").append(def_task_type).append("\t").append(act_pct_link_flag).append("\t").append(critical_path_type).append("\t").append(task_code_prefix_flag).append("\t").append(def_rollup_dates_flag).append("\t").append(use_project_baseline_flag).append("\t").append(rem_target_link_flag).append("\t").append(reset_planned_flag).append("\t").append(allow_neg_act_flag).append("\t").append(sum_assign_level).append("\t").append(last_baseline_update_date).append("\t").append(cr_external_key).append("\t").append(apply_actuals_date).append("\t").append(loaded_scope_level).append("\t").append(export_flag).append("\t").append(baselines_to_export).append("\t").append(baseline_names_to_export).append("\t").append(next_data_date).append("\t").append(close_period_flag).append("\t").append(sum_refresh_date).append("\t").append(trsrcsum_loaded).append("\t").append(sumtask_loaded).append("\n");
}
