package conta;

public class Corrente extends ContaBancaria{
    private boolean cartaoCredito;

    public boolean isCartaoCredito() {
        return cartaoCredito;
    }
    
    public void setCartaoCredito(boolean cartaoCredito) {
        this.cartaoCredito = cartaoCredito;
    }
    
    @Override
    public String toString() {
        return "Dados conta corrente:\n"
                + "Cliente: "+getPessoa().getNome()
                + "\nTelefone: "+getPessoa().getTelefone()
                + "\nAgencia: "+getAgencia()
                + "\nNumero da Conta: "+getNroConta()
                + "\nSaldo: "+getSaldo()
                + "\nCartão de Credito: "+cartaoCredito;
    }
    
}
