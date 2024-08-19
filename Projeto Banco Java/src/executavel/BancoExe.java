/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package executavel;

import cliente.Física;
import cliente.Jurídica;
import conta.ContaCorrente;
import javax.swing.JOptionPane;

public class BancoExe {
    
    public static void main(String[] args) {
        
    }
    
    public static Física inserirPF() {
        Física f = new Física();
        f.setCpf(JOptionPane.
                showInputDialog("Digite o CPF do cliente: "));
        f.setNome(JOptionPane.
                showInputDialog("Digite o nome do cliente: "));
        f.setEndereco(JOptionPane.
                showInputDialog("Digite o endereço do cliente: "));
        f.setEmail(JOptionPane.
                showInputDialog("Digite o email do cliente: "));
        f.setTelefone(JOptionPane.
                showInputDialog("Digite o telefone do cliente: "));
        return f;
    }
    
    public static Jurídica inserirPJ() {
        Jurídica j = new Jurídica();
        j.setCnpj(JOptionPane.
                showInputDialog("Digite o CNPJ da empresa: "));
        j.setNome(JOptionPane.
                showInputDialog("Digite o nome da empresa: "));
        j.setEndereco(JOptionPane.
                showInputDialog("Digite o endereço da empresa: "));
        j.setEmail(JOptionPane.
                showInputDialog("Digite o email da empresa: "));
        j.setTelefone(JOptionPane.
                showInputDialog("Digite o telefone da empresa: "));
        return j;
    }
    
    public static ContaCorrente inserirCC() {
        ContaCorrente c = new ContaCorrente();
        c.setAgencia("0001");
        c.setSaldo(0);
        c.setP(p);
        c.setCartaoCredito(false);
        
        c.setNroConta(JOptionPane.
                showInputDialog("Digite o número da conta: "));
        
        c.setSenha(JOptionPane.showInputDialog("Digite a senha da conta: "));
        
        String cartao = JOptionPane.showInputDialog("Deseja cartão de crédito (S)im ou (N)ão");
        if (cartao.equals("S")) {
            c.setCartaoCredito(true);
        }
        return c;
    }
}


