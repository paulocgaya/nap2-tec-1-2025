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
    system("color 47");
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
    system("color 10");
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
    system("color 47");
    int esc;
    char *texto = "\n Você foi decapitada.\n FINAL 2.\n";
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

int final3()
{
    system("color 27");
    int esc;
    char *texto = "\n O império maligno de Zenvelli acabou. FINAL 3.\n";
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

int final4()
{
    system("color 57");
    int esc;
    char *texto = "\nVocê virou a nova rainha das bruxas e dos comuns. FINAL 4.\n";
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

int p17b() {
    int esc;
    char *texto = "\n ZENVELLI ESTÝ MORTA!\n Mas....... O que você fará com a coroa?\n1. quebrar coroa\n2. usar coroa\n";
    txto25(texto);
    printf("Você tem: %d de VIDA\n>>> ", vida);
    scanf("%d", &esc);
    if (esc == 1) {
                char *texto2 = "\n Você quebrou a coroa\n";
                txto25(texto2);
                return final3();
            }
            else {
                char *texto2 = "\n Você colocou a coroa em sua cabeça\n";
                txto25(texto2);
                return final4();
            }
}

int p16b() {
    int esc;
    char *texto = "\n Zenvelli agora está caída no chão, debilitada, aonde você a acertará?\n1. na testa\n2. pescoço\n";
    txto25(texto);
    printf("Você tem: %d de VIDA\n>>> ", vida);
    scanf("%d", &esc);
    if (esc == 1) {
                char *texto2 = "\n Você acerta Zenvelli na testa com seu artefato, exatamente no ponto fraco da bruxa\n";
                txto25(texto2);
                return p17b();
            }
            else {
                char *texto2 = "\n Você tenta corta a garganta da bruxa com seu artefato, mas ao se aproximar de seu rosto ela te engole\n";
                txto25(texto2);
                return gameover();
            }
        
}

int p15b() {
    int esc;
    while (vida != 0) {
        if (pers == 1) {
            char *texto = "\n Depois do ataque malsucedido, Zenvelli exala bolas de escuridão em direção à sua oponente\n o que Saori fará?\n1. desviar\n2. rebater\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1) {
                char *texto2 = "\n No momento que a guerreira desvia de uma das bolas, outra bola a acerta diretamente\n não há escapatória\n";
                txto25(texto2);
                return gameover();
            }
            else {
                char *texto2 = "\n Saori reúne toda sua força e coragem e rebate a bola em Zenvelli, que fica debilitada diante do contra-ataque\n";
                txto25(texto2);
                return p16b();
            }
        }
        else{
            char *texto = "\n Depois do ataque malsucedido, Zenvelli exala espíritos obscuros em direção à sua oponente\n o que Ygona fará?\n1. desviar\n2. rebater\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1) {
                char *texto2 = "\n Ygona, com o auxílio de sua varinha, consegue desviar dos ataques da bruxa\n Então Ygona resolve atacar Zenvelli diretamente com o poder da luz\n";
                txto25(texto2);
                return p16b();
            }
            else {
                char *texto2 = "\n Ygona tenta rebater mas são muitos espíritos de uma só vez\n Ygona não dá conta\n";
                txto25(texto2);
                return gameover();
            }
        }
    }
return gameover();
}

int p14b() {
     int esc;
    while (vida != 0) {
        if (pers == 1) {
            char *texto = "\n Chegando na sala de Zenvelli, a bruxa maligna se transforma em um enorme ser das trevas\n A partir disso a bruxa começa a lançar os espinhos das sombras\n O que Saori fará?\n1. desviar\n2. rebater\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1) {
                char *texto2 = "\n Saori desvia dos espinhos da bruxa e consegue se manter firme para o próximo ataque\n";
                txto25(texto2);
                return p15b();
            }
            else {
                char *texto2 = "\n Saori tenta rebater, mas oas sombras são muito mais fortes e acabam empalando a guerreira\n";
                txto25(texto2);
                return gameover();
            }
        }
        else{
            char *texto = "\n Chegando na sala de Zenvelli, a bruxa maligna se transforma em um enorme ser das trevas\n A partir disso a bruxa começa lança o grito das sombras\n O que Ygona fará?\n1. desviar\n2. rebater\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1) {
                char *texto2 = "\n Não há tempo para desviar de um ataque desta magnitude\n Ygona acaba sendo atingida em cheio\n";
                txto25(texto2);
                return gameover();
            }
            else {
                char *texto2 = "\n Ygona usa do poder da luz somado a sua varinha, que rebate as sombras\n";
                txto25(texto2);
                return p15b();
            }
        }
    }
