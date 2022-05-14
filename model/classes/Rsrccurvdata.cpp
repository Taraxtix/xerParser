//
// Created by sorat on 12/05/2022.
//

#include "Rsrccurvdata.h"

Rsrccurvdata::Rsrccurvdata(const std::string *header, const std::string *params)
{
	tsv = "%R\t";
	for (uint i = 0; i < params->length(); i++)
	{
		if (header[i] == "curv_id")
		{
			if (!params[i].empty())
			{
				curv_id = stoi(params[i]);
			}
		}
		else if (header[i] == "curv_name")
		{
			curv_name = params[i];
		}
		else if (header[i] == "default_flag")
		{
			default_flag = params[i];
		}
		else if (header[i] == "pct_usage_0")
		{
			pct_usage_0 = params[i];
		}
		else if (header[i] == "pct_usage_1")
		{
			pct_usage_1 = params[i];
		}
		else if (header[i] == "pct_usage_2")
		{
			pct_usage_2 = params[i];
		}
		else if (header[i] == "pct_usage_3")
		{
			pct_usage_3 = params[i];
		}
		else if (header[i] == "pct_usage_4")
		{
			pct_usage_4 = params[i];
		}
		else if (header[i] == "pct_usage_5")
		{
			pct_usage_5 = params[i];
		}
		else if (header[i] == "pct_usage_6")
		{
			pct_usage_6 = params[i];
		}
		else if (header[i] == "pct_usage_7")
		{
			pct_usage_7 = params[i];
		}
		else if (header[i] == "pct_usage_8	")
		{
			pct_usage_8 = params[i];
		}
		else if (header[i] == "pct_usage_9")
		{
			pct_usage_9 = params[i];
		}
		else if (header[i] == "pct_usage_10")
		{
			pct_usage_10 = params[i];
		}
		else if (header[i] == "pct_usage_11")
		{
			pct_usage_11 = params[i];
		}
		else if (header[i] == "pct_usage_12")
		{
			pct_usage_12 = params[i];
		}
		else if (header[i] == "pct_usage_13")
		{
			pct_usage_13 = params[i];
		}
		else if (header[i] == "pct_usage_14")
		{
			pct_usage_14 = params[i];
		}
		else if (header[i] == "pct_usage_15")
		{
			pct_usage_15 = params[i];
		}
		else if (header[i] == "pct_usage_16")
		{
			pct_usage_16 = params[i];
		}
		else if (header[i] == "pct_usage_17")
		{
			pct_usage_17 = params[i];
		}
		else if (header[i] == "pct_usage_18")
		{
			pct_usage_18 = params[i];
		}
		else if (header[i] == "pct_usage_19")
		{
			pct_usage_19 = params[i];
		}
		else if (header[i] == "pct_usage_20")
		{
			pct_usage_20 = params[i];
		}
	}
	tsv.append(std::to_string(curv_id)).append("\t").append(curv_name).append("\t").append(default_flag).append("\t").append(pct_usage_0).append("\t").append(pct_usage_1).append("\t").append(pct_usage_2).append("\t").append(pct_usage_3).append("\t").append(pct_usage_4).append("\t").append(pct_usage_5).append("\t").append(pct_usage_6).append("\t").append(pct_usage_7).append("\t").append(pct_usage_8).append("\t").append(pct_usage_9).append("\t").append(pct_usage_10).append("\t").append(pct_usage_11).append("\t").append(pct_usage_12).append("\t").append(pct_usage_13).append("\t").append(pct_usage_14).append("\t").append(pct_usage_15).append("\t").append(pct_usage_16).append("\t").append(pct_usage_17).append("\t").append(pct_usage_18).append("\t").append(pct_usage_19).append("\t").append(pct_usage_20).append("\n");
}
