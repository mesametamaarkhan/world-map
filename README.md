# 🌍 Interactive World Map (SFML + C++)

This project is an interactive world map built using C++ and SFML (Simple and Fast Multimedia Library). It allows users to explore different countries by clicking on map icons, which reveal detailed country information such as population, area, and Olympic medal history.

---

## ✨ Features

- Interactive clickable world map
- Visual display of country flags and details
- Information includes:
  - Country name
  - Population
  - Area in square kilometers
  - Olympic medals won
- Polished UI with SFML rendering
- Easy navigation between countries

---

## 🛠️ Installation

### Step 1: Clone the Repository

```bash
git clone https://github.com/mesametamaarkhan/interactive-world-map.git
cd interactive-world-map
sudo apt update
sudo apt install libsfml-dev
g++ main.cpp -o worldmap -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
./worldmap


