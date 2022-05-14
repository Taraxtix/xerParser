//
// Created by sorat on 12/05/2022.
//

#include "Taskpred.h"

Taskpred::Taskpred(const std::string *header, const std::string *params)
{
	tsv = "%R\t";
	for (uint i = 0; i < params->size(); i++)
	{
		if (header[i] == "task_pred_id")
		{
			if (!params[i].empty())
			{
				task_pred_id = stoi(params[i]);
			}
		}
		else if (header[i] == "task_id")
		{
			if (!params[i].empty())
			{
				task_id = stoi(params[i]);
			}
		}
		else if (header[i] == "pred_task_id")
		{
			if (!params[i].empty())
			{
				pred_task_id = stoi(params[i]);
			}
		}
		else if (header[i] == "proj_id")
		{
			if (!params[i].empty())
			{
				proj_id = stoi(params[i]);
			}
		}
		else if (header[i] == "pred_proj_id")
		{
			if (!params[i].empty())
			{
				pred_proj_id = stoi(params[i]);
			}
		}
		else if (header[i] == "pred_type")
		{
			pred_type = params[i];
		}
		else if (header[i] == "lag_hr_cnt")
		{
			lag_hr_cnt = params[i];
		}
		else if (header[i] == "comments")
		{
			comments = params[i];
		}
		else if (header[i] == "float_path")
		{
			float_path = params[i];
		}
		else if (header[i] == "aref")
		{
			aref = params[i];
		}
		else if (header[i] == "arls")
		{
			arls = params[i];
		}
	}
	tsv.append(std::to_string(task_pred_id)).append("\t").append(std::to_string(task_id)).append("\t").append(std::to_string(pred_task_id)).append("\t").append(std::to_string(proj_id)).append("\t").append(std::to_string(pred_proj_id)).append("\t").append(pred_type).append("\t").append(lag_hr_cnt).append("\t").append(comments).append("\t").append(float_path).append("\t").append(aref).append("\t").append(arls).append("\n");
}
