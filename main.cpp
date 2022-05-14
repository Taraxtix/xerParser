#include <iostream>
#include "Reader.h"
#include "Writer.h"

using namespace std;

int main()
{
    Reader reader;

    reader.parse("../sample.xer");

		writeXER(reader, "../out.xer");

    /*for (Udf udf : reader.udfs.getByProject(368))
    {
        cout << udf.get_tsv() << std::endl;
    }

    cout << "*********** TEST WBS **********************" << endl;
    for (Wbs wbs : reader.wbss.getAll())
    {
        cout << wbs.get_tsv() << endl;
    }
    cout << "**************** CALENDAR *************************" << endl;
    for (Calendar cal : reader.calendars.getAll())
    {
        cout << cal.get_tsv() << endl;
    }

    cout << "***************** CURRENCIES **********************" << endl;
    for (Currtype curr : reader.currencies.getAll())
    {
        cout << "Currencies " << curr.get_tsv() << endl;
    }

    cout << "***************** Resrouece and Resource Rates **********************" << endl;

    for (Rsrc rsrc : reader.rsrcs.getAll())
    {
        std::vector<Rsrcrate> rRates = reader.rsrcrates.getByRsrcId(rsrc.rsrc_id);
        std::vector<TaskRsrc> trs = reader.taskRsrcs.getByRsrcId(rsrc.rsrc_id);
        for (Rsrcrate rr : rRates)
        {
            cout << to_string(rr.rsrc_id) << endl;
        }

        cout << "RSRC_ID => Task_ID" << endl;
        for (TaskRsrc tr : trs)
        {
            cout << to_string(tr.rsrc_id) << " => " << to_string(tr.task_id) << endl;
        }
    }*/
}