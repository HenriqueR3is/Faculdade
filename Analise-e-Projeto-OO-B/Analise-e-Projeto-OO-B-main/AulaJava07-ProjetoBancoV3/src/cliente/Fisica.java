package cliente;

public class Fisica extends Pessoa {
    private String cpf;

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    
    @Override
    public String toString() {
        return "Pessoa Fisica:\n"
                + "Nome: "+getNome()
                + "\nEndereço: "+getEndereco()
                + "\nE-mail: "+getEmail()
                + "\nTelefone: "+getTelefone()
                + "\nCPF: "+cpf;
    }
    
    
    
    
    
}
