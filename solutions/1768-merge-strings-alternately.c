// Fácil | Two Pointers, String
// Ideia: percorrer as duas palavras juntas, pegando uma letra de cada por vez.

char * mergeAlternately(char * word1, char * word2){
    int size1 = strlen(word1);
    int size2 = strlen(word2);

    char *result = (char*)malloc(size1 + size2 + 1); // +1 por causa do \0

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 || j < size2) {
        if (i < size1) {
            result[k++] = word1[i++];
        }
        if (j < size2) {
            result[k++] = word2[j++];
        }
    }

    result[k] = '\0';

    return result;
}