#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

//100 Nombres
vector<string> nombresHombre = {"ANTONIO",
 "MANUEL",
 "JOSE",
 "FRANCISCO",
 "DAVID",
 "JUAN",
 "JAVIER",
 "JOSE ANTONIO",
 "DANIEL",
 "JOSE LUIS",
 "FRANCISCO JAVIER",
 "CARLOS",
 "JESUS",
 "ALEJANDRO",
 "MIGUEL",
 "JOSE MANUEL",
 "RAFAEL",
 "MIGUEL ANGEL",
 "PABLO",
 "PEDRO",
 "ANGEL",
 "SERGIO",
 "JOSE MARIA",
 "FERNANDO",
 "JORGE",
 "LUIS",
 "ALBERTO",
 "ALVARO",
 "JUAN CARLOS",
 "ADRIAN",
 "DIEGO",
 "JUAN JOSE",
 "RAUL",
 "IVAN",
 "JUAN ANTONIO",
 "RUBEN",
 "ENRIQUE",
 "OSCAR",
 "RAMON",
 "ANDRES",
 "VICENTE",
 "JUAN MANUEL",
 "SANTIAGO",
 "JOAQUIN",
 "VICTOR",
 "MARIO",
 "EDUARDO",
 "ROBERTO",
 "JAIME",
 "FRANCISCO JOSE",
 "MARCOS",
 "IGNACIO",
 "HUGO",
 "ALFONSO",
 "JORDI",
 "RICARDO",
 "SALVADOR",
 "GUILLERMO",
 "GABRIEL",
 "MARC",
 "EMILIO",
 "MOHAMED",
 "GONZALO",
 "JULIO",
 "JULIAN",
 "MARTIN",
 "JOSE MIGUEL",
 "TOMAS",
 "AGUSTIN",
 "NICOLAS",
 "JOSE RAMON",
 "SAMUEL",
 "ISMAEL",
 "JOAN",
 "CRISTIAN",
 "FELIX",
 "LUCAS",
 "AITOR",
 "HECTOR",
 "JUAN FRANCISCO",
 "IKER",
 "ALEX",
 "JOSE CARLOS",
 "JOSEP",
 "SEBASTIAN",
 "MARIANO",
 "CESAR",
 "ALFREDO",
 "DOMINGO",
 "JOSE ANGEL",
 "FELIPE",
 "VICTOR MANUEL",
 "RODRIGO",
 "JOSE IGNACIO",
 "MATEO",
 "LUIS MIGUEL",
 "JOSE FRANCISCO",
 "JUAN LUIS",
 "XAVIER",
 "ALBERT"}; 

//100 Nombre
vector<string> nombresMujer = {"MARIA CARMEN",
 "MARIA",
 "CARMEN",
 "ANA MARIA",
 "JOSEFA",
 "MARIA PILAR",
 "ISABEL",
 "LAURA",
 "MARIA DOLORES",
 "MARIA TERESA",
 "ANA",
 "CRISTINA",
 "MARTA",
 "MARIA ANGELES",
 "LUCIA",
 "FRANCISCA",
 "MARIA ISABEL",
 "MARIA JOSE",
 "ANTONIA",
 "DOLORES",
 "SARA",
 "PAULA",
 "ELENA",
 "MARIA LUISA",
 "RAQUEL",
 "ROSA MARIA",
 "PILAR",
 "MANUELA",
 "CONCEPCION",
 "MARIA JESUS",
 "MERCEDES",
 "JULIA",
 "BEATRIZ",
 "NURIA",
 "SILVIA",
 "ALBA",
 "IRENE",
 "ROSARIO",
 "JUANA",
 "TERESA",
 "PATRICIA",
 "ENCARNACION",
 "MONTSERRAT",
 "ANDREA",
 "ROCIO",
 "MONICA",
 "ALICIA",
 "MARIA MAR",
 "ROSA",
 "SONIA",
 "SANDRA",
 "MARINA",
 "ANGELA",
 "SUSANA",
 "NATALIA",
 "YOLANDA",
 "MARGARITA",
 "MARIA JOSEFA",
 "CLAUDIA",
 "SOFIA",
 "EVA",
 "CARLA",
 "MARIA ROSARIO",
 "INMACULADA",
 "MARIA MERCEDES",
 "ANA ISABEL",
 "ESTHER",
 "NOELIA",
 "VERONICA",
 "NEREA",
 "CAROLINA",
 "ANGELES",
 "DANIELA",
 "MARIA VICTORIA",
 "EVA MARIA",
 "INES",
 "MIRIAM",
 "LORENA",
 "MARIA ROSA",
 "MARIA ELENA",
 "ANA BELEN",
 "VICTORIA",
 "MARIA CONCEPCION",
 "AMPARO",
 "MARTINA",
 "MARIA ANTONIA",
 "ALEJANDRA",
 "LIDIA",
 "CATALINA",
 "CELIA",
 "MARIA NIEVES",
 "CONSUELO",
 "FATIMA",
 "OLGA",
 "AINHOA",
 "GLORIA",
 "CLARA",
 "MARIA CRISTINA",
 "MARIA SOLEDAD",
 "EMILIA"};

