package org.example;

import java.security.SecureRandom;

public class GeradorDeSenhas {

    private static final String LETRAS_MINUSCULAS = "abcdefghijklmnopqrstuvwxyz";
    private static final String LETRAS_MAIUSCULAS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    private static final String NUMEROS = "0123456789";
    private static final String SIMBOLOS_ESPECIAIS = "!@#$%^&*()-_=+[]{}|;:',.<>?/";

    private final SecureRandom random = new SecureRandom();

    public String gerarSenha(int comprimento, boolean incluirMinusculas, boolean incluirMaiusculas, boolean incluirNumeros, boolean incluirSimbolos) {
        if (!incluirMinusculas && !incluirMaiusculas && !incluirNumeros && !incluirSimbolos) {
            throw new IllegalArgumentException("Pelo menos uma categoria de caracteres deve ser escolhida.");
        }

        StringBuilder caracteresPermitidos = new StringBuilder();
        if (incluirMinusculas) {
            caracteresPermitidos.append(LETRAS_MINUSCULAS);
        }
        if (incluirMaiusculas) {
            caracteresPermitidos.append(LETRAS_MAIUSCULAS);
        }
        if (incluirNumeros) {
            caracteresPermitidos.append(NUMEROS);
        }
        if (incluirSimbolos) {
            caracteresPermitidos.append(SIMBOLOS_ESPECIAIS);
        }

        StringBuilder senha = new StringBuilder(comprimento);
        for (int i = 0; i < comprimento; i++) {
            int index = random.nextInt(caracteresPermitidos.length());
            senha.append(caracteresPermitidos.charAt(index));
        }

        return senha.toString();
    }
}