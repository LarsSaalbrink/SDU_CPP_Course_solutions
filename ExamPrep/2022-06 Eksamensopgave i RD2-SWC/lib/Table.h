#ifndef TABLE_H
#define TABLE_H

#include <vector>
#include <ostream>
#include <tuple>

class Table
{
public:
    Table() {}
    void setHeaders(const std::string& h1, const std::string& h2, const std::string& h3);
    void addData(const int i, const std::string& s, const double d);
    void outputData(std::ostream &os);

private:
    std::tuple<std::string, std::string, std::string> mHeaders;
    std::vector<std::tuple<int, std::string, double>> mData;
};

#endif // TABLE_H
