#include <iostream>

using namespace std;

template <class T>
class nodo
 {
 public:
  T dato;
  nodo<T> *sgte;
 public:
  /*
  nodo (T d, nodo<T>*sig)
   {
   dato = d;
   sgte = sig;
   }
  */
  nodo (T d = T(), nodo<T>*sig = NULL): dato(d), sgte(sig){};
  void imprimir()
   {cout<<dato<<",["<<this<<"],"<<sgte<<endl;}
 //friend class lista;
 };

template <class T>
class lista
 {
 private:
  nodo<T> *cabeza;
  nodo<T> *cola;
 public:
  lista() {cabeza=nullptr; cola=nullptr;}
  void agregar(T d)
   {
   nodo<T> *nuevo = new nodo<T>(d);
   if(cabeza==NULL)
    {cabeza = nuevo; cola = nuevo; cola->sgte=0;}
   else
    {cola->sgte=nuevo; cola=nuevo; cola->sgte=0;}
   }

  void imprimir()
   {
   nodo<T> *temp = cabeza;
   while (temp != 0)
    {cout<<temp->dato<<" - "; temp=temp->sgte;}
   cout<<"FIN"<<endl;
   }

  void maxrec(nodo<T>*maxi=cabeza)
   {

   }
  /*
  lista (nodo<T>*cabe=nullptr, nodo<T>col=nullptr)
   {
   cabeza = cabe;
   cola = col;
   }
  */
 };

 int main()
  {
  nodo<int> *n1 = new nodo<int>();
  n1->imprimir();
  nodo<int> *n2 = new nodo<int>(10);
  n2->imprimir();
  nodo<int> *n3 = new nodo<int>(5, n1);
  n3->imprimir();

  cout<<endl<<endl;

  lista<int> *l1 = new lista<int>();
  l1->imprimir();
  l1->agregar(10);
  l1->agregar(20);
  l1->imprimir();
  return 0;
  }


