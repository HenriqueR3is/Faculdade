package play;

import cliente.Fisica;
import cliente.Juridica;
import cliente.Pessoa;
import conta.Corrente;
import conta.Poupanca;
import javax.swing.JOptionPane;

public class BancoExe {
    public static void main(String[] args) {
        Fisica vetorPF[] = new Fisica[10];
        Juridica vetorPJ[] = new Juridica[10];
        Corrente vetorCC[] = new Corrente[10];
        Poupanca vetorCP[] = new Poupanca[10];
        int contVetorPF = 0;
        int contVetorPJ = 0;
        int contVetorCC = 0;
        int contVetorCP = 0;
        
        
        Integer opcao;
        do {
            opcao = Integer.parseInt(
            JOptionPane.showInputDialog(
                    "Digite uma opcao:\n"
                            + "1 - Inserir Pessoa Fisica.\n"
                            + "2 - Inserir Pessoa Juridica.\n"
                            + "3 - Inserir Conta Corrente.\n"
                            + "4 - Inserir Conta Poupanca.\n"
                            + "5 - Consultar Pessoa Fisica.\n"
                            + "6 - Consultar Pessoa Juridica.\n"
                            + "7 - Consultar Dados Conta Corrente.\n"
                            + "8 - Consultar Dados Conta Poupanca.\n"
                            + "9 - Deletar conta corrente.\n"
                            + "10 - Deletar pessoa fisica.\n"
                            + "11 - Sair."));
            switch(opcao){
                case 1:
                    Fisica f = inserirPessoaFisica();
                    vetorPF[contVetorPF] = f;
                    contVetorPF++;
                    break;
                case 2:
                    Juridica j = inserirPessoaJuridica();
                    vetorPJ[contVetorPJ] = j;
                    contVetorPJ++;
                    break;
                case 3:
                    if (contVetorPF==0 && contVetorPJ == 0){
                        JOptionPane.showMessageDialog
                        (null, "Nenhum cliente cadastrado!");
                    } else {
                        String nome = JOptionPane.showInputDialog
                        ("Digite o nome do cliente: ");
                        String tipoPessoa = JOptionPane.showInputDialog
                        ("Digite F para Pessoa Fisica\n"
                        + "Digite J para Pessoa Juridica:");
                        
                        boolean achouF = false;
                        boolean achouJ = false;
                        int pos = -1;
                        if (tipoPessoa.equals("F")){
                            for (int i = 0; i < contVetorPF; i++) {
                                if (nome.equals(vetorPF[i].getNome())){
                                    achouF = true;
                                    pos = i;
                                }
                            }
                        } else if (tipoPessoa.equals("J")){
                            for (int i = 0; i < contVetorPJ; i++) {
                                if (nome.equals(vetorPJ[i].getNome())){
                                    achouJ = true;
                                    pos = i;
                                }
                            }
                        }
                        if (achouF){
                            Corrente c = inserirContaCorrente(vetorPF[pos]);
                            vetorCC[contVetorCC] = c;
                            contVetorCC++;
                        } else if (achouJ){
                            Corrente c = inserirContaCorrente(vetorPJ[pos]);
                            vetorCC[contVetorCC] = c;
                            contVetorCC++;
                        } else {
                            JOptionPane.showMessageDialog(null, "Cliente não encontrado!");
                        }
                    }    
                     
                    
                    break;
                case 4:
                    Poupanca p = inserirContaPoupanca(vetorPF[0]);
                    vetorCP[contVetorCP] = p;
                    contVetorCP++;
                    break;
                case 5:
                    for (int i = 0; i < contVetorPF; i++) {
                        JOptionPane.showMessageDialog
                            (null, vetorPF[i]);
                    }
                    break;
                case 6:
                    for (int i = 0; i < contVetorPJ; i++) {
                        JOptionPane.showMessageDialog
                            (null, vetorPJ[i]);
                    }
                    break;
                case 7:
                    for (int i = 0; i < contVetorCC; i++) {
                        JOptionPane.showMessageDialog
                            (null, vetorCC[i]);
                    }
                    break;
                case 8:
                    for (int i = 0; i < contVetorCP; i++) {
                        JOptionPane.showMessageDialog
                            (null, vetorCP[i]);
                    }
                    break;
                case 11:
                    JOptionPane.showMessageDialog
                    (null, "Encerrando....");
                    break;
                case 9:
                    String nome_cc = JOptionPane.showInputDialog("Digite o nome do cliente");

                    int pos_cc = -1;
                    for(int a = 0 ; a < contVetorCC; a++){
                        if(nome_cc.equals(vetorCC[a].getPessoa().getNome())){
                            pos_cc = a;
                        }
                    }

                    if(pos_cc == -1){
                        JOptionPane.showMessageDialog(null,"Cliente não encontrado");
                    }else{
                        int certeza = JOptionPane.showConfirmDialog(null,"Tem certeza que deseja deletar ?");
                            if(certeza == 0){
                                vetorCC[pos_cc] = vetorCC[contVetorCC];
                                vetorCC[contVetorCC-1] = null;
                                contVetorCC--;
                                JOptionPane.showMessageDialog(null,"Conta Deletada !");
                            }else{
                                JOptionPane.showMessageDialog(null,"Deleção cancelada !");
                            }
                    }
                    break;
                case 10:
                    String nome = JOptionPane.showInputDialog("Digite o nome do cliente");

                    int con_pf = -1;
                    int con_cc = -1;

                    for(int a = 0 ; a < contVetorCC; a++){
                        if(nome.equals(vetorCC[a].getPessoa().getNome())){
                            con_cc = a;
                        }
                    }

                    for(int a = 0 ; a < contVetorPF; a++){
                        if(nome.equals(vetorPF[a].getNome())){
                            con_pf = a;
                        }
                    }

                    if(con_pf == -1){
                        JOptionPane.showMessageDialog(null,"Pessoa não encontrada");
                    }else{
                        int certeza =JOptionPane.showConfirmDialog(null, "Tem certeza ?");

                        if(certeza == 0){
                            vetorPF[con_pf] = vetorPF[contVetorPF];
                            vetorPF[contVetorPF-1] = null;
                            contVetorPF--;
                        }
                    }

                    if(con_cc != -1){
                        vetorCC[con_cc] = vetorCC[contVetorCC];
                        vetorCC[contVetorCC-1] = null;
                        contVetorCC--;
                        JOptionPane.showMessageDialog(null,"Conta Deletada !");
                    }

                    break;
                default:
                    JOptionPane.showMessageDialog(null, 
                            "Opção Inválida!\n"
                            + "Tente novamente");
            }
        } while (opcao!=11);
    }
    
    
    public static Fisica inserirPessoaFisica(){
        Fisica f = new Fisica();
        f.setNome(JOptionPane.
                showInputDialog("Digite o nome do cliente: "));
        f.setEndereco(JOptionPane.
                showInputDialog("Digite o endereço do cliente: "));
        f.setEmail(JOptionPane.
                showInputDialog("Digite o e-mail do cliente: "));
        f.setTelefone(JOptionPane.
                showInputDialog("Digite o telefone do cliente: "));
        f.setCpf(JOptionPane.
                showInputDialog("Digite o CPF do cliente: "));
        return f;
    }
    
