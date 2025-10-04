#include <iostream>
#include <fstream>
#include <map>
#include <string>

int main()
{

    std::ifstream logfile("app.log");
    if (!logfile)
    {
        std::cerr << "error : couldn't find logfile" << std::endl;
        ;
        return 1;
    }
    std::map<std::string, int> loglevelcounts;
    std::string line;
    int totallines = 0;

    while (std::getline(logfile, line))
    {
        totallines++;
        size_t startpos = line.find('[');
        size_t endpos = line.find(']');
        if (startpos != std::string::npos && endpos != std::string::npos)
        {
            std::string level = line.substr(startpos + 1, endpos - startpos - 1);
            loglevelcounts[level]++;
        }
    }
    logfile.close();
    std::cout << "Log file processing complete." << std::endl;

    std::ofstream reportfile("report.text");
    if (!reportfile)
    {
        std::cerr << "error report file not found" << std::endl;
        return 1;
    }
    reportfile << "--- Log Analysis Summary ---" << std::endl;
    reportfile << "Total Lines Processed: " << totallines << std::endl;
    reportfile << "--------------------------" << std::endl;
    for (const auto &pair : loglevelcounts)
    {
        reportfile << pair.first << "messages:" << pair.second << std::endl;
    }
    reportfile.close();
    std::cout << "Summary report generated successfully: report.txt" << std::endl;
    return 0;
}