public class Main {
    public static void main(String[] args) {
        System.out.println(calculateScore(true, 8000, 5, 100));
        calculateScore(true, 10000, 8, 500);
    }

    public static int calculateScore(boolean gameOver, int score, int levelCompleted, int bonus) {
        if (gameOver) {
            int finalScore = score + (levelCompleted * bonus);
            System.out.println("Your final score was: " + finalScore);
            return finalScore;
        } else  {
            return -1;
        }
    }
}
