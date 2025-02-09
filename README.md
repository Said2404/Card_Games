```markdown
# Card Games - Memorix Game 🎴

## 📚 About the Project
This project is a card game called **Mémorix**, developed as part of a university assignment. The goal was to create a C program, split into three separate code files, that allows 1 to 4 players to play the game. Each player can be a human or a computer.

**Mémorix** is a variant of the classic memory game **Mémori**, where players flip over pairs of cards to find matches and score points. In this version, we added a twist: a **Joker card**. When a player flips the Joker, it automatically swaps places with another card randomly chosen from the remaining cards (including the Joker). Players can play as many rounds as they like, and their performance is tracked.

---

## 🎮 Game Features
- **1 to 4 Players**: Play alone, with friends, or against the computer.
- **Joker Card**: Adds a random and unpredictable element to the game.
- **Customizable Settings**:
  - Number of players.
  - Player pseudonyms.
  - Number of rows (L) and columns (C) for the card grid.
  - Maximum number of errors before losing points.
- **Computer AI**:
  - Memorizes discovered cards.
  - Can be confused by random Joker swaps.

---

## 🛠 How It Works
1. **Card Setup**: A grid of L rows and C columns is created, and cards are placed face down. 
2. **Turn-Based Play**: Players flip over two cards per turn to find matches:
   - A correct match earns points.
   - Failing to find matches after several consecutive attempts results in point loss.
3. **Joker Effect**: When the Joker is flipped, it swaps with a random card, disrupting the game and challenging the computer's memory.
4. **Replayable Rounds**: Players can start new rounds with the same or updated settings.

---

## 🎥 Watch the Gameplay
A demonstration of the gameplay is available. Click the link below to watch it:
[Watch the video here](https://said2404.github.io/Card_Games/)

---

## 👩‍💻 Technologies Used
- **C Language**: Core logic and game mechanics.
---

## ✍️ Authors
This project was created by **[me]** and **[my Colleague's Name]** as part of a university project. The work reflects collaboration, problem-solving, and programming skills honed through academic practice.

---

## 🔗 How to Play
1. Clone the repository:
   ```bash
   git clone https://github.com/Said2404/Card_Games.git
   ```
2. Run the executable:
   ```bash
   ./Memorix
   ```
3. Follow the on-screen instructions to configure the game and start playing!

---

Enjoy the game! 🎉
```

