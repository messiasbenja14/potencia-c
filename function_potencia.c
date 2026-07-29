double potencia(double base, double potencia) {
    double resultado = 1;
    for (int i = 0; i < potencia; i++) {
        resultado = resultado * base;
    }
    return resultado;
}
