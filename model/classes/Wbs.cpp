#include "Wbs.h"

// TODO: Convert string types to dates anticip_start_date & anticip_end_date
Wbs::Wbs(const std::string header[], const std::string params[]){
    tsv = "%R\t";
    for (int i = 0; i < header->length(); i++){
        if(header[i].empty()) continue;
        if (header[i] == "wbs_id"){
            wbs_id = stoi(params[i]);
        } else if (header[i] == "proj_id") {
            proj_id = stoi(params[i]);
        } else if (header[i] =="obs_id"){
            obs_id = stoi(params[i]);
        } else if (header[i] == "seq_num") {
            seq_num = stoi(params[i]);
        } else if (header[i] == "est_wt"){
            est_wt = stoi(params[i]);
        } else if (header[i] == "proj_node_flag"){
            proj_node_flag = params[i];
        } else if (header[i] == "sum_data_flag"){
            sum_data_flag = params[i];
        } else if (header[i] == "status_code"){
            status_code = params[i];
        } else if (header[i] == "wbs_short_name"){
            wbs_short_name = params[i];
        } else if (header[i] == "wbs_name"){
            wbs_name = params[i];
        } else if (header[i] == "phase_id"){
            phase_id = stoi(params[i]);
        } else if(header[i] == "prent_wbs_id"){
            parent_wbs_id = stoi(params[i]);
        } else if (header[i] == "ev_user_pct"){
            ev_user_pct = stoi(params[i]);
        } else if (header[i] == "ev_etc_user_value"){
            ev_etc_user_value = stod(params[i]);
        } else if (header[i] == "orig_cost"){
            orig_cost = stod(params[i]);
        } else if (header[i] == "indep_remain_total_cost"){
            indep_remain_total_cost = stod(params[i]);
        } else if (header[i] == "ann_dscnt_rate_pct"){
            ann_dscnt_rate_pct = stod(params[i]);
        } else if (header[i] == "dscnt_period_type"){
            dscnt_period_type = stoi(params[i]);
        } else if (header[i] =="indep_remain_work_qty"){
            indep_remain_work_qty = stod(params[i]);
        } else if (header[i] == "anticip_start_date"){
            anticip_start_date = Date(params[i]);
        } else if (header[i] == "anticip_end_date"){
            anticip_end_date = Date(params[i]);
        } else if (header[i] == "ev_compute_type") {
            ev_compute_type = params[i];
        } else if (header[i] == "ev_etc_compute_type"){
            ev_etc_compute_type = params[i];
        } else if (header[i] == "guid"){
            guid = params[i];
        } else if (header[i] == "tmpl_guid"){
            tmpl_guid = params[i];
        } else if (header[i] == "plan_open_state"){
            plan_open_state = params[i];
        }
    }
    tsv.append(std::to_string(wbs_id)).append("\t")
			.append(std::to_string(proj_id)).append("\t")
			.append(std::to_string(obs_id)).append("\t")
			.append(std::to_string(seq_num)).append("\t")
			.append(std::to_string(est_wt)).append("\t")
			.append(proj_node_flag).append("\t")
			.append(sum_data_flag).append("\t")
			.append(status_code).append("\t")
			.append(wbs_short_name).append("\t")
			.append(wbs_name).append("\t")
			.append(std::to_string(phase_id)).append("\t")
			.append(std::to_string(parent_wbs_id)).append("\t")
			.append(std::to_string(ev_user_pct)).append("\t")
			.append(std::to_string(ev_etc_user_value)).append("\t")
			.append(std::to_string(orig_cost)).append("\t")
			.append(std::to_string(indep_remain_total_cost)).append("\t")
			.append(std::to_string(ann_dscnt_rate_pct)).append("\t")
			.append(std::to_string(dscnt_period_type)).append("\t")
			.append(std::to_string(indep_remain_work_qty)).append("\t")
			.append(anticip_start_date.to_string()).append("\t")
			.append(anticip_end_date.to_string()).append("\t")
			.append(ev_compute_type).append("\t")
			.append(ev_etc_compute_type).append("\t")
			.append(guid).append("\t")
			.append(tmpl_guid).append("\t")
			.append(plan_open_state).append("\n");
}

std::string Wbs::get_tsv(){
    return tsv;
}