//50 apellidos
vector<string> apellidos = {"MARTINEZ",
 "GARCIA",
 "FERNANDEZ",
 "PEREZ",
 "JIMENEZ",
 "GONZALEZ",
 "RUIZ",
 "LOPEZ",
 "SAENZ",
 "RODRIGUEZ",
 "GOMEZ",
 "MORENO",
 "HERNANDEZ",
 "SANCHEZ",
 "ALONSO",
 "PASCUAL",
 "GIL",
 "MARIN",
 "DIEZ",
 "ALVAREZ",
 "GUTIERREZ",
 "MARTIN",
 "CALVO",
 "BLANCO",
 "EZQUERRO",
 "RUBIO",
 "IBAÑEZ",
 "MUÑOZ",
 "GARRIDO",
 "SAEZ",
 "DIAZ",
 "RAMIREZ",
 "PALACIOS",
 "ORTEGA",
 "BENITO",
 "SANTAMARIA",
 "ROMERO",
 "OCHOA",
 "LEON",
 "DOMINGUEZ",
 "HERCE",
 "PEÑA",
 "GABARRI",
 "MERINO",
 "TORRES",
 "SAINZ",
 "SANZ",
 "CASTILLO",
 "ORTIZ",
 "CORDON"};

//15 ciudades
vector<string> ciudades = {"MEDELLÍN",
"BOGOTÁ",
"CARTAGENA",
"BARRANQUILLA",
"SANTA MARTA",
"MANIZALES",
"MONTERIA",
"RIOHACHA",
"CALI",
"PEREIRA",
"SINCELEJO",
"ARMENIA",
"BUCARAMANGA",
"TUNJA",
"ARAUCA"};

//10 colores
vector<string> Ncolores = {"AMARILLA",
"ROJA",
"NEGRA",
"BLANCA",
"VERDE",
"AZUL",
"ROSADA",
"GRIS",
"MORADA",
"CAFE"};

//10 marcas
vector<string> marcas = {"GW",
"SHIMANU",
"SPECIALIZED",
"TREK",
"SCOTT",
"CUBE",
"CERVELO",
"VITTORIA",
"CHAOYANG",
"SUNTOUR"};


int numAleatorio(int maximo){
    maximo = maximo +1;
    int valor = rand() % maximo;
    return valor;
}


string newPropietario(){
    string nombre, apellido;    
    int sexo = numAleatorio(1);
    if (sexo == 0){
        nombre = nombresHombre[numAleatorio(99)];
    }else if (sexo == 1){
        nombre = nombresMujer[numAleatorio(99)];
    }
    apellido = apellidos[numAleatorio(49)];

    return nombre + " " + apellido;
}


string newEmail(string nombre){
    string inicial, apellido, email;
    inicial = nombre[0];

    bool espacio = false;
    for (int i = 0; i < nombre.size(); i++){
        if (nombre[i] == ' '){
            espacio = true;
            continue;
        }
        if (espacio){
            apellido = apellido + nombre[i];
        }
    }
    email = inicial + apellido + to_string(numAleatorio(99)) + "@gmail.com"; 

    return email;
}


string newDireccion(){
    return ciudades[numAleatorio(14)] + " CALLE " + to_string(numAleatorio(99)) + " No. " + to_string(numAleatorio(99)) + "-" + to_string(numAleatorio(99));
}


string newColor(){
    return Ncolores[numAleatorio(9)];
}


string newMarca(){
    return marcas[numAleatorio(9)];
}