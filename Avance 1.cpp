/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int op1, op2, op3, op4, i=0, condicion;//Menú
    cout<<" \t ***Mel VideoGames Store*** \n";
    cout<<"Elige unas de las siguentes opciones \n";
    cout<<"1.Agregar Articulo \n";
    cout<<"2.Modificar Articulo \n";
    cout<<"3.Eliminar Articulo \n";
    cout<<"4.Lista de Articulos Vigentes \n";
    cout<<"5.Limpiar Pantalla \n";
    cout<<"6.Salir \n";
    cin>> op1;

    switch(op1)
       {
           case 1://Agregar Articulo(s)
           {
                do
               {
                   i= i + 1;
                   int numart, ano, preciou; 
                   float total;
                   string clas, desc, nomart, caract, gen;
                   cout<<"Agregar Nombre del Videojuego\n";
                   cin>> nomart;
                   cout<<"Agregar Numero del Articulo\n";
                   cin>> numart;
                   cout<<"Agregar Ano del Lanzamiento\n";
                   cin>> ano;
                   cout<<"Agregar Clasificacion\n";
                   cin.ignore();
                   getline(cin, clas);
                   cout<<"Agregar Descripcion\n";
                   cin.ignore();
                   getline(cin, desc);
                   cout<<"Agregar Caracteristicas\n";
                   cin.ignore();
                   getline(cin, caract);
                   cout<<"Agregar Genero\n";
                   cin>> gen; 
                   cout<<"Precio Unitario\n";
                   cin>> preciou;
                   cout<<"Su total con el Iva es:\n";
                   total = (preciou*0.16) + preciou;
                   cout << total << endl;
                   cout << "Su Videojuego se registro se registro correctamente, si desea escribir otro escriba 1:, si desea regresar al menu presione 2:\n";
                   cin>> condicion;
                   if(condicion==2)// Terminar el registro
                   {
                       return main();
                   }
               } while (condicion == 1 && i<3);
           
           } return main();
           break;

           case 2://Modificar Articulo(s)
           {
           cout<<"Que desearia modificar \n";
           }
           break;
           case 3://Eliminar Articulo(s)
           {
           cout<<"Que Articulo desearia eliminar \n";
           }
           break;

           case 4://Lista de Videojuegos
           {
           cout<<"Aqui tienes la lista de videojuegos\n";
           }
           break;

           case 5://Limpiar Pantalla
           {
            cout<<"¿Estas seguro de desear *Limpiar la pantalla*? \n";
            cout<<"1.Si \n";
            cout<<"2.No \n";
                    cin>>op3;
                if(op3==1)
                {
                    system("clear"); 
                    return main();
                }  
                else
                {
                    return main();
                }
           }
                break;

           case 6://Salir
           {
            cout<<"¿Estas seguro de querer *salir* ? \n";
            cout<<"1.Si \n";
            cout<<"2.No \n";
            cin>> op3;
            if(op3==1)
            {
                cout<<"Gracias por Usarme, Lindo Dia/Tarde/Noche:)\n";
               return 0; 
            }
            else
            {
                system("clear"); 
                return main();
            }
           }
            break;

       }

    return 0;
}