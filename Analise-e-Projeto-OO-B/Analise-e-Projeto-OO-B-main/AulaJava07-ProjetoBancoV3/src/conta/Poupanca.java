package conta;

public class Poupanca extends ContaBancaria{
    private float taxa;

    public Poupanca() {
        this.taxa = 0.1f;
    }
    
    @Override
    public String toString() {
        return "Dados conta corrente:\n"
                + "Cliente: "+getPessoa().getNome()
                + "\nTelefone: "+getPessoa().getTelefone()
                + "\nAgencia: "+getAgencia()
                + "\nNumero da Conta: "+getNroConta()
                + "\nSaldo: "+getSaldo()
                + "\nTaxa: "+taxa;
    }
}