return gameover();
}

int p13b() {
    int esc;
    while (vida != 0) {
        if (pers == 1) {
            char *texto = "\n Ao sair da latrina, você vê um arco e flecha no chão.\n Saori então sai e vê que está na parte de cima do salão aonde fica a porta de acesso à sala de Zenvelli\n Abaixo você vê um pelotçao de guardas protegendo o portão para a bruxa maligna\n Contudo, você percebe um imenso candelabro acima dos guardas\n O que você fará?\n1. atirar em cada um dos guardas\n2. atirar na sustentação do candelabro\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1) {
                char *texto2 = "\n A baixa inteligência de Saori se extrapola e ela tenta atirar em cada um dos 50 guardas do pelotão\n A seleção natural fez seu papel\n";
                txto25(texto2);
                return gameover();
            }
            else {
                char *texto2 = "\n Saori mostra que não é tão tapada e atira na sustentação do candelabro, acabando com todo pelotão de uma vez só e liberando o caminho para a déspota\n";
                txto25(texto2);
                return p14b();
            }
        }
        else{
            char *texto = "\n Ao sair da latrina, você vê uma varinha antiga no chão\n mas ao pegar você sente o poder ancestral contido nela\n Ao sair você percebe que está na parte superior de um salão\n e logo abaixo se encontra um pelotão de guardas protegendo o portão da sala de Zenvelli\n Contudo, logo acima você vê um imenso candelabro bem acima dos guardas\n O que você fará?\n1. derrubar candelabro\n2. magia negra nos guardas\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1) {
                char *texto2 = "\n Ygona atira nbo candelabro imenso e o derruba no pelotão, acabando com todos de uma só vez e libera o acesso a Zenvelli\n";
                txto25(texto2);
                return p14b();
            }
            else {
                char *texto2 = "\n Contrariando sua inteligência, Ygona resolve atirar em cada um dos guardas com magia negra.\n Não dá certo\n";
                txto25(texto2);
                return gameover();
            }
        }
    }
return gameover();

}

int p12b() {
    int esc;
    while (vida != 0) {
        char *texto = "\n Você caminha adiante após destruir a serpente\n Logo à frente você encontra uma escada levando a um buraco aberto\n O que você fará?\n1. subir\n2. não subir\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Você sobe e descobre que saiu de uma latrina\n";
            txto25(texto2);
            return p13b();
        }
        else
        {
            char *texto2 = "\n Você não sobe e acaba ficando perdida no esgoto\n";
            txto25(texto2);
            return gameover();
        }
    return gamover();
        }
}



int p11b() { //rota com a nota lida
    int esc;
    while (vida != 0) {
        if (pers == 1) {
            char *texto = "\n Saori segue o caminho e encontra a serpente mutante, com duas cabeças e cauda de tentáculo, Decravack,\n cria do próprio demônio homônimo.\n Agora a guerreira deve escolher onde irá deferir sua fúria\n1. acertar pescoço\n2. acertar olho\n3. acertar tentaculo\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1) {
                char *texto2 = "\n A guerreira vai em direção a uma das cabeças, mas logo a segunda reage com uma mordida devastadora\n que parte Saori em 2\n";
                txto25(texto2);
                return gameover();
            }
            else if (esc == 2) {
                char *texto2 = "\n Saori acerta um golpe poderosissímo nos dois olhos de uma das cabeças e\n enquanto a lança etá cravada na serpente ela recita uma poderosa oração para exorcizar a criatura\n";
                txto25(texto2);
                return p12b();
            }
            else {
                char *texto2 = "\n Saori corre para trás da serpente onde ela finca sua lança e recita a oração para exorcizar a criatura demoníaca.\n Contudo, o sangue da criatura respinga em Saori, deixando uma queimadura\n -1 PONTO DE VIDA\n";
                txto25(texto2);
                vida -= 1;
                return p12b();
            }
        }
        else{
            char *texto = "\n Ygona segue o caminho e encontra a serpente mutante, com duas cabeças e cauda de tentáculo, Decravack,\n cria do próprio demônio homônimo.\n Agora a bruxa deve escolher como irá deferir sua fúria\n1. magia negra\n2. feitiço de cura\n3. feitiço de luz\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1) {
                char *texto2 = "\n Ygona usa de magia negrapara mandar a criatura para o seu lugar.\n Porém, a serpente absorve o poder e rabate a magia pra a bruxa, selando seu destino\n";
                txto25(texto2);
                return gameover();
            }
            else if (esc == 2) {
                char *texto2 = " \nYgona não aprende que não há tempo para se curar na batalha.\n A serpente a engole em questão de segundos \n";
                txto25(texto2);
                return gameover();
            }
            else {
                char *texto2 = "\n Ygona invoca os seres de luz paar combater as trevas.\n Um feixe de luz sai de seu peito, evaporando a serpente\n";
                txto25(texto2);
                return p12b();
            }
        }
    }
