/* Professor: Nelio
Descrição: Uma lanchonete possui vários produtos. Cada produto possui um código
e um preço. Você deve fazer um programa para ler o código e a
quantidade comprada de um produto (suponha um código válido), e daí
informar qual o valor a ser pago.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int cp, quantidade;
	    double preco, pagar;

	    System.out.print ("Codigo do produto comprado: ");
	    cp = sc.nextInt();
	    System.out.print ("Quantidade comprada: ");
	    quantidade = sc.nextInt();
	    
	    preco = 0;

	    switch (cp){

	        case 1:
	            preco = 5.00;
	        break;

	        case 2:
	            preco = 3.50;
	        break;

	        case 3:
	            preco = 4.80;
	        break;

	        case 4:
	            preco = 8.90;
	        break;

	        case 5:
	            preco = 7.32;
	        break;

	    }
	    
	    pagar = preco * quantidade;

	    System.out.print ("Valor a pagar: R$" + String.format("%.2f" , pagar));
	    
	    sc.close();

	}

}
