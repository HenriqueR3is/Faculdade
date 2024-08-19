/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package conta;

public class ContaCorrente extends ContaBancaria {
    private boolean cartaoCredito;

    public boolean isCartaoCredito() {
        return cartaoCredito;
    }

    public void setCartaoCredito(boolean cartaoCredito) {
        this.cartaoCredito = cartaoCredito;
    }
}
