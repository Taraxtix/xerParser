//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_PCATVAL_H
#define XERPARSER_PCATVAL_H

#include <iostream>

class Pcatval{
public:
		int proj_catg_id;
		int proj_catg_type_id;
		int seq_num;
		int parent_proj_catg_id;
		std::string proj_catg_short_name;
		std::string proj_catg_name;

		std::string tsv;

		Pcatval(const std::string *header, const std::string *params);
};


#endif //XERPARSER_PCATVAL_H
