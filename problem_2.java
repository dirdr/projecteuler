public static int problem2(){
        int n = 33;
        int[] tab = new int[n+1];
        tab[0] = 1;
        tab[1] = 1;
        for (int i = 2; i <= n; i++) {
            tab[i] = tab[i - 1] + tab[i - 2];
            if (tab[i] > 4000000) {
                break;
            }
        }
        int answer = 0;
        for (int j : tab) {
            if (j % 2 == 0) answer += j;
        }
        return answer;
    }
