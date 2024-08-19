package cliente;

public class Juridica extends Pessoa{
    private String cnpj;

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }
    
    @Override
    public String toString() {
        return "Pessoa Juridica:\n"
                + "Nome: "+getNome()
                + "\nEndereço: "+getEndereco()
                + "\nE-mail: "+getEmail()
                + "\nTelefone: "+getTelefone()
                + "\nCNPJ: "+cnpj;
    }
}
