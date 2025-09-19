#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>

int vida;
int pers = 0;

int txto25(char *y)
{
    int i = 0;
    while (y[i] != '\0')
    {
        printf("%c", y[i]);
        Sleep(25);
        i++;
    }
}

int txto50(char *x)
{
    int i = 0;
    while (x[i] != '\0')
    {
        printf("%c", x[i]);
        Sleep(50);
        i++;
    }
}

int gameover()
{
    system("color 43");
    char *texto = "\n    VOCÊ MORREU!\n Deseja continuar?\n 1. Sim.\n 2. Não\n";
    int esc;
    txto50(texto);
    printf(">>> ");
    scanf("%d", &esc);
    if (esc == 1)
    {
        return main();
    }
    else
    {
        return 0;
    }
}

int final1()
{
    int esc;
    char *texto = "\nVocê escapou do reino. FINAL 1.\n";
    txto50(texto);
    char *texto2 = "Quer jogar de novo?\n1. Sim\n Não";
    txto25(texto2);
    printf(">>> ");
    scanf("%d", &esc);
    if (esc == 1)
    {
        return main();
    }
    else
    {
        return 0;
    }
}

int final2()
{
    int esc;
    char *texto = "\nVocê foi decapitada. FINAL 2.\n";
    txto50(texto);
    char *texto2 = "Quer jogar de novo?\n1. Sim\n Não";
    txto25(texto2);
    printf(">>> ");
    scanf("%d", &esc);
    if (esc == 1)
    {
        return main();
    }
    else
    {
        return 0;
    }
}

int p11b() {
    return 0;
}

int p18a2 () {

int esc;
    while (vida != 0)
    {
        char *texto = "\ncruzamento em T\n1. rua direita\n2. rua esquerda\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nvocê entrou para a rua direita. morte";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\nvocê correu para a rua esquerda.";
            txto25(texto2);
            return final1();
        }
    }

}

int p17a2 () {

int esc;
    while (vida != 0)
    {
        char *texto = "\ncorrendo\n1. correr para o beco\n2. correr para a rua esquerda\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nvocê entrou para o beco. morte";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\nvocê correu para a rua.";
            txto25(texto2);
            return p18a2();
        }
    }

}
int p17a1()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\nlamina cega\n1. rir\n2. silêncio\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nsvocê riu";
            txto25(texto2);
            return final2();
        }
        else
        {
            char *texto2 = "\nvocê ficou calada.";
            txto25(texto2);
            return final2();
        }
    }
}

int p16a()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\ncaminho da execução\n1. se soltar\n2. permanecer\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nse soltou. vitoria";
            txto25(texto2);
            return p17a2();
        }
        else
        {
            char *texto2 = "\npermaneceu. vitoria";
            txto25(texto2);
            return p17a1();
        }
    }
}

int p15a()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\ncaminho da execução\n1. se soltar\n2. permanecer\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nse soltou. vitoria";
            txto25(texto2);
            return p16a();
        }
        else
        {
            char *texto2 = "\npermaneceu. morreu";
            txto25(texto2);
            return gameover();
        }
    }
}

int p14a()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\npelotão de guardas\n1. lutar\n2. render\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nlutou. morreu";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\nrendeu. vitoria";
            txto25(texto2);
            return p15a();
        }
    }
}

int p13a()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\nescadas\n1. não subir\n2. subir\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nnão subiu. morreu";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\nnsubiu. vitoria";
            txto25(texto2);
            return p14a();
        }
    }
}

int p12a()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\nsangue de goblin azul\n1. tomar\n2. ignorar";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            if (pers == 1)
            {
                char *texto2 = "\nvocê bebeu. vida curada";
                txto25(texto2);
                vida += 2;
                return p13a();
            }
            else
            {
                char *texto2 = "\nvocê bebeu. perdeu vida";
                txto25(texto2);
                vida -= 1;
                return p13a();
            }
        }
        else
        {
            char *texto2 = "\nvocê não bebeu.";
            txto25(texto2);
            return p13a();
        }
    }
    return gameover();
}

int p11a()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\nporta de ferro\n1. arrombar\n2. não arrombar\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nvocê arrombou a porta. falha";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\n você não arrombou. vitoria";
            txto25(texto2);
            return p12a();
        }
    }
    gameover();
}

int p10()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\ncorpo com documento\n1. não ler\n2. ler\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nvocê não leu";
            txto25(texto2);
            return p11a();
        }
        else
        {
            char *texto2 = "\nvocê leu.";
            txto25(texto2);
            return p11b();
        }
    }
}

