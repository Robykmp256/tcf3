cmake_minimum_required(VERSION 3.21)
project(Shopping)

set(CMAKE_CXX_STANDARD 14)

add_executable(Shopping main.cpp Catalogo.h Maglie.cpp Maglie.h Pantaloni.cpp Pantaloni.h Categorie.cpp Categorie.h Menu.cpp Menu.h Oggetto.cpp Oggetto.h Accesso.cpp Accesso.h Account.cpp Account.h Registrazione.cpp Registrazione.h Metpagamento.h Carta.cpp Carta.h Paypal.cpp Paypal.h Menusel.cpp Menusel.h)
