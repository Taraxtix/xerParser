//
// Created by Taraxtix on 09/05/2022.
//

#include "Writer.h"

void writeXER(Reader reader, const std::string& filename){
	std::ofstream fout(filename);
	if(not fout.is_open()){
		fprintf(stderr,  "Error while opening the file");
		exit(EXIT_FAILURE);
	}
	fout
	<< reader.accounts.get_tsv()
	<< reader.actvcodes.get_tsv()
	<< reader.actvtypes.get_tsv()
	<< reader.calendars.get_tsv()
	<< reader.currencies.get_tsv()
	<< reader.rCatTypes.get_tsv()
	<< reader.rCatValues.get_tsv()
	<< reader.roleRates.get_tsv()
	<< reader.roles.get_tsv()
	<< reader.udfs.get_tsv()
	<< reader.udftypes.get_tsv()
	<< reader.wbss.get_tsv()
	<< reader.taskRsrcs.get_tsv()
	<< reader.obss.get_tsv()
	<< reader.nonWorks.get_tsv()
	<< reader.fintmpls.get_tsv()
	<< reader.pcattypes.get_tsv()
	<< reader.pcatvals.get_tsv()
	<< reader.taskpreds.get_tsv()
	<< reader.projpcats.get_tsv()
	<< reader.projects.get_tsv()
	<< reader.rsrcs.get_tsv()
	<< reader.rsrcrcats.get_tsv()
	<< reader.rsrccurvdatas.get_tsv()
	<< reader.rsrcrates.get_tsv()
	<< reader.schedoptions.get_tsv()
	<< reader.taskactvs.get_tsv()
	<< reader.taskprocs.get_tsv()
	<< reader.tasks.get_tsv();
}