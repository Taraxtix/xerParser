//
// Created by sorat on 12/05/2022.
//

#include "Rsrc.h"
#include "../../Reader.h"

Rsrc::Rsrc(const std::string *header, const std::string *params, Reader *readerObj)
{
	tsv = "%R\t";
	for (uint i = 0; i < params->length(); i++)
	{
		if (header[i] == "rsrc_id")
		{
			if (!params[i].empty())
			{
				rsrc_id = stoi(params[i]);
			}
		}
		else if (header[i] == "parent_rsrc_id")
		{
			if (!params[i].empty())
			{
				parent_rsrc_id = stoi(params[i]);
			}
		}
		else if (header[i] == "clndr_id")
		{
			if (!params[i].empty())
			{
				clndr_id = stoi(params[i]);
			}
		}
		else if (header[i] == "role_id")
		{
			if (!params[i].empty())
			{
				role_id = stoi(params[i]);
			}
		}
		else if (header[i] == "shift_id")
		{
			if (!params[i].empty())
			{
				shift_id = stoi(params[i]);
			}
		}
		else if (header[i] == "user_id")
		{
			if (!params[i].empty())
			{
				user_id = stoi(params[i]);
			}
		}
		else if (header[i] == "pobs_id")
		{
			if (!params[i].empty())
			{
				pobs_id = stoi(params[i]);
			}
		}
		else if (header[i] == "rsrc_seq_num")
		{
			if (!params[i].empty())
			{
				rsrc_seq_num = stoi(params[i]);
			}
		}
		else if (header[i] == "curr_id")
		{
			if (!params[i].empty())
			{
				curr_id = stoi(params[i]);
			}
		}
		else if (header[i] == "unit_id")
		{
			if (!params[i].empty())
			{
				unit_id = stoi(params[i]);
			}
		}
		else if (header[i] == "location_id")
		{
			if (!params[i].empty())
			{
				location_id = stoi(params[i]);
			}
		}
		else if (header[i] == "guid")
		{
			guid = params[i];
		}
		else if (header[i] == "email_addr")
		{
			email_addr = params[i];
		}
		else if (header[i] == "employee_code")
		{
			employee_code = params[i];
		}
		else if (header[i] == "office_phone")
		{
			office_phone = params[i];
		}
		else if (header[i] == "rsrc_name")
		{
			rsrc_name = params[i];
		}
		else if (header[i] == "rsrc_short_name")
		{
			rsrc_short_name = params[i];
		}
		else if (header[i] == "rsrc_title_name")
		{
			rsrc_title_name = params[i];
		}
		else if (header[i] == "def_qty_per_hr")
		{
			def_qty_per_hr = params[i];
		}
		else if (header[i] == "cost_qty_type")
		{
			cost_qty_type = params[i];
		}
		else if (header[i] == "ot_factor")
		{
			ot_factor = params[i];
		}
		else if (header[i] == "active_flag")
		{
			active_flag = params[i];
		}
		else if (header[i] == "auto_compute_act_flag")
		{
			auto_compute_act_flag = params[i];
		}
		else if (header[i] == "ot_flag")
		{
			ot_flag = params[i];
		}
		else if (header[i] == "rsrc_type")
		{
			rsrc_type = params[i];
		}
		else if (header[i] == "rsrc_notes")
		{
			rsrc_notes = params[i];
		}
		else if (header[i] == "load_tasks_flag")
		{
			load_tasks_flag = params[i];
		}
		else if (header[i] == "level_flag")
		{
			level_flag = params[i];
		}
		else if (header[i] == "last_checksum")
		{
			last_checksum = params[i];
		}
	}
	reader = readerObj;
	tsv
		.append(std::to_string(rsrc_id))
		.append("\t")
		.append(std::to_string(parent_rsrc_id))
		.append("\t")
		.append(std::to_string(clndr_id))
		.append("\t")
		.append(std::to_string(role_id))
		.append("\t")
		.append(std::to_string(shift_id))
		.append("\t")
		.append(std::to_string(user_id))
		.append("\t")
		.append(std::to_string(pobs_id))
		.append("\t")
		.append(std::to_string(rsrc_seq_num))
		.append("\t")
		.append(std::to_string(curr_id))
		.append("\t")
		.append(std::to_string(unit_id))
		.append("\t")
		.append(std::to_string(location_id))
		.append("\t")
		.append(guid)
		.append("\t")
		.append(email_addr)
		.append("\t")
		.append(employee_code)
		.append("\t")
		.append(office_phone)
		.append("\t")
		.append(other_phone)
		.append("\t")
		.append(rsrc_name)
		.append("\t")
		.append(rsrc_short_name)
		.append("\t")
		.append(rsrc_title_name)
		.append("\t")
		.append(def_qty_per_hr)
		.append("\t")
		.append(cost_qty_type)
		.append("\t")
		.append(ot_factor)
		.append("\t")
		.append(active_flag)
		.append("\t")
		.append(auto_compute_act_flag)
		.append("\t")
		.append(def_cost_qty_link_flag)
		.append("\t")
		.append(ot_flag)
		.append("\t")
		.append(rsrc_type)
		.append("\t")
		.append(rsrc_notes)
		.append("\t")
		.append(load_tasks_flag)
		.append("\t")
		.append(level_flag)
		.append("\t")
		.append(last_checksum)
		.append("\n");
}

std::vector<Rsrcrate> Rsrc::getRsrcRate()
{
	std::vector<Rsrcrate> toReturn;
	toReturn = reader->rsrcrates.getAll();
	return toReturn;
}
