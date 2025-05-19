#include <iostream>
using namespace std;
int main(){
    int edad,opcion;
    float dinero, precio;
    dinero = 7;

    cout<<"Ingrese su edad"<<endl;
    cin>>edad;

    if(edad>12){
        cout<<"El usuario puede continuar con su compra"<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cout<<" 1)Estudiante"<<endl;
        cout<<" 2)Adulto Mayor"<<endl;
        cout<<" 3)Ver todo"<<endl;
        cin>>opcion;

        switch (opcion){

            case 1:
                cout<<"Menu:"<<endl;
                cout<<"1) Combo hamburguesa $8 "<<" Precio con descuento: "<<8-8*0.25<<endl;
                cout<<"2) Combo Pizza Personal $7"<<" Precio con descuento "<<7-7*0.25<<endl;
                cout<<"3) Almuerzo ejecutivo $10"<<" Precio con descuento "<< 10-10*0.25<<endl;
                cout<<"Opcion:";
                cin>> opcion;
            
                switch (opcion){
                    case 1:
                        precio = 8-8*0.25;
                        if (dinero>=precio){
                            cout<<"Comprado el combo de hamburguesa le quedan $"<<dinero - precio;
                        }
                        else{
                            cout<<"Para el combo de hamburguesa le faltan: "<< (precio - dinero);
                        }
                        break;
                        
                    case 2:
                        precio = 7-7*0.25;
                        if (dinero>=precio){
                            cout<<"Comprado el combo de pizza, le quedan $"<<dinero - precio;
                        }
                        else{
                            cout<<"Para el combo de pizza le faltan: "<< (precio - dinero);
                        }
                        break;
                        break;
                        
                        case 3:
                        precio = 10-10*0.25;
                        if (dinero>=precio){
                            cout<<"Comprado el almuerzo ejecutivo, le quedan $"<<dinero - precio;
                        }
                        else{
                            cout<<"Para el almuerzo ejecutivo le faltan: "<< (precio - dinero);
                        }
                        break;
                }
                
                break;

            case 2:
                cout<<"Menu:"<<endl;
                cout<<"1) Sopa nutritiva $6"<<" Precio con descuento:"<<6-6*0.30<<endl;
                cout<<"2) Plato casero $9"<<" Precio con descuento:"<<9-9*0.30<<endl;
                cout<<"3) Postre y Café $5"<<" Precio con descuento:"<<5-5*0.30<<endl;
                cout<<"Opcion:";
                cin>> opcion;

                switch (opcion){
                    case 1:
                        precio = 6-6*0.30;
                        if (dinero>=precio){
                            cout<<"Comprado sopa nutritiva, le quedan $"<<dinero - precio;
                        }
                        else{
                            cout<<"Para el plato casero, le faltan: "<< (precio - dinero);
                        }
                        break;
                        
                    case 2:
                        precio = 9-9*0.30;
                        if (dinero>=precio){
                            cout<<"Comprado plato casero, le quedan $"<<dinero - precio;
                        }
                        else{
                            cout<<"Para plato casero le faltan: "<< (precio - dinero);
                        }
                        break;
                        
                        case 3:
                        precio = 5-5*0.30;
                        if (dinero>=precio){
                            cout<<"Comprado postre y café, le quedan $"<<dinero - precio;
                        }
                        else{
                            cout<<"Para postre y café le faltan: "<< (precio - dinero);
                        }
                        break;
                }

                break;
            case 3: 
                cout<<"Menu"<<endl;
                cout<<"1) Combo hamburguesa $8 "<<" Precio con descuento: "<< 8-8*0.25<<endl;
                cout<<"2) Combo Pizza Personal $7"<< " Precio con descuento "<< 7-7*0.25<<endl;
                cout<<"3) Almuerzo ejecutivo $10"<< " Precio con descuento "<< 10-10*0.25<<endl;
                cout<<"4) Sopa nutritiva $6"<<" Precio con descuento:"<< 6-6*0.30<<endl;
                cout<<"5) Plato casero $9"<<" Precio con descuento:"<< 9-9*0.30<<endl;
                cout<<"6) Postre y Café $5"<<" Precio con descuento:"<< 5-5*0.30<<endl;
                cout<<"Opcion:";
                cin>> opcion;
                    
                switch (opcion){
                        case 1:
                            precio = 8-8*0.25;
                            if (dinero>=precio){
                                cout<<"Comprado el combo de hamburguesa le quedan $"<<dinero - precio;
                            }
                            else{
                                cout<<"Para el combo de hamburguesa le faltan: "<< (precio - dinero);
                            }
                            break;
                            
                        case 2:
                            precio = 7-7*0.25;
                            if (dinero>=precio){
                                cout<<"Comprado el combo de pizza, le quedan $"<<dinero - precio;
                            }
                            else{
                                cout<<"Para el combo de pizza le faltan: "<< (precio - dinero);
                            }
                            break;
                            break;
                            
                            case 3:
                            precio = 10-10*0.25;
                            if (dinero>=precio){
                                cout<<"Comprado el almuerzo ejecutivo, le quedan $"<<dinero - precio;
                            }
                            else{
                                cout<<"Para el almuerzo ejecutivo le faltan: "<< (precio - dinero);
                            }
                            break;
                            
                            case 4:
                            precio = 6-6*0.30;
                            if (dinero>=precio){
                                cout<<"Comprado sopa nutritiva, le quedan $"<<dinero - precio;
                            }
                            else{
                                cout<<"Para el plato casero, le faltan: "<< (precio - dinero);
                            }
                            break;
                            
                        case 5:
                            precio = 9-9*0.30;
                            if (dinero>=precio){
                            cout<<"Comprado plato casero, le quedan $"<<dinero - precio;
                            }
                            else{
                                cout<<"Para plato casero le faltan: "<< (precio - dinero);
                            }
                            break;
                            
                            case 6:
                            precio = 5-5*0.30;
                            if (dinero>=precio){
                                cout<<"Comprado postre y café, le quedan $"<<dinero - precio;
                            }
                            else{
                                cout<<"Para postre y café le faltan: "<< (precio - dinero);
                            }
                            break;
                break;
        
            default:
                cout<<"No coincide la opcion";
                break;
        
        }
    }}
    else {
        cout<<"El usuario no puede seguir con su compra"<<endl;
    }
    


    return 0;
}