    public static Juridica inserirPessoaJuridica(){
        Juridica j = new Juridica();
        j.setNome(JOptionPane.
                showInputDialog("Digite o nome da empresa: "));
        j.setEndereco(JOptionPane.
                showInputDialog("Digite o endereço da empresa: "));
        j.setEmail(JOptionPane.
                showInputDialog("Digite o e-mail da empresa: "));
        j.setTelefone(JOptionPane.
                showInputDialog("Digite o telefone da empresa: "));
        j.setCnpj(JOptionPane.
                showInputDialog("Digite o CNPJ da empresa: "));
        return j;
    }
    
    public static Corrente inserirContaCorrente(Pessoa p){
        Corrente c = new Corrente();
        c.setAgencia("0001");
        c.setPessoa(p);
        c.setSaldo(0);        
        c.setNroConta(JOptionPane.
                showInputDialog("Digite um número para a conta: "));
        c.setSenha(JOptionPane.showInputDialog("Digite uma senha:"));
        String credito = JOptionPane.
                showInputDialog
        ("Deseja Cartão de Crédito? (S)im ou (N)ão:");
        c.setCartaoCredito(false);
        if (credito.equals("S")){
            c.setCartaoCredito(true);
        }
        return c;
    }
    
    public static Poupanca inserirContaPoupanca(Pessoa p){
        Poupanca poupa = new Poupanca();
        poupa.setAgencia("0001");
        poupa.setPessoa(p);
        poupa.setSaldo(0);
        
        poupa.setNroConta(JOptionPane.
                showInputDialog("Digite um número para a conta: "));
        poupa.setSenha(JOptionPane.showInputDialog("Digite uma senha:"));                                                        
        
        return poupa;
     }

}