int p9()
{
    int esc;
    while (vida != 0)
    {
        if (pers == 1)
        {
            char *texto = "\nencruzilhada\n1. direita\n2. reto\n3. esquerda\n";
            txto25(texto);
            printf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nescolheu direita. morreu";
                txto25(texto2);
                return gameover();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nescolheu reto. vitória";
                txto25(texto2);
                vida += 1;
                return p10();
            }
            else
            {
                char *texto2 = "\nescolheu esquerda. vitória parcial";
                txto25(texto2);
                vida -= 1;
                return p10();
            }
        }
        else
        {
            char *texto = "\nencruzilhada\n1. direita\n2. reto\n3. esquerda\n";
            txto25(texto);
            printf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nescolheu direita. vitoria";
                txto25(texto2);
                vida += 1;
                return p10();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nescolheu reto. vitória parcial";
                txto25(texto2);
                vida -= 1;
                return p10();
            }
            else
            {
                char *texto2 = "\nescolheu esquerda. morreu";
                txto25(texto2);
                return gameover();
            }
        }
    }
    return gameover();
}

int p8()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\npoço\n1. pular\n2. não pular\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nentrou no esgoto. vitória";
            txto25(texto2);
            return p9();
        }
        else
        {
            char *texto2 = "\nnão entrou no esgoto. morreu";
            txto25(texto2);
            return gameover();
        }
    }
}
int p7y2()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\nbatalha\n1. magia negra\2. feitiço simples\n3. feitiço de cura\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nusou magia negra. vitória";
            txto25(texto2);
            return p8();
        }
        else if (esc == 2)
        {
            char *texto2 = "\nfeitiço simples. morreu";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\nfeitiço de cura. morreu";
            txto25(texto2);
            return gameover();
        }
    }
    return gameover();
}

int p7y()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\ncorredor\n1. direita\n 2. esquerda\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nescolheu porta direita. vitória parcial";
            vida -= 1;
            return p7y2();
        }
        else
        {
            char *texto2 = "\nescolheu porta esquerda. vitória";
            return p7y2();
        }
    }
    return gameover();
}

int p7()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\nexecução\n1. salvar\n2. se permitir chorar\n3. ignorar\n";
        txto25(texto);
        scanf("%d", &esc);
        printf(">>> ");
        if (esc == 1)
        {
            char *texto2 = "\ntentou salvar. morreu";
            txto25(texto2);
            return gameover();
        }
        else if (esc == 2)
        {
            char *texto2 = "\nse permitiu chorar";
            txto25(texto2);
            vida += 1;
            if (pers == 2)
            {
                return p7y();
            }
            else
            {
                return p8();
            }
        }
        else
        {
            char *texto2 = "\nignorou";
            txto25(texto2);
            if (pers == 2)
            {
                return p7y();
            }
            else
            {
                return p8();
            }
        }
    }
    return gameover();
}

int p6()
{
    int esc;
    while (vida != 0)
    {
        if (pers == 1)
        {
            char *texto = "\nbatalha\n1. pular no pescoço\n2. pular na cabeça\n3. destruir os pés\n";
            txto25(texto);
            printf(">>> ");
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nmorte";
                txto25(texto2);
                return gameover();
            }
            if (esc == 2)
            {
                char *texto2 = "\npulou na cabeça";
                txto25(texto2);
                return p7();
            }
            else
            {
                char *texto2 = "\ndestruiu os pés";
                txto25(texto2);
                return p7();
            }
        }
        else
        {
            char *texto = "\nbatalha\n1. feitiço rapido\n2. feitiço de cura\n3. feitiço lento\n";
            txto25(texto);
            printf(">>> ");
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nvitoria";
                txto25(texto2);
                return p7();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nusou feitiço de cura\n morreu";
                txto25(texto2);
                return gameover();
            }
            else
            {
                char *texto2 = "\nfeitiço lento\n morreu";
                txto25(texto2);
            }
        }
    }
    return gameover();
}

int p5()
{
    int esc;
    while (vida != 0)
    {
        if (pers == 1)
        {
            char *texto = "\nencruzilhada\n1. A\n2. B\n3. C\n4. D\n5. E ";
            txto25(texto);
            printf(">>> ");
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nvitoria parcial";
                txto25(texto2);
                vida -= 1;
                return p6();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nvitoria";
                txto25(texto2);
                return p6();
            }
            else
            {
                char *texto2 = "\nfalha";
                txto25(texto2);
                return gameover();
            }
        }
        else
        {
            char *texto = "\nencruzilhada\n1. A\n2. B\n3. C\n4. D\n5. E ";
            txto25(texto);
            printf(">>> ");
            scanf("%d", &esc);
            if (esc == 4)
            {
                char *texto2 = "\nvitoria parcial";
                txto25(texto2);
                vida -= 1;
                return p6();
            }
            else if (esc == 5)
            {
                char *texto2 = "\nvitoria";
                txto25(texto2);
                return p6();
            }
            else
            {
                char *texto2 = "\nfalha";
                txto25(texto2);
                return gameover();
            }
        }
    }
    return gameover();
}

