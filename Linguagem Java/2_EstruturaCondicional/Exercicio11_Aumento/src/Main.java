/* Professor: Nelio
Descrição: Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int porcentagem;
	    double salario, nsalario, aumento;

	    System.out.print ("Digite o salario da pessoa: ");
	    salario = sc.nextDouble();

	    if (salario <= 1000.00){

	        porcentagem = 20;

	    } else if (salario <= 3000.00){

	        porcentagem = 15;

	    } else if (salario <= 8000.00){

	        porcentagem = 10;

	    } else {

	        porcentagem = 5;

	    };

	    aumento = salario * porcentagem / 100;
	    nsalario = salario + aumento;

	    System.out.println ("Novo salario = R$" + String.format("%.2f" , nsalario));
	    System.out.println ("Aumento = R$" + String.format("%.2f" , aumento));
	    System.out.print ("Porcentagem = " + porcentagem + "%");
	    
	    sc.close();

	}

}
