#include <iostream>
#include <string>

using namespace std;

int main()
{
  string word = "DEBUGGER";
  string out = "";
  for (int i = 0; i < word.size(); i++){
    out.append("_");
  }
  cout << "cherchez le mot: "  << out << endl;

  int fehlt = 0;
  while(out.find("_") != string::npos && fehlt <){
      char input;
      cin >> input;
      if (word.find(input) == string::npos){
        fehlt++;
      }
      else{

          for (int i = 0; i < word.size(); i++){
            if (word.at(i) == input){
                out.at(i) = input;
            }
          }
      }

      cout << "cherchez le mot: " << out << " Tu as encor " << 6 - fehlt << endl;
  }
  if (out.find("_") == string::npos){
    cout << "\nBravooo! Tu as gagner" << endl;
  }
  else{
    cout << "\nPerdu!!!!!!!!!" << endl;
  }

    return 0;
}
