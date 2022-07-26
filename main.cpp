#include <iostream>
#include <fstream>
#include <string.h>
#include <algorithm>
#include <fstream>
#include <vector>

// #include "CreateInput.h"
// #include "sort_algorithm.h"
#include "Application.h"

using namespace std;

int main(int argc, char** argv)
{
  Application app;
  vector<string> input = app.cmd_parsing_input(argc,argv);
  vector<string> algorName; 
  algorName = app.cmd_parsing_algorithm(argc,argv);
  // algorName.push_back("shell");
  // algorName.push_back("merge");
  // algorName.push_back("heap");
  // algorName.push_back("quick");
  // algorName.push_back("quick3");
  // algorName.push_back("bubble");
  // algorName.push_back("selection");
  // algorName.push_back("ínertion");
  app.run(input,algorName);
  
  
  return 0;
}