int p4()
{
    int esc;
    char *texto = "\nprisoneiro miserável\n1. soltar\n2. ignorar\n";
    txto25(texto);
    printf(">>> ");
    scanf("%d", &esc);
    if (esc == 1)
    {
        char *texto2 = "\nq bom né";
        txto25(texto2);
        vida += 1;
        return p5();
    }
    else
    {
        char *texto2 = "\nok :(";
        txto25(texto2);
        return p5();
    }
}

int p3()
{
    int esc;
    while (vida != 0)
    {
        if (pers == 1)
        {
            char *texto = "\nguarda\n 1.calcanhar\n 2.cabeça\n 3. tórax.\n";
            txto25(texto);
            printf(">>> ");
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "vitoria\n";
                txto25(texto2);
                return p4();
            }
            else if (esc == 2)
            {
                char *texto2 = "morte\n";
                txto25(texto2);
                return gameover();
            }
            else
            {
                char *texto = "vitória parcial -1 de vida";
                txto25(texto);
                vida -= 1;
                return p4();
            }
        }
        else
        {
            char *texto = "guarda\n 1. feitiço\n 2. sala direita\n 3. sala esquerda.\n";
            txto25(texto);
            printf(">>> ");
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "vitoria\n";
                txto25(texto2);
                return p4();
            }
            else if (esc == 2)
            {
                char *texto2 = "morte\n";
                txto25(texto2);
                return gameover();
            }
            else
            {
                char *texto = "\nvitória parcial -1 de vida";
                txto25(texto);
                vida -= 1;
                return p4();
            }
        }
    }
    return gameover();
}

int p2s()
{
    while (vida != 0)
    {
        int esc;
        if (pers == 1)
        {
            char *texto = "1. corredor à direita\n 2. corredor à esquerda\n";
            txto25(texto);
            printf(">>> ");
            scanf("%d", &esc);
            if (esc == 1)
            {
                return p4();
            }
            else
            {
                char *texto2 = "ganhou vida\n";
                vida += 1;
                return p3();
            }
        }
    }
}

int p2y()
{
    while (vida != 0)
    {
        int esc;
        char *texto = "enigma\n 1. resposta a.\n 2. resposta b.\n 3. resposta c.\n";
        txto25(texto);
        printf(">>> ");
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto3 = "certo";
            txto25(texto3);
            return p3();
        }
        else if (esc == 2)
        {
            char *texto3 = "errado";
            txto25(texto3);
            vida -= 1;
            return p2y();
        }
        else
        {
            char *texto3 = "muito errado";
            txto25(texto3);
            return gameover();
        }
    }
}

int p2()
{
    while (vida != 0)
    {
        int esc;
        char *texto = "    Você se encontra em um uma encruzilhada onde há três possibilidades de escolha:\n 1. Corredor A.\n 2. Corredor B\n 3.Corredor C\n";
        txto25(texto);
        scanf("%d", &esc);
        if (esc == 1)
        {
            if (pers == 1)
            {
                char *texto2 = "enigma";
                txto25(texto2);
                return gameover();
            }
            else
            {
                return p2y();
            }
        }

        else if (esc == 2)
        {
            char *texto2 = "morte";
            return gameover();
        }
        else
        {
            if (pers == 1)
            {
                char *texto2 = "batalha\n 1. esquivar\n 2.bloquear\n";
                printf(">>>");
                scanf("%d", &esc);
                if (esc == 1)
                {
                    char *texto3 = "vitoria";
                    txto25(texto3);
                    return p2s();
                }
                else
                {
                    char *texto3 = "falha";
                    txto25(texto3);
                    return gameover();
                }
            }
            else
            {
                char *texto2 = "batalha";
                txto25(texto2);
                return gameover();
            }
        }
    }
    return gameover();
}
int p1()
{
    while (vida != 0)
    {
        char *texto = "    Mesmo com a sua visão limitada, você consegue espiar alguns objetos na sua cela.\n    Primeiro, no chão, você encontra uma tigela, cheio de uma substância turva, que você assume que seja água.\n    Segundo, na próximo a porta da sua cela, você percebe uma armadura, aparentemente sem ninguém à vestindo. O que você faz?\n    1. Beber a água do pote.\n    2. Analisar a armadura.\n    3.Bater na armadura\n";
        int esc;
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);

        if (esc == 1)
        {
            char *texto2 = "\n    A 'água' (se você até pode chamar o líquido horroroso disso) tem um gosto terrível, você se esforça o máximo para não vomitar. Porém, o enjoo te enfraquece. -1 DE VIDA\n";
            txto25(texto2);
            vida -= 1;
            return p1();
        }
        else if (esc == 2)
        {
            if (pers == 1)
            {
                char *texto2 = "\n    Você observa a armadura. Ela contém runas e outros símbolos que você não consegue decifrar. Isso foi uma perda de tempo, você pensa.\n";
                txto25(texto2);
                return p1();
            }
            else
            {
                char *texto2 = "\n    Você observa armadura. Runas e outros símbolos familiares estão escritos no latão. Com alguns poucos segundos, você percebe que a armadura tem um feitiço que aprisiona um espirito do fogo dentro dele. Com a sua alta inteligência, você pega o pote de água podre no objeto de metal. O som de um grito estridente é ouvido, junto com um espectro laranja rapidamente saindo da sua prisão. A porta da dua cela abre.\n";
                txto25(texto2);
                return p2();
            }
        }
        else if (esc == 3)
        {
            if (pers == 1)
            {
                char *texto2 = "    Você dá um soco na armadura, e, de repente, ela se levanta e se movimenta, como se estivesse viva. Graças a sua grande proeza em combate e grande coragem, você consegue derrotá-la, com o espírito dentro dela fugindo por medo da sua grande força bruta. Mesmo sendo vitoriosa, você perde -1 de PONTOS DE VIDA, devido ao intenso combate. a porta e da sua cela abre, porém, antes de sair da cela, você pega a espada da armadura caída.\n";
                txto25(texto2);
                vida -= 1;
                return p2();
            }

            else
            {
                char *texto2 = "    Com o máximo das suas forças, você dá um leve soco no objeto de metal. A armadura acorda, como se estivesse viva. Com o medo tomando conta do seu corpo, você fica paralisada enquanto a armadura viva lança uma grande bola de fogo em sua direção.\n";
                txto25(texto2);
                return gameover();
            }
        }
    }
    return gameover();
}