return gameover();
}

int p18a2 () {

int esc;
    while (vida != 0)
    {
        char *texto = "\n Seguindo pela rua você chega a um cruzamento em T, com apenas duas saídas para você\n1. Rua direita\n2. Rua esquerda\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Você entrou para a rua direita, mas lá haviam mais guardas à sua espera\n";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\n Você correu para a rua esquerda e chega no fim da cidade onde há apenas uma estrada floresta adentro que leva para fora do reino\n.";
            txto25(texto2);
            return final1();
        }
    }

}

int p17a2 () {

int esc;
    while (vida != 0)
    {
        char *texto = "\n Agora você se encontra correndo pelas vias sujas e lamacentas de sacraamenthar em fuga da guarda real.\n Você percebe duas possibilidades:\n1. Correr para o beco\n2. Correr para a rua esquerda\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Infelizmente o beco não tinha sída e os guardas chrgaram...\n";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\n Você corre pela rua à sua esquerda, aonde não há guardas ou emboscadas\n";
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
        char *texto = "\n A lâmina cai, mas não te machuca pois está cega!\n Quel será sua reação?\n1. rir\n2. silêncio\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Você ri desse contratempo, mas isso não deixa o carrasco muito feliz\n";
            txto25(texto2);
            return final2();
        }
        else
        {
            char *texto2 = "\n Você não esboça nenhuma reação pois tudo ali culminará no seu fim\n";
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
        char *texto = "\n Agora você se encontra com a cabeça posicionada na guilhotina\n o que você vai fazer agora?\n1. Tentar se soltar\n2. permanecer\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Infelizmente você está bem presa á guilhotina, não há como se soltar\n";
            txto25(texto2);
            return p17a1();
        }
        else
        {
            char *texto2 = "\n Você apenas aceitou que este é o fim da linha.........\n";
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
        char *texto = "\n Depois de algumas horas na masmorra, os guardas chegam para lhe encaminhar pra sua execução públlica no meio da vila.\n Chegando lá, dois guardas te seguram com as mãos para te levar para sua morte.\n Diante disso, o que você vai fazer? \n1. Tentar se soltar\n2. Permanecer quieta\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Você usa suas forças para sair das mãos dos guardas que achara que você já avia aceitado este fim\n mas eles não poderiam estar nmais enganados!\n Você se solta e corre pela cidade procurando uma saída deste lugar\n";
            txto25(texto2);
            return p17a2();
        }
        else
        {
            char *texto2 = "\n Você aceita o traslado da morte...\n Que decepção\n";
            txto25(texto2);
            return p16a();
        }
    }
}

int p14a()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\n Os guardas logo te percebem e vão em peso atrás de você\n você tenta correr de volta para o esgoto mas já é tarde.\n Você foi capturada, oque você fará?\n1. Lutar\n2. se render\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Você tenta tanto resistir que os guardas perdem a peciência e decidem rasgar seus tecidos orgânicos ali mesmo\n";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\n Você se rende, mas continua pensando se vai de fato aceitar que esse é seu fim ou buscar uma saída deste lugar...\n";
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
        char *texto = "\n Após uma bela caminhada pelos esgotos do castelo, você encontra uma escada que a leva a uma espécie de tampa.\n o que você fará? \n1. Continuar no esgoto\n2. Subir escadas\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Você decide continuar andando pelos esgotos atrás de uma saída.\n Contudo, sua exploração logo é interrompida por uma enorme serpente com dentes grandes e afiados.\n Sua procura por uma saída a levou até o estômago da criatura\n";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\n  Você decide subir as escadas e abrir a tampa logo acima.\n Você sobe e se depara com uma infeliz situação:\n Você está no meio do pátio do castelo com inúmeros guardas...\n";
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
        char *texto = "\n Você se depara com um pote de sangue de goblin azul\n Você irá:\n1. tomar\n2. ignorar\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            if (pers == 1)
            {
                char *texto2 = "\nSaori bebe e se sente melhor com seus ferimentos melhorando e se sentindo melhor para lutar\n +1 PONTO DE VIDA\n";
                txto25(texto2);
                vida += 2;
                return p13a();
            }
            else
            {
                char *texto2 = "\nYgona esquece que apesar do sangue de goblin azul ser popular por seus efeitos curativos,\n ela possui intolerância a essa substância que lhe causa questões da ordem gástrica...\n Bom, pelo menos você já está no esgoto...\n -1 PONTO DE VIDA\n";
                txto25(texto2);
                vida -= 1;
                return p13a();
            }
        }
        else
        {
            char *texto2 = "\n você não bebeu.";
            txto25(texto2);
            return p13a();
        }
    }
    return gameover();
}

