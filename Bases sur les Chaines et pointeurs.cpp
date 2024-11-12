#include <iostream>
#include <cstring> // Pour utiliser des fonctions de manipulation de chaînes de caractères

// Fonction qui calcule la longueur d'une chaîne de caractères
int longueur(const char* chaine) {
    int compteur = 0;
    while (chaine[compteur] != '\0') {
        compteur++;
    }
    return compteur;
}

// Fonction pour copier une chaîne de caractères
void copie(char* dest, const char* source) {
    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0'; // Ajoute le caractère de fin de chaîne
}

// Fonction pour concaténer deux chaînes de caractères
void concatene(char* dest, const char* source) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while (source[j] != '\0') {
        dest[i] = source[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

// Fonction pour comparer deux chaînes de caractères
int compare_chaine(const char* chaine1, const char* chaine2) {
    int i = 0;
    while (chaine1[i] != '\0' && chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            return (chaine1[i] < chaine2[i]) ? -1 : 1;
        }
        i++;
    }
    if (chaine1[i] == '\0' && chaine2[i] == '\0') {
        return 0;
    }
    return (chaine1[i] == '\0') ? -1 : 1;
}

int main() {
    char chaine1[100], chaine2[100];

    // Exemple pour la fonction longueur
    std::cout << "Entrez une chaîne : ";
    std::cin.getline(chaine1, sizeof(chaine1));
    std::cout << "La longueur de la chaîne est : " << longueur(chaine1) << std::endl;

    // Exemple pour la fonction copie
    copie(chaine2, chaine1);
    std::cout << "Copie de la chaîne : " << chaine2 << std::endl;

    // Exemple pour la fonction concatene
    char chaine3[200] = "Bonjour ";
    concatene(chaine3, chaine1);
    std::cout << "Chaîne concaténée : " << chaine3 << std::endl;

    // Exemple pour la fonction compare_chaine
    std::cout << "Entrez une deuxième chaîne à comparer : ";
    std::cin.getline(chaine2, sizeof(chaine2));
    int resultat = compare_chaine(chaine1, chaine2);
    if (resultat == 0) {
        std::cout << "Les chaînes sont identiques." << std::endl;
    } else if (resultat < 0) {
        std::cout << "La première chaîne est plus petite." << std::endl;
    } else {
        std::cout << "La première chaîne est plus grande." << std::endl;
    }

    return 0;
}