int introducao()
{
    system("color 83");
    if (pers == 1)
    {
        char *texto = "\n    Seu nome é Saori, você se depara presa em uma cela escura.    \n mesmo com a sua mente embaçada e dor de cabeça latejante, você tenta se lembrar o motivo de por que você está aprisionada…\n    Você estava caminhando no mercado da sua vila, Genipaúba, observando as crianças brincando nas ruas lotadas.    \n você acabou de retornar de uma missão difícil, em que você derrotou uma bruxa maligna na floresta, que estava aterrorizando a população local.    \n No canto de seus olhos, você olha uma criança chorando, correndo para um beco escuro. Sem pensar duas vezes, você corre em direção dela. Aquele local não é seguro para um ser tão vulnerável. Entrando no beco, você depara a criança imóvel, com as costas viradas a você.\n    Tentativamente, você se aproxima, e de repente, a pequena figura se transforma em uma mulher, de aparência vil.    \n Antes de você reagir, ela assopra um pó brilhante em sua direção, e sua consciência começa a desaparecer, entrando em um sono inquieto.\n";
        int i = 0;
        txto25(texto);
        return p1();
    }
    else
    {
        char *texto = "\n    Seu nome é Ygona, você se depara presa em uma cela escura. mesmo com a sua mente embaçada e dor de cabeça latejante, você tenta se lembrar o motivo de por que você está aprisionada…\n    Ygona era parte do conselho das bruxas, autoridade coletiva máxima da sociedade bruxa, porém, após se posicionar como opositora do regime segregacionista e totalitário das bruxas de sangue, foi presa e utilizada como cobaia dos experimentos conduzidos secretamente pelo regime.";
        int i = 0;
        txto25(texto);
        return p1();
    }
}

int personagem()
{
    char *texto = "\n    Escolha sua personagem: \n    1. Saori:\n    7 PONTOS DE VIDA. Força bruta. bons reflexos. Baixa inteligência. Bruta. Explosiva\n    2. Ygona\n    3 PONTOS DE VIDA. Magia. Alta inteligência. Força e reflexos ruins. alto carisma. Furtiva\n >>> ";
    int esc;
    txto25(texto);
    scanf("%d", &esc);
    if (esc == 1)
    {
        char *texto2 = "    Sua personagem é: Saori\n";
        txto25(texto2);
        pers = 1;
        vida = 7;
        return introducao();
    }
    else
    {
        char *texto2 = "    Sua personagem é: Ygona\n";
        txto25(texto2);
        pers = 2;
        vida = 3;
        return introducao();
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 90");
    char *texto = "    ================================\n    ======DIVAS IN THE DUNGEON======\n    ================================\n\n    Você deseja jogar?\n    1. Sim.\n    2. Não.\n ";
    char *texto2 = "    Começando jogo...\n\n\n\n\n\n\n\n";
    int esc;
    txto50(texto);
    printf(">>> ");
    scanf("%d", &esc);
    if (esc == 1)
    {
        txto50(texto2);
        return personagem();
    }
    else
    {
        printf("\n    Fechando o jogo.");
    }
}
