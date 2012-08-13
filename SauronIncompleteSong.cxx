#include <iostream>

#include "SauronIncompleteSongCLP.h"

int main( int argc, char * argv[] )
{
  PARSE_ARGS;

  std::cout<< elvenRings    <<" Rings for the Elven-kings under the sky,"<<std::endl
           << dwarfRings    <<" for the Dwarf-lords in their halls of stone,"<<std::endl
           << menRings      <<" for Mortal Men doomed to die,"<<std::endl
           << darkLordRings << " for the Dark Lord on his dark throne,"<<std::endl
           <<"In the Land of Mordor where the Shadows lie,"<<std::endl
           << darkLordRings << " ring to rule them all, "
             << darkLordRings << " ring to find them,"<<std::endl
           << darkLordRings << " ring to bring them all "
             <<"and in the darkness bind them"<<std::endl
           <<"In the Land of Mordor where the Shadows lie."<<std::endl;
  
  return EXIT_SUCCESS;
}