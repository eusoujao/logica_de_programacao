/* Professor: Nelio
Descrição: Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in); 
		
		int comb, soma1, soma2, soma3;

	    soma1 = 0;
	    soma2 = 0;
	    soma3 = 0;

	    System.out.print ("Informe um codigo (1, 2, 3) ou 4 para parar: ");
	    comb = sc.nextInt();

	    while(comb != 4){

	    	System.out.print ("Informe um codigo (1, 2, 3) ou 4 para parar: ");
	        comb = sc.nextInt();

	        if(comb == 1){

	            soma1 = soma1 + 1;

	        }else if(comb == 2){

	            soma2 = soma2 + 1;

	        } else if(comb == 3){

	            soma3 = soma3 + 1;

	        };
	    };

	    System.out.println ("MUITO OBRIGADO");

	    System.out.println ("Alcool: " + soma1);
	    System.out.println ("Gasolina: " + soma2);
	    System.out.println ("Diesel: " + soma3);
	    
	    sc.close();


	}

}
