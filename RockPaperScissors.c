using System;

class RockPaperScissors {
    static void Main() {
        string[] choices = { "rock", "paper", "scissors" };
        Random random = new Random();

        Console.Write("Enter your choice (rock, paper, or scissors): ");
        string userChoice = Console.ReadLine().ToLower();
        string computerChoice = choices[random.Next(choices.Length)];

        Console.WriteLine($"Computer chose: {computerChoice}");

        if (userChoice == computerChoice) {
            Console.WriteLine("It's a tie!");
        } else if ((userChoice == "rock" && computerChoice == "scissors") ||
                   (userChoice == "paper" && computerChoice == "rock") ||
                   (userChoice == "scissors" && computerChoice == "paper")) {
            Console.WriteLine("You win!");
        } else {
            Console.WriteLine("You lose!");
        }
    }
}
