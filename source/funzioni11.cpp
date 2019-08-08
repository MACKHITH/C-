/*Rifare gli esercizi somma, sottrai, moltiplica, dividi e resto tenendo conto che i numeri possano anche essere
negativi*/
#include <iostream>
using namespace std;

int somma(int numero, int numero2){
  if (numero>0 && numero2>0) {
    while (numero2!=0) {
      numero++;
      numero2--;
    }
    return numero;
  } else {
    if (numero<0 && numero2>0) {
      numero=numero*-1;
      while (numero2!=0) {
        numero--;
        numero2--;
      }
      numero=numero*-1;
      return numero;
    } else {
      if (numero>0 && numero2<0) {
        numero2=numero2*-1;
        while (numero2!=0) {
          numero--;
          numero2--;
        }
        return numero;
      } else {
        if (numero<0 && numero2<0) {
          while (numero2!=0) {
            numero--;
            numero2++;
          }
          return numero;
        }
      }
    }
  }
}

int sottrai(int numero, int numero2){
  if (numero>0 && numero2>0) {
    while (numero2!=0) {
      numero--;
      numero2--;
    }
    return numero;
  } else {
    if (numero>0 && numero2<0) {
      while (numero2!=0){
        numero--;
        numero2++;
      }
      return numero;
    } else {
      if (numero<0 && numero2>0) {
        while (numero2!=0){
           numero--;
           numero2--;
        }
        return numero;
      } else {
        if (numero<0 && numero2<0) {
          numero=numero*-1;
          numero2=numero2*-1;
          if (numero>numero2){
            while (numero2!=0)
            {
              numero--;
              numero2--;
            }
            numero=numero*-1;
            return numero;
          } else{
            if (numero<numero2)
            {
              while (numero!=0)
              {
                numero2--;
                numero--;
              }
              return numero2;
            }
          }
          while (numero!=0){
            numero++;
            numero2++;
          }
          return numero2;
        }
      }
    }
  }
}

int moltiplica(int numero, int numero2){
  int risultato=0;
  if (numero>0 && numero2>0) {
    while (numero2!=0) {
      risultato=risultato+numero;
      numero2--;
    }
    return risultato;
  } else {
    if (numero>0 && numero2<0) {
      numero2=numero2*-1;
      while (numero2!=0) {
        risultato=risultato+numero;
        numero2--;
      }
      return risultato*-1;
    } else {
      if (numero<0 && numero2>0) {
        numero=numero*-1;
        while (numero2!=0) {
          risultato=risultato+numero;
          numero2--;
        }
        return risultato*-1;
      } else {
        if (numero<0 && numero2<0) {
          numero=numero*-1;
          numero2=numero2*-1;
          while (numero2!=0) {
            risultato=risultato+numero;
            numero2--;
          }
          return risultato;
        }
      }
    }
  }
}

int dividi(int numero, int numero2){
  int quoziente=0;
  if (numero>0 && numero2>0) { 
    if (numero>numero)
    {
      while (numero>=numero2) {
        numero=numero-numero2;
        quoziente++;
      }
      return quoziente;
    } else
    {
      if (numero<numero)
      {
        while (numero<=numero2) {
          numero2=numero2-numero;
          quoziente++;
        }
        return quoziente;
      }
    }
  } else {
    if (numero>0 && numero2<0) {
      numero2=numero2*-1;
      if (numero>numero)
      {
        while (numero>=numero2) {
          numero=numero-numero2;
          quoziente++;
        }
        return quoziente*-1;
      } else
      {
        if (numero<numero)
        {
          while (numero<=numero2) {
            numero2=numero2-numero;
            quoziente++;
          }
          return quoziente*-1;
        }
      }      
    } else {
      if (numero<0 && numero2>0) {
        numero=numero*-1;
        while (numero>=numero2)
        {
          numero=numero-numero2;
          quoziente++;
        }
        return quoziente*-1;
        if (numero>numero)
        {
          while (numero>=numero2)
          {
            numero=numero-numero2;
            quoziente++;
          }
          return quoziente*-1;
        } else
        {
          if (numero<numero)
          {
            while (numero<=numero2) {
              numero2=numero2-numero;
              quoziente++;
            }
            return quoziente*-1;
          }
        }
      } else {
        if (numero<0 && numero2<0) {
          numero=numero*-1;
          numero2=numero2*-1;
          while (numero>=numero2) {
            numero=numero-numero2;
            quoziente++;
          }
          return quoziente;
          if (numero>numero)
          {
            numero=numero*-1;
            numero2=numero2*-1;
            while (numero>=numero2) {
              numero=numero-numero2;
              quoziente++;
            }
            return quoziente;
          } else
          {
            if (numero<numero)
            {
              numero=numero*-1;
              numero2=numero2*-1;
              while (numero<=numero2) {
                numero2=numero2-numero;
                quoziente++;
              }
              return quoziente;
            }
          }
        }
      }
    }
  }
}

int resto(int numero, int numero2){
  int resto=numero;
  if (numero>numero2) {
    while (resto>=numero2) {
      resto=resto-numero2;
    }
    return resto;
  } else {
    if (numero>0 && numero2<0) {
      
    } else {
      if (numero<0 && numero2>0) {
        
      } else {
        if (numero<0 && numero2<0) {
          
        }
      }
    }
  }
}

int main(int argc, char const *argv[]) {
    int num1, num2;

    cin>>num1;
    cin>>num2;

    cout<<"Somma: "<<somma(num1, num2)<<endl;
    cout<<"Sottrazione: "<<sottrai(num1, num2)<<endl;
    cout<<"Moltiplicazione: "<<moltiplica(num1, num2)<<endl;
    cout<<"Divisione: "<<dividi(num1, num2)<<endl;
    cout<<"Resto: "<<resto(num1, num2)<<endl;
    return 0;
}
