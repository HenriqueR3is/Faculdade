/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package conta;

public class ContaPoupanca extends ContaBancaria {
    private float taxa;

    public float getTaxa() {
        return taxa;
    }

    public ContaPoupanca() {
        this.taxa = 0.1f;
    }

    
}
