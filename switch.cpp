int opcao = 2;

switch (opcao) {
    case 1:
        std::cout << "Opcao 1 selecionada.\n";
        break; // O break impede que a execução continue para os próximos cases
    case 2:
        std::cout << "Opcao 2 selecionada.\n";
        break;
    case 3:
        std::cout << "Opcao 3 selecionada.\n";
        break;
    default:
        std::cout << "Opcao invalida!\n"; // Executado se nenhum case corresponder
        break;
}