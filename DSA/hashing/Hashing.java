void main() {
    var rand = new Random();
    int smallNumber = 11;

    int[] array = IntStream.generate(() -> rand.nextInt(smallNumber-2)  + 1).limit(smallNumber - 1).toArray();

    int[] hashArray = new int[smallNumber];

    for (int i = 0; i < smallNumber-1; i++) {
        hashArray[array[i]] += 1;
    }

    IO.println(Arrays.toString(array));
    IO.println(Arrays.toString(hashArray));

    printHash("internalization");
}


void printHash(String word){
    int[] hashArray = new int[26];
    for (int i = 0; i < word.length(); i++) {
        hashArray[word.charAt(i) - 'a']++;
    }

    IO.println(Arrays.toString(hashArray));
}
