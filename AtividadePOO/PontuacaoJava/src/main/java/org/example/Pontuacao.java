package org.example;

public class Pontuacao {
    private int pontuacao;

    public Pontuacao() {
        this.pontuacao = 0;
    }

    public void adicionarPontos(int pontos) {
        if (pontos > 0) {
            this.pontuacao += pontos;
        }
    }

    public void removerPontos(int pontos) {
        if (pontos > 0 && pontos <= this.pontuacao) {
            this.pontuacao -= pontos;
        }
    }

    public int getPontuacao() {
        return pontuacao;
    }
}