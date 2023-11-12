cmake_minimum_required(VERSION 3.24)
project(Projeto_Simao)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)


add_executable(Projeto_Simao Jogo-SFML/Constants.h Jogo-SFML/Ente.cpp Jogo-SFML/Ente.h Jogo-SFML/Entidade.cpp Jogo-SFML/Entidade.h Jogo-SFML/GerenciadorEventos.cpp Jogo-SFML/GerenciadorEventos.h Jogo-SFML/GerenciadorGrafico.cpp Jogo-SFML/GerenciadorGrafico.h Jogo-SFML/Jogador.cpp Jogo-SFML/Jogador.h Jogo-SFML/Jogo.cpp Jogo-SFML/Jogo.h Jogo-SFML/main.cpp Jogo-SFML/Personagem.cpp Jogo-SFML/Personagem.h Jogo-SFML/list.h Jogo-SFML/Inimigo.cpp Jogo-SFML/Inimigo.h Jogo-SFML/GerenciadorColisoes.cpp Jogo-SFML/GerenciadorColisoes.h Jogo-SFML/GerenciadorColisoes.h Jogo-SFML/GerenciadorColisoes.cpp Jogo-SFML/listEntidade.cpp Jogo-SFML/listEntidade.h Jogo-SFML/listEntidade.h Jogo-SFML/listEntidade.h Jogo-SFML/listEntidade.h Jogo-SFML/listEntidade.cpp Jogo-SFML/ID.h Jogo-SFML/Obstaculo.cpp Jogo-SFML/Obstaculo.h Jogo-SFML/Obstaculo.cpp Jogo-SFML/Obstaculo.h Jogo-SFML/Plataforma.cpp Jogo-SFML/Plataforma.h)
target_link_libraries(Projeto_Simao PRIVATE sfml-graphics)
target_compile_features(Projeto_Simao PRIVATE cxx_std_23)

if(WIN32)
    add_custom_command(
            TARGET Projeto_Simao
            COMMENT "Copy OpenAL DLL"
            PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:Projeto_Simao>
            VERBATIM)
endif()

install(TARGETS Projeto_Simao)