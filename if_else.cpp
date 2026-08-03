int temperatura = 30;

if (temperatura > 35) {
    std::cout << "Calor extremo.\n";
} else if (temperatura >= 20 && temperatura <= 35) {
    std::cout << "Clima agradavel.\n";
} else {
    std::cout << "Frio.\n";
}

// Operador Ternário (if/else compacto em uma linha)
std::string status = (temperatura > 25) ? "Quente" : "Fresco";