int p11a() // rota sem ler a nota
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\n Seguindo pelo caminho à direita, logo você vê uma porta de ferro ao lado.\n O quê você fará?\n1. arrombar\n2. não arrombar\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Ao arrombar a porta, você infelizmente descobre o porquê da porta estar trancada.\n Seja lá o que era aquilo, não deu tempo nem de ver o que era...\n";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\n Você Sente que há um motivo para aquela porta estar fechada e é melhor não mexer com o que está ali...\n";
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
        char *texto = "\n Você encontra um corpo com uma carta ao lado\n1. não ler\n2. ler\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\n Não há tempo para ler!\n Você deixa a carta ali e segue em diante pelo caminho da direita que está a frente\n";
            txto25(texto2);
            return p11a();
        }
        else
        {
            char *texto2 = "\n Lendo, você descobre que a carta foi escrita po uma outra prisioneira que tentara escapar\n e deixou um artefato importante nas latrinas além de detalhar o caminho para chegar à Zenvelli: CaMINho à ES.q..Rd., CoB.a M..nT., Es...a";
            txto25(texto2);
            return p11b();
        }
    }
    return gameover();
}

int p9()
{
    int esc;
    while (vida != 0)
    {
        if (pers == 1)
        {
            char *texto = "\nApós caminhar por um tempo, Saori percebe que agora há 3 caminhos.\n Qual ela irá pegar?\n1. direita\n2. reto\n3. esquerda\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nSaori vai segue pela direita mas logo tem seu destino ceifado por um\n capelobo adulto que aproveita muito bem o sabor de suas vísceras\n";
                txto25(texto2);
                return gameover();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nSaori segue em frente e logo percebe um brilho vermelho mais à frente...\n Era uma flor de vida!\n +1 PONTE DE VIDA\n";
                txto25(texto2);
                vida += 1;
                return p10();
            }
            else
            {
                char *texto2 = "\nSaori segue pela esquerda e acha um filhote de capelobo que a ataca mas ela consegue triunfar com ressalvas.\n No fim ela vê que havia um caminho possivelmente mais seguro...\n -1 PONTO DE VIDA\n";
                txto25(texto2);
                vida -= 1;
                return p10();
            }
        }
        else
        {
            char *texto = "\nApós caminhar por um tempo, Ygona percebe que agora há 3 caminhos.\n Qual ela irá pegar? \n1. direita\n2. reto\n3. esquerda\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nYgona vai à direita e logo percebe um brilho vermelho mais à frente...\n Era uma flor de vida!\n +1 PONTE DE VIDA\n";
                txto25(texto2);
                vida += 1;
                return p10();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nYgona segue em frente e acha outro tentáculo obscuro.\n No fim ela vê que havia um caminho possivelmente mais seguro...\n -1 PONTO DE VIDA\n";
                txto25(texto2);
                vida -= 1;
                return p10();
            }
            else
            {
                char *texto2 = "\nYgona vai à esquerda mas logo tem seu destino ceifado por um\n filhote de hidra que aproveita muito bem o sabor de suas vísceras\n";
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
        char *texto = "\nPassado vários desafios você se depara com um poço.\n O que será feito?\n1. pular\n2. não pular\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nVocê sente que tomou a decisão certa embora o lugar não seja dos melhores.\n Acessou o esgoto!\n";
            txto25(texto2);
            return p9();
        }
        else
        {
            char *texto2 = "\nVocê se recusa a entrar naquilo, mas logo se surpreende com guardas do castelo chegando e rapidamente capturando você\n";
            txto25(texto2);
            return gameover();
        }
    }
    return gameover();
}
int p7y2()
{
    int esc;
    while (vida != 0)
    {
        char *texto = "\nLogo ygona chega em uma sala escura, mas que logo as luzes se acendem assim que ela põe os pés nela.\n Ygona se posiciona pressentindo um combate e assim\n se revela Maria Cururu, uma bruxa poderosa com ligações diretas com o submundo.\n Percebendo isso, Ygona precisa escolher seu ataque.\n1. Magia negra\n2. Feitiço simples\n3. Feitiço de cura\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nYgona então faz a bruxa beber do próprio veneno e usa de conjurações infernais para mandar Cururu para o submundo e não voltar mais.\n";
            txto25(texto2);
            return p8();
        }
        else if (esc == 2)
        {
            char *texto2 = "\nYgona tenta ser rápida, mas meros feitiços de dano simples não fazem nem cócegas na bruxa maligna\n mas até perceber isso já é tarde de mais.\n";
            txto25(texto2);
            return gameover();
        }
        else
        {
            char *texto2 = "\nNão há tempo para se curar!.\n Enquanto Ygona tenta aumentar sua vida, Vaninha logo trata de drená-la e ceifa sua oponente.\n";
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
        char *texto = "\nYgona continua seu caminho e percebe que há duas escolhas que levam ao mesmo destino.\n Qual ela irá escolher?\n1. direita\n 2. esquerda\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto2 = "\nA bruxa então prossegue pela secção da direita,\n onde havia um tentáculo obscuro que lhe estapeia, mas não a mata\n -1 PONTO DE VIDA\n";
            vida -= 1;
            return p7y2();
        }
        else
        {
            char *texto2 = "\nA bruxa então prossegue pela secção da esquerda onde não há perigos aparentes\n";
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
        char *texto = "\nVocê chega a uma janela após muito tempo com iluminações artificiais farcas na masmorra.\n Contudo, você olha para baixo e vê a nível do solo a execução de uma familía inteira pela guarda real.\n Diante dessa situação oque você fará?\n1. salvar a familía\n2. se permitir chorar\n3. ignorar\n";
        txto25(texto);
        scanf("%d", &esc);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        if (esc == 1)
        {
            char *texto2 = "\nSuas emoções calam a razão e você vai em direção a eles que estão à dezenas de metros abaixo.\n No fim você e eles deixam este plano.\n";
            txto25(texto2);
            return gameover();
        }
        else if (esc == 2)
        {
            char *texto2 = "\nNinguém deveria vever ou presenciar coisas como essas.\n Nessas situações chorar alivia e cura uma parte da alma.\n +1 PONTO DE VIDA\n";
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
            char *texto2 = "\nVocê olha aquela cena grotesca e finge que não lhe afeta, mas no fundo você sabe que isso irá lhe atormentar para sempre.\n";
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
            char *texto = "\nSaori avança e chega á um salão escuro onde se depara com um grande troll raivoso. O que ela fará?\n1. pular no pescoço\n2. pular na cabeça\n3. destruir os pés\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nSaori tenta alcançar o pescoço da criatura, mas o troll logo responde a tentativa de ataque com um tapa que a joga com toda força na parede.\n A cena não foi nem um pouco agradável.\n";
                txto25(texto2);
                return gameover();
            }
            if (esc == 2)
            {
                char *texto2 = "\nSaori usa toda força de suas pernas para pular na cabeça do troll, aonde ela acerta com precisão cirúrgica e tem a morte da criatura como resultado\n";
                txto25(texto2);
                return p7();
            }
            else
            {
                char *texto2 = "\nSaori vendo a criatura enorme foca em atingir a parte que está em sua altura.\n A criatura logo cai, gerando um tremor na sala que faz o grande candelabro cair em sua cabeça que se reduz a papinha.\n";
                txto25(texto2);
                return p7();
            }
        }
        else
        {
            char *texto = "\nYgona se encintra em um salão escuro, mas não desabitado.\n Uma necromante se revela e invoca seus esqueletos para lhe exterminar.\n O que Ygona fará?\n1. Feitiço rapido\n2. Feitiço de cura\n3. Feitiço lento\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nA feiticeira logo lembra de um feitiço rápido de ataque que, por pura sorte, atinge uma parte vital da necromante\n levando a para o submundo junto de seus capangas.\n";
                txto25(texto2);
                return p7();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nYgona tenta se curar antes de batalhar mas ela não percebe que não há tempo e um esqueleto a atinge no peito.\n";
                txto25(texto2);
                return gameover();
            }
            else
            {
                char *texto2 = "\nYgona tenta conjurar um antigo e poderosissímo feitiço mas que leva um tempo para conjurar, tempo esse que lhe custou a vida\n";
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
            char *texto = "\nVocê sevê diante de uma encruzihada com 5 opções que seguem a rosa dos ventos:\n1. O\n2. NO\n3. N\n4. NE\n5. L \n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nNo escuro você dá uma forte cabeçada em um candelabro baixo.\n Ao final você percebe que havia um caminho mais seguro.\n-1 PONTO DE VIDA\n";
                txto25(texto2);
                vida -= 1;
                return p6();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nO caminho está limpo e sem obstáculos, mas você ainda pressente um embate...\n";
                txto25(texto2);
                return p6();
            }
            else
            {
                char *texto2 = "\nUm musgo preto tomava o chão da passagem, e você logo percebe que ele está subindo em você.\n Você é engolida pelo musgo.\n VOCÊ MORREU!\n";
                txto25(texto2);
                return gameover();
            }
        }
        else
        {
            char *texto = "\nVocê se vê diante de uma encruzihada com 5 opções que seguem a rosa dos ventos:\n1. O\n2. NO\n3. N\n4. NE\n5. L\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 4)
            {
                char *texto2 = "\nO caminho tem menos esporos venenosos que os outros, mas ainda sim te fazem mal.\n Você percebe que tinha outro caminho mais seguro.\n-1 PONTO DE VIDA\n";
                txto25(texto2);
                vida -= 1;
                return p6();
            }
            else if (esc == 5)
            {
                char *texto2 = "\nO caminho parece certo. Você anda e pressente um conflito...\n ";
                txto25(texto2);
                return p6();
            }
            else
            {
                char *texto2 = "\nEsporos de fungos venenosos estavam por toda atmosfera do local,\n você rapidamente sucumbe.\n VOCÊ MORREU!\n";
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
    char *texto = "\nVocê chega em frente de uma cela e vê um pobre camponês pedindo para libertá-lo.\n O que você faz?\n1. soltar\n2. ignorar\n";
    txto25(texto);
    printf("Você tem: %d de VIDA\n>>> ", vida);
    scanf("%d", &esc);
    if (esc == 1)
    {
        char *texto2 = "\nO prisioneiro lhe dá um cantil com soro de mandrágora que ajuda você a se fortalecer\n +1 DE VIDA\n";
        txto25(texto2);
        vida += 1;
        return p5();
    }
    else
    {
        char *texto2 = "\nO prisioneiro continua em seu cativeiro :(\n";
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
            char *texto = "\nSaori agora se encontra numa câmara onde há um soldado de sombras defendendo a saída.\n Onde Saori o atacará?\n 1.calcanhar\n 2.cabeça\n 3. tórax.\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nSaori usa sua lança improvisada e destrói os calcanhares da armadura do soldado, o impedindo de se levantar.\n O caminho foi liberado.\n";
                txto25(texto2);
                return p4();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nSaori ataca acabeça do soldado, porém, soldados de sombra são espíritos de  e não se coordenam pela cabeça.\n O soldado finca sua espada em Saori\n VOCÊ MORREU!\n";
                txto25(texto2);
                return gameover();
            }
            else
            {
                char *texto = "\nSaori finca sua lança no guarda, mas leva un corte em seu braço\n -1 DE VIDA\n";
                txto25(texto);
                vida -= 1;
                return p4();
            }
        }
        else
        {
            char *texto = "\nApós passar pela porta, Ygona percore o caminho aberto até ver um guarda adiante. Ela se esconde e percebe 3 possibilidades:\n 1. Atacar guarda com feitiço\n 2. Entrar na sala à direita\n 3. Entrar na sala à esquerda.\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1)
            {
                char *texto2 = "\nA feiticeira então se enche de coragem e usa um feitiço de decomposição no guarda que em instantes se reduz a um bolo de matéria orgânica podre.\n O caminho foi liberado!\n ";
                txto25(texto2);
                return p4();
            }
            else if (esc == 2)
            {
                char *texto2 = "\nYgona entra na sala e logo se depara com outros guardas que a imobilizam e a matam ali mesmo.\n VOCÊ MORREU!\n ";
                txto25(texto2);
                return gameover();
            }
            else
            {
                char *texto = "\nVocê entra na sala e acaba pisando em um grande prego que te enfraquece.\n Porém, você descobre uma passagem que te leva adiante desviando do guarda.\n -1 PONTO DE VIDA!\n ";
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
            char *texto = "\n Após escapar da morte certa, Saori se encontra no fim do corredor com apenas duas escolhas a fazer.\n 1. corredor à direita\n 2. corredor à esquerda\n";
            txto25(texto);
            printf("Você tem: %d de VIDA\n>>> ", vida);
            scanf("%d", &esc);
            if (esc == 1)
            {
                return p4();
            }
            else
            {
                char *texto2 = "\n Saori acha um germe de vida, que lhe ajuda a se curar e fortalecer.\n +1 PONTO DE VIDA\n ";
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
        char *texto = "\nYgona se vê diante de runas encravadas em uma porta as quais ela reconhece e enetende a seguinte frase codificada em línguas humanas:\n Gbqbf bf pnzvaubf yrinz n ----\n Ela nota que tem que escolher um das 3 palavras incritas abaixo do enigma que completam a frase.\n Qual você escolhe? \n 1. Ebzn.\n 2. qbre.\n 3. zbegr.\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            char *texto3 = "\nApós perceber a cifra de cézar, Ygona identifica a frase correta: Todos os caminhos levam à Roma.\n A porta se abriu.\n ";
            txto25(texto3);
            return p3();
        }
        else if (esc == 2)
        {
            char *texto3 = "\nAo escolher essa palavra Ygona sente uma pontada em seu peito, lhe causando uma dor aguda.\n Oque lhe faz perceber que a palavra escolhida está codificada em cifras de Cézar e significa dor.\n -1 PONTO DE VIDA!";
            txto25(texto3);
            vida -= 1;
            return p2y();
        }
        else
        {
            char *texto3 = "\nLogo após escolher esta palavra Ygona sente um aperto no peito e uma sensação de que seus olhos vão explodir (e realmente explodiram)\n";
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
        char *texto = "    \nVocê se encontra em um uma encruzilhada onde há três possibilidades de escolha:\n 1. Corredor à esquerda.\n 2. Corredor à frente.\n 3.Corredor à direita.\n";
        txto25(texto);
        printf("Você tem: %d de VIDA\n>>> ", vida);
        scanf("%d", &esc);
        if (esc == 1)
        {
            if (pers == 1)
            {
                char *texto2 = "\nSaori se depara com uma porta trancada e coberta por runas as quais ela não conhece então,\n na tentativa de sair dali, ela acaba errando o enigma e acionando a runa da morte.\n";
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
            char *texto2 = "\nUm corredor bem iluminado e relativamente limpo com uma luz visível em seu final, porém, o chão é falho e a sensação é de que ele irá desabar a qualquer momento.\n Estes fatores culminam na revelação trágica de uma armadilha letal de espinhos amaldiçoados.\n";
            txto25(texto2);
            return gameover();
        }
        else
        {
            if (pers == 1)
            {
                char *texto2 = "\n Um corredor escuro e extremamente gosmento com um odor forte de amônia.\n Você então ouve um barulho horrível que vem de uma criatura logo à sua frente. \n Ele possui cerca de 7 metros, sem pelos, duas cabeças e membros deformados além da evidente irracionalidade agressiva.\n Diante desta situação, o que Saori fará?\n 1. esquivar\n 2.bloquear\n";
                txto25(texto2);
                printf("Você tem: %d de VIDA\n>>> ", vida);
                scanf("%d", &esc);
                if (esc == 1)
                {
                    char *texto3 = "\n Ao se esquivar dos ataques, Saori percebe uma passagem atrás de Ukobuishy para onde ela rapidamente corre após um dos ataques da lenta criatura.\n ";
                    txto25(texto3);
                    return p2s();
                }
                else
                {
                    char *texto3 = "\n Saori fatalmente escolheu seu ego ao invés da sabedoria, o que lhe custou a vida.\n";
                    txto25(texto3);
                    return gameover();
                }
            }
            else
            {
                char *texto2 = "\n Ygona congela de pavor ao ver aquela aberração colossal à sua frente, o que resulta no seu fim trágico pelas mãos de Ukobuishy.\n";
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
        char *texto = "\n    Mesmo com a sua visão limitada, você consegue espiar alguns objetos na sua cela.\n    Primeiro, no chão, você encontra uma tigela, cheio de uma substância turva, que você assume que seja água.\n    Segundo, na próximo a porta da sua cela, você percebe uma armadura, aparentemente sem ninguém à vestindo. O que você faz?\n    1. Beber a água do pote.\n    2. Analisar a armadura.\n    3.Bater na armadura\n";
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
                char *texto2 = "\n    Você dá um soco na armadura, e, de repente, ela se levanta e se movimenta, como se estivesse viva. Graças a sua grande proeza em combate e grande coragem, você consegue derrotá-la, com o espírito dentro dela fugindo por medo da sua grande força bruta. Mesmo sendo vitoriosa, você perde -1 de PONTOS DE VIDA, devido ao intenso combate. a porta e da sua cela abre, porém, antes de sair da cela, você pega a espada da armadura caída.\n";
                txto25(texto2);
                vida -= 1;
                return p2();
            }

            else
            {
                char *texto2 = "\n    Com o máximo das suas forças, você dá um leve soco no objeto de metal. A armadura acorda, como se estivesse viva. Com o medo tomando conta do seu corpo, você fica paralisada enquanto a armadura viva lança uma grande bola de fogo em sua direção.\n VOCÊ MORREU!\n";
                txto25(texto2);
                return gameover();
            }
        }
    }
    return gameover();
}

int introducao()
{
    system("color 80");
    if (pers == 1)
    {
        char *texto = "\n    Seu nome é Saori, você se depara presa em uma cela escura.    \n mesmo com a sua mente embaçada e dor de cabeça latejante, você tenta se lembrar o motivo de por que você está aprisionada…\n    Você estava caminhando no mercado da sua vila, Sacraamenthar, observando as crianças brincando nas ruas lotadas.    \n você acabou de retornar de uma missão difícil, em que você derrotou uma bruxa maligna na floresta, que estava aterrorizando a população local.    \n No canto de seus olhos, você olha uma criança chorando, correndo para um beco escuro. Sem pensar duas vezes, você corre em direção dela. Aquele local não é seguro para um ser tão vulnerável. Entrando no beco, você depara a criança imóvel, com as costas viradas a você.\n    Tentativamente, você se aproxima, e de repente, a pequena figura se transforma em uma mulher, de aparência vil.    \n Antes de você reagir, ela assopra um pó brilhante em sua direção, e sua consciência começa a desaparecer, entrando em um sono inquieto.\n";
        int i = 0;
        txto25(texto);
        return p1();
    }
    else
    {
        char *texto = "\n    Seu nome é Ygona, você se depara presa em uma cela escura. mesmo com a sua mente embaçada e dor de cabeça latejante, você tenta se lembrar o motivo de por que você está aprisionada…\n    Ygona era parte do conselho das bruxas, autoridade coletiva máxima da sociedade bruxa, porém, após se posicionar como opositora do regime absolutista de Zenvelli, foi presa e aguarda a morte em uma masmorra no fundo do castelo.\n";
        int i = 0;
        txto25(texto);
        return p1();
    }
}

int personagem()
{
    char *texto = "\n    Escolha sua personagem: \n    1. Saori:\n    7 PONTOS DE VIDA. Força bruta. bons reflexos. Baixa inteligência. Indelicada. Explosiva\n    2. Ygona\n    3 PONTOS DE VIDA. Magia. Alta inteligência. Força e reflexos ruins. alto carisma. Furtiva\n >>> ";
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
    char *texto = "    ================================\n    ======DIVAS NA MASMORRA======\n    ================================\n\n    Você deseja jogar?\n    1. Sim.\n    2. Não.\n ";
    char *texto2 = "    Começando jogo...\n\n\n\n\n\n\n\n No reino da Sacramentar, após um golpe de Estado,\n a maligna bruxa Zenvelli assumiu o posto de rainha e bruxa superior,\n governando então o mundo bruxo e o comum sob um regime absolutista com mão de ferro.\n Diante disso, sua missão será fugir de sua masmorra e enfrentar os perigos e desafios do castelo da bruxa\n para sobreviver usando as habilidades da guerreira Saori O'Kiddo ou da poderosa feiticeira Ygona.";
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
