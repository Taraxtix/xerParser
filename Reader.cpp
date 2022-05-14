#include <cassert>
#include "Reader.h"

#define MAX_HEADER_LEN 255 // TODO: Count the real maximum (255 is not the real value)

void Reader::split(std::string strings[], const std::string &str)
{
	int currIndex = 0, i = 0;
	int startIndex = 0, endIndex;
	while (i <= str.length())
	{
		if (str[i] == '\t' || i == str.length())
		{
			endIndex = i;
			std::string subStr;
			subStr.append(str, startIndex, endIndex - startIndex);
			strings[currIndex] = subStr;
			currIndex++;
			startIndex = endIndex + 1;
		}
		i++;
	}
}

int Reader::parse(const std::string &filename)
{
	std::ifstream fin(filename);
	if (fin.is_open())
	{
		std::string line;
		std::string current_table;
		std::string current_header[MAX_HEADER_LEN];
		std::string current_record[MAX_HEADER_LEN];

		while (getline(fin, line))
		{
			// Split line into tab-separated parts
			std::string parts[MAX_HEADER_LEN] = {""};
			split(parts, line);
			// check if line starts with %T then it's a table
			if (parts[0] == "%T")
			{
				current_table = parts[1];
			}
			// check if line starts with %F then it's a header
			else if (parts[0] == "%F")
			{
				for (uint i = 0; i < MAX_HEADER_LEN; i++)
				{
					if (parts[i + 1].empty())
						break;
					current_header[i] = parts[i + 1];
				}
			}
			// check if line starts with %R then it is a record that could be parsed to the class
			// matching the table name
			else if (parts[0] == "%R")
			{
				for (uint i = 0; i < MAX_HEADER_LEN; i++)
				{
					if (current_header[i].empty())
						break;
					current_record[i] = parts[i + 1];
				}
				add(current_table, current_header, current_record);
			}
		}
		fin.close();
	}
	else
	{
		std::cout << "Unable to open" << std::endl;
	}
	return 0;
}

void Reader::add(const std::string &table, const std::string *header, const std::string *record)
{
	assert(not(table.empty() || header == nullptr || record == nullptr));

	if (table == "ACCOUNT\r")
	{
		accounts.add(Account(header, record));
	}
	else if (table == "ACTVCODE\r")
	{
		actvcodes.add(Actvcode(header, record));
	}
	else if (table == "ACTVTYPE\r")
	{
		actvtypes.add(Actvtype(header, record));
	}
	else if (table == "CALENDAR\r")
	{
		calendars.add(Calendar(header, record));
	}
	else if (table == "PROJWBS\r")
	{
		wbss.add(Wbs(header, record));
	}
	else if (table == "UDFVALUE\r")
	{
		udfs.add(Udf(header, record));
	}
	else if (table == "UDFTYPE\r")
	{
		udftypes.add(UDFType(header, record));
	}
	else if (table == "ROLE\r")
	{
		roles.add(Role(header, record, this));
	}
	else if (table == "CURRTYPE\r")
	{
		currencies.add(Currtype(header, record));
	}
	else if (table == "RCATTYPE\r")
	{
		rCatTypes.add(RCatType(header, record));
	}
	else if (table == "RCATVAL\r")
	{
		rCatValues.add(RCatValue(header, record));
	}
	else if (table == "ROLERATE\r")
	{
		roleRates.add(RoleRate(header, record));
	}
	else if (table == "TASKRSRC\r")
	{
		taskRsrcs.add(TaskRsrc(header, record));
	}
	else if (table == "OBS\r")
	{
		obss.add(Obs(header, record));
	}
	else if (table == "NONWORK\r")
	{
		nonWorks.add(NonWork(header, record));
	}
	else if (table == "FINTMPL\r")
	{
		fintmpls.add(Fintmpl(header, record));
	}
	else if (table == "PCATTYPE\r")
	{
		pcattypes.add(Pcattype(header, record));
	}
	else if (table == "PCATVAL\r")
	{
		pcatvals.add(Pcatval(header, record));
	}
	else if (table == "TASKPRED\r")
	{
		taskpreds.add(Taskpred(header, record));
	}
	else if (table == "PROJPCAT\r")
	{
		projpcats.add(Projpcat(header, record));
	}
	else if (table == "PROJECT\r")
	{
		projects.add(Project(header, record));
	}
	else if (table == "RSRC\r")
	{
		rsrcs.add(Rsrc(header, record, this));
	}
	else if (table == "RSRCRCAT\r")
	{
		rsrcrcats.add(Rsrcrcat(header, record));
	}
	else if (table == "RSRCCURVDATA\r")
	{
		rsrccurvdatas.add(Rsrccurvdata(header, record));
	}
	else if (table == "RSRCRATE\r")
	{
		rsrcrates.add(Rsrcrate(header, record));
	}
	else if (table == "SCHEDOPTION\r")
	{
		schedoptions.add(Schedoption(header, record));
	}
	else if (table == "TASKACTV\r")
	{
		taskactvs.add(Taskactv(header, record));
	}
	else if (table == "TASKPROC\r")
	{
		taskprocs.add(Taskproc(header, record));
	}else if (table == "TASK\r")
	{
		tasks.add(Task(header, record));
	}
}