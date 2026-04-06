#include <stdio.h>
const int cond1 = 10;

int main() {

  // Costrutto if, else, elseif 
  
  if (cond1 > 10) {
    print("Sei dentro il braccio if");
  } else if (cond1 == 10) {
    print("Sei nel braccio else if");
  } else {
    print("Se dentro il braccio else");
  }

  // Condizioni innestate
  
  if (cond1) {
    if (cond > 10) {
      print("Sei nel braccio innestato");
    }
  }
  
  return 0;
}
