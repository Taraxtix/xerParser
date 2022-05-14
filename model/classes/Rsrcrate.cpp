//
// Created by sorat on 12/05/2022.
//

#include "Rsrcrate.h"

Rsrcrate::Rsrcrate(const std::string *header, const std::string *params)
{
	tsv = "%R\t";
	for (uint i = 0; i < params->length(); i++)
	{
		if (header[i] == "rsrc_rate")
		{
			if (!params[i].empty())
			{
				rsrc_rate = stoi(params[i]);
			}
		}
		else if (header[i] == "rsrc_id")
		{
			if (!params[i].empty())
			{
				rsrc_id = stoi(params[i]);
			}
		}
		else if (header[i] == "max_qty_per_hr")
		{
			if (!params[i].empty())
			{
				max_qty_per_hr = stoi(params[i]);
			}
		}
		else if (header[i] == "cost_per_qty")
		{
			if (!params[i].empty())
			{
				cost_per_qty = stoi(params[i]);
			}
		}
		else if (header[i] == "cost_per_qty2")
		{
			if (!params[i].empty())
			{
				cost_per_qty2 = stoi(params[i]);
			}
		}
		else if (header[i] == "cost_per_qty3")
		{
			if (!params[i].empty())
			{
				cost_per_qty3 = stoi(params[i]);
			}
		}
		else if (header[i] == "cost_per_qty4")
		{
			if (!params[i].empty())
			{
				cost_per_qty4 = stoi(params[i]);
			}
		}
		else if (header[i] == "cost_per_qty5")
		{
			if (!params[i].empty())
			{
				cost_per_qty5 = stoi(params[i]);
			}
		}
		else if (header[i] == "shift_period_id")
		{
			if (!params[i].empty())
			{
				shift_period_id = stoi(params[i]);
			}
		}
		else if (header[i] == "start_date")
		{
			start_date = Date(params[i]);
		}
	}
	tsv
		.append(std::to_string(rsrc_rate))
		.append("\t")
		.append(std::to_string(rsrc_id))
		.append("\t")
		.append(std::to_string(max_qty_per_hr))
		.append("\t")
		.append(std::to_string(cost_per_qty))
		.append("\t")
		.append(std::to_string(cost_per_qty2))
		.append("\t")
		.append(std::to_string(cost_per_qty3))
		.append("\t")
		.append(std::to_string(cost_per_qty4))
		.append("\t")
		.append(std::to_string(cost_per_qty5))
		.append("\t")
		.append(std::to_string(shift_period_id))
		.append("\t")
		.append(start_date.to_string())
		.append("\n");
}