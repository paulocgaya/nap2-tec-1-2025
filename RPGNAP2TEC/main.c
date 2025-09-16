#include <stdio.h>
int vida;
int pers = 0;


int escolha2(int x) {
    switch(x) {
        case 1:
            return 1;
            break;
        case 2:
            return 2;
            break;
        default:
            printf("    resposta não é válida!");
            break;
    }
}

int escolha3(int x) {
    switch(x) {
        case 1:
            return 1;
            break;
        case 2:
            return 2;
            break;
        case 3:
            return 3;
            break;
        default:
            printf("    resposta não é válida!");
            break;
    }
}
int gameover() {
    int esc;
    printf("    \nVOCÊ MORREU!\n Deseja continuar?\n 1. Sim.\n 2. Não\n >>> ");
    scanf("%d", &esc);
    escolha2(esc);
    if (esc == 1) {
        return main();
    }
    else if (esc == 0) {
        return 0;
    }
}

int p2() { 
    while (vida != 0) {
    printf("    Você se encontra em um uma encruzilhada onde há três possibilidades de escolha:\n 1. Corredor A.\n 2. Corredor B\n 3.Corredor C\n >>> ");
    printf("Você tem: %d de VIDA\n", vida);
    return 0;
    }
    return gameover();
}

int p1(){
    while (vida != 0) {
    int esc;
    printf("    Mesmo com a sua visão limitada, você consegue espiar alguns objetos na sua cela.\n    Primeiro, no chão, você encontra uma tigela, cheio de uma substância turva, que você assume que seja água.\n    Segundo, na próximo a porta da sua cela, você percebe uma armadura, aparentemente sem ninguém à vestindo. O que você faz?\n");
    printf("Você tem: %d de VIDA\n", vida);
    printf("    1. Beber a água do pote.\n    2. Analisar a armadura.\n    3.Bater na armadura\n>>> ");
    scanf("%d", &esc);
    escolha3(esc);
    if (esc == 1) {
         printf("    A 'água' (se você até pode chamar o líquido horroroso disso) tem um gosto terrível, você se esforça o máximo para não vomitar. Porém, o enjoo te enfraquece. -1 DE VIDA");
         vida -= 1;
         return p1();
    }
    else if (esc == 2) {
        if (pers == 1) {
            printf("    Você observa a armadura. Ela contém runas e outros símbolos que você não consegue decifrar. Isso foi uma perda de tempo, você pensa.\n");
            return p1();
        }
        else {
            printf("    Você observa armadura. Runas e outros símbolos familiares estão escritos no latão. Com alguns poucos segundos, você percebe que a armadura tem um feitiço que aprisiona um espirito do fogo dentro dele. Com a sua alta inteligência, você pega o pote de água podre no objeto de metal. O som de um grito estridente é ouvido, junto com um espectro laranja rapidamente saindo da sua prisão. A porta da dua cela abre.\n");
            return p2();

        }
    }
    else if(esc == 3) {
        if (pers ==1) {
            printf("    Você dá um soco na armadura, e, de repente, ela se levanta e se movimenta, como se estivesse viva. Graças a sua grande proeza em combate e grande coragem, você consegue derrotá-la, com o espírito dentro dela fugindo por medo da sua grande força bruta. Mesmo sendo vitoriosa, você perde -1 de PONTOS DE VIDA, devido ao intenso combate. a porta e da sua cela abre, porém, antes de sair da cela, você pega a espada da armadura caída.\n");
            vida -= 1;
            return p2();

        }
        else {
            printf("    Com o máximo das suas forças, você dá um leve soco no objeto de metal. A armadura acorda, como se estivesse viva. Com o medo tomando conta do seu corpo, você fica paralisada enquanto a armadura viva lança uma grande bola de fogo em sua direção.");
            return gameover();

        }
    }
    
    }
    return gameover();
}

int introducao() {
    if (pers == 1) {
        printf("    Seu nome é Saori, você se depara presa em uma cela escura.    \n mesmo com a sua mente embaçada e dor de cabeça latejante, você tenta se lembrar o motivo de por que você está aprisionada…\n");
        printf("    Você estava caminhando no mercado da sua vila, Genipaúba, observando as crianças brincando nas ruas lotadas.    \n você acabou de retornar de uma missão difícil, em que você derrotou uma bruxa maligna na floresta, que estava aterrorizando a população local.    \n No canto de seus olhos, você olha uma criança chorando, correndo para um beco escuro. Sem pensar duas vezes, você corre em direção dela. Aquele local não é seguro para um ser tão vulnerável. Entrando no beco, você depara a criança imóvel, com as costas viradas a você.\n    Tentativamente, você se aproxima, e de repente, a pequena figura se transforma em uma mulher, de aparência vil.    \n Antes de você reagir, ela assopra um pó brilhante em sua direção, e sua consciência começa a desaparecer, entrando em um sono inquieto.\n");
        return p1();
    }
    else {
        printf("    Seu nome é Ygona, você se depara presa em uma cela escura. mesmo com a sua mente embaçada e dor de cabeça latejante, você tenta se lembrar o motivo de por que você está aprisionada…\n");
        printf("    Ygona era parte do conselho das bruxas, autoridade coletiva máxima da sociedade bruxa, porém, após se posicionar como opositora do regime segregacionista e totalitário das bruxas de sangue, foi presa e utilizada como cobaia dos experimentos conduzidos secretamente pelo regime.");
        return p1();
    }
}

int personagem() {
    int esc;
    printf("    Escolha sua personagem: \n");
    printf("    1. Saori:\n");
    printf("    7 PONTOS DE VIDA. Força bruta. bons reflexos. Baixa inteligência. Bruta. Explosiva\n");
    printf("    2. Ygona\n");
    printf("    3 PONTOS DE VIDA. Magia. Alta inteligência. Força e reflexos ruins. alto carisma. Furtiva\n >>> "); 
    scanf("%d", &esc);
    escolha2(esc);
     if (esc == 1) {
        printf("    Sua personagem é: Saori\n");
        pers = 1;
        vida = 7;
        return introducao();
        
    }
    else if (esc == 2) {
        printf("    Sua personagem é: Ygona\n");
        pers = 2;
        vida = 3;
        return introducao();
    }
}

int main (){
    int esc;
    printf("    =======================\n");
    printf("    ======HOLLOW SCAT======\n");
    printf("    =======================\n\n");
    printf("    Você deseja jogar?\n");
    printf("    1. Sim.\n    2. Não.\n>>> ");
    scanf("%d", &esc);
    escolha2(esc);
    if (esc == 1) {
        printf("    Começando jogo...\n\n\n\n\n\n\n\n");
        return personagem();
        
    }
    else if (esc == 2) {
        printf("    SMT.");
    }
   
    }
