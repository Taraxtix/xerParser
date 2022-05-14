//
// Created by sorat on 12/05/2022.
//

#include "Taskproc.h"

Taskproc::Taskproc(const std::string *header, const std::string *params)
{
	tsv = "%R\t";
	for (uint i = 0; i < params->length(); i++)
	{
		if (header[i] == "proc_id")
		{
			if (!params[i].empty())
			{
				proc_id = stoi(params[i]);
			}
		}
		else if (header[i] == "task_id")
		{
			if (!params[i].empty())
			{
				task_id = stoi(params[i]);
			}
		}
		else if (header[i] == "proj_id")
		{
			if (!params[i].empty())
			{
				proj_id = stoi(params[i]);
			}
		}
		else if (header[i] == "seq_num")
		{
			if (!params[i].empty())
			{
				seq_num = stoi(params[i]);
			}
		}
		else if (header[i] == "proc_name")
		{
			proc_name = params[i];
		}
		else if (header[i] == "complete_flag")
		{
			complete_flag = params[i];
		}
		else if (header[i] == "proc_wt")
		{
			proc_wt = params[i];
		}
		else if (header[i] == "complete_pct")
		{
			complete_pct = params[i];
		}
		else if (header[i] == "proc_descr")
		{
			proc_descr = params[i];
		}
	}
	tsv
		.append(std::to_string(proc_id))
		.append("\t")
		.append(std::to_string(task_id))
		.append("\t")
		.append(std::to_string(proj_id))
		.append("\t")
		.append(std::to_string(seq_num))
		.append("\t")
		.append(proc_name)
		.append("\t")
		.append(complete_flag)
		.append("\t")
		.append(proc_wt)
		.append("\t")
		.append(complete_pct)
		.append("\t")
		.append(proc_descr)
		.append("\n");
}
