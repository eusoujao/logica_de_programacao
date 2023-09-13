/* Professor: Nelio
Descrição: Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale; 
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		double precoDoProduto, recebido, troco;
	    int quantidade;

	    System.out.print ("Preco unitario do produto: ");
	    precoDoProduto = sc.nextDouble();
	    System.out.print ("Quantidade comprada: ");
	    quantidade = sc.nextInt();
	    System.out.print ("Dinheiro recebido: ");
	    recebido = sc.nextDouble();

	    troco = recebido - precoDoProduto * quantidade;

	    System.out.print ("Troco = " + String.format("%.2f", troco));
	    
	    sc.close(); 

	}

}
