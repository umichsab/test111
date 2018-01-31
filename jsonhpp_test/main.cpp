#include <iostream>
#include "json.hpp"
#include <fstream>


using json = nlohmann::json;

void read_json(const json &json_doc){

    json metadata = json_doc["metadata"];
    int solution_dimension = metadata["solution dimension"];
    std::string name = metadata["name"];


}

int main(){

    std::ifstream data_json("../data.json");

    json doc;
    data_json >> doc;

    read_json(doc);
    data_json.close();

    return 0;
}
