#ifndef EXRPARSER_READER_H
#define EXRPARSER_READER_H

#include <fstream>
#include <iostream>
#include <string>

#include "model/Accounts.h"
#include "model/Actvcodes.h"
#include "model/Actvtypes.h"
#include "model/Calendars.h"
#include "model/Wbss.h"
#include "model/Udfs.h"
#include "model/UDFTypes.h"
#include "model/Roles.h"
#include "model/Currtypes.h"
#include "model/RCatTypes.h"
#include "model/RCatValues.h"
#include "model/RoleRates.h"
#include "model/TaskRsrcs.h"
#include "model/Obss.h"
#include "model/NonWorks.h"
#include "model/Fintmpls.h"
#include "model/Pcattypes.h"
#include "model/Pcatvals.h"
#include "model/Taskpreds.h"
#include "model/Projpcats.h"
#include "model/Projects.h"
#include "model/Rsrcs.h"
#include "model/Rsrcrcats.h"
#include "model/Rsrccurvdatas.h"
#include "model/Rsrcrates.h"
#include "model/Schedoptions.h"
#include "model/Taskactvs.h"
#include "model/Taskprocs.h"
#include "model/Tasks.h"

class Reader{
public:
		int parse(const std::string& filename);
		Wbss wbss;
		Udfs udfs;
		UDFTypes udftypes;
		Accounts accounts;
		Actvcodes actvcodes;
		Actvtypes actvtypes;
		Calendars calendars;
		Roles roles;
		Currtypes currencies;
		RCatTypes rCatTypes;
		RCatValues rCatValues;
		RoleRates roleRates;
		TaskRsrcs taskRsrcs;
		Obss obss;
		NonWorks nonWorks;
		Fintmpls fintmpls;
		Pcattypes pcattypes;
		Pcatvals pcatvals;
		Taskpreds taskpreds;
		Projpcats projpcats;
		Projects projects;
		Rsrcs rsrcs;
		Rsrcrcats rsrcrcats;
		Rsrccurvdatas rsrccurvdatas;
		Rsrcrates rsrcrates;
		Schedoptions schedoptions;
		Taskactvs taskactvs;
		Taskprocs taskprocs;
		Tasks tasks;

	private:
		static void split(std::string strings[], const std::string &str);

		void add(const std::string& table, const std::string *header, const std::string *record);
};

#endif //EXRPARSER_READER_H
