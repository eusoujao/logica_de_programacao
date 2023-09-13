/* Professor: Nelio
Descrição: Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.
Autor(a): João Renato Sant'Ana
Data atual: 12/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i, abaixo, entre, acima;
	    double totalC, totalV;
	    double[] vetP = new double [9];
	    double[] vetC = new double [9];
	    double[] vetV = new double [9];
	    String[] vetN = new String [9];

	    System.out.print ("Serao digitados dados de quantos produtos? ");
	    n = sc.nextInt();

	    abaixo = 0;
	    entre = 0;
	    acima = 0;
	    totalC = 0;
	    totalV = 0;

	    for(i = 0; i < n; i++){

	    	System.out.println ("Produto " + (i+1) + ":");
	    	System.out.print ("Nome: ");
	    	sc.nextLine();
	        vetN[i] = sc.nextLine();
	        System.out.print ("Preco de compra: ");
	        vetC[i] = sc.nextDouble();
	        System.out.print ("Preco de venda: ");
	        vetV[i] = sc.nextDouble();

	        vetP[i] = (100 * vetV[i] / vetC[i]) - 100;

	    }

	    for(i = 0; i < n; i++){

	        if(vetP[i] < 10){

	            abaixo = abaixo + 1;

	        } else if(vetP[i] > 20){

	            acima = acima + 1;

	        } else {

	            entre = entre  + 1;

	        }
	    }

	    for(i = 0; i < n; i++){

	        totalC = totalC + vetC[i];
	        totalV = totalV + vetV[i];

	    }

	    System.out.println ("\nRELATORIO");
	    System.out.println ("Lucro abaixo de 10%: " + abaixo);
	    System.out.println ("Lucro entre de 10% e 20%: " + entre);
	    System.out.println ("Lucro acima de 20%: " + acima);
	    System.out.println ("Valor total de compras: " + String.format("%.2f" , totalC));
	    System.out.println ("Valor total de vendas: " + String.format("%.2f" , totalV));
	    System.out.println ("Lucro total: " + String.format("%.2f" , (totalV - totalC)));
	    
	    sc.close();

	}

}
