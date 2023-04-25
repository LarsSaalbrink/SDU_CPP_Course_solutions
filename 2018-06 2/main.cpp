#include <iostream>
#include <vector>

std::vector<std::pair<double, int> > readPolynomial(std::string& p){
    //Recursive function :)
    
    if(p.size() == 0){
        return std::vector<std::pair<double, int> >();
    }
    else{
        std::vector<std::pair<double, int> > poly;

        int pos = p.find("^");
        if(pos == std::string::npos){
            //Throw error, incorrect input format
            throw std::invalid_argument("Incorrect input format");
        }
        else{
            //Determine coefficient 
            std::string coeff = p.substr(0, pos-1); 

            //Determine power
            int posP = p.find_first_of("+-", pos);  //Find end of power substring
            std::string power = ((posP == -1) ? "0" : p.substr(pos+1,posP-1));//No more terms -> ^0

            //Add term to result
            poly.push_back(std::make_pair(std::stod(coeff), std::stoi(power)));
            
            //Recursively read the rest of the polynomial
            p.erase(0, posP);  //Remove the read term
            std::vector<std::pair<double, int> > restPoly = readPolynomial(p);

            //Add the rest of the polynomial to the result
            poly.insert(poly.end(), restPoly.begin(), restPoly.end());
            return poly;
        }
    } 
}

int main(){
    std::string pstr = "22x^3+2x^2-1x^0";
    std::vector<std::pair<double, int> > poly = readPolynomial(pstr);

    for (unsigned int i = 0; i < poly.size(); ++i) {
        if (i>0) {
            if (poly[i].first > 0)
                std::cout << "+";
        }
        std::cout << poly[i].first << "x^" << poly[i].second;
    }
    std::cout << std::endl;

    return 0;
}
