import matplotlib.pyplot as plt
import numpy as np

# Define x values for the plot range
x = np.linspace(0, 6, 400)

# Define the two lines rearranged for y:
# Line 1: x + y - 7 = 0  =>  y = 7 - x
y1 = 7 - x

# Line 2: 3x + y - 13 = 0  =>  y = 13 - 3x
y2 = 13 - 3 * x

# Create the figure and plot the lines
plt.figure(figsize=(8, 6))
plt.plot(x, y1, label="x + y - 7 = 0", color="blue", linewidth=2)
plt.plot(x, y2, label="3x + y - 13 = 0", color="orange", linewidth=2)

# Plot the intersection point (3, 4)
plt.plot(3, 4, "ro", markersize=8, label="Intersection Point (3, 4)")

# Add formatting: axes lines, labels, grid, and legend
plt.axhline(0, color="black", linewidth=1, linestyle="--")
plt.axvline(0, color="black", linewidth=1, linestyle="--")
plt.title("Intersection of Lines from Question 28")
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.grid(True, linestyle=":", alpha=0.7)
plt.legend()

# Save the plot as an image file
plt.savefig("lines_plot.png", dpi=300, bbox_inches="tight")
print("Image saved successfully as 'lines_plot.png'")

