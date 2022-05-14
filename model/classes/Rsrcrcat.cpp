//
// Created by sorat on 12/05/2022.
//

#include "Rsrcrcat.h"

Rsrcrcat::Rsrcrcat(const std::string *header, const std::string *params)
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
		else if (header[i] == "rsrc_catg_type_id")
		{
			if (!params[i].empty())
			{
				rsrc_catg_type_id = stoi(params[i]);
			}
		}
		else if (header[i] == "rsrc_catg_id")
		{
			if (!params[i].empty())
			{
				rsrc_catg_id = stoi(params[i]);
			}
		}
	}
	tsv.append(std::to_string(rsrc_id)).append("\t").append(std::to_string(rsrc_catg_type_id)).append("\t").append(std::to_string(rsrc_catg_id)).append("\n");
}
