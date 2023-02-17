#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int avg = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3);
            image[i][j].rgbtRed = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtBlue = avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0, k = width; j < k; j++, k--)
        {
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][k];
            image[i][k] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sumRed = 0;
            int sumGreen = 0;
            int sumBlue = 0;
            int counter = 0;

            // For neighbouring pixels
            for (int x = -1; x <= 1; x++)
            {
                for (int y = -1; y <= 1; y++)
                {
                    int currentX = i + x;
                    int currentY = j + y;

                    // Check if neighbouring pixels are valid
                    if (currentX < 0 ||currentX > (height - 1) || currentY < 0 || currentY > (width - 1))
                    {
                        continue;
                    }

                    // Get image value
                    sumRed = sumRed + image[currentX][currentY].rgbtRed;
                    sumGreen = sumGreen + image[currentX][currentY].rgbtGreen;
                    sumBlue = sumBlue + image[currentX][currentY].rgbtBlue;

                    counter++;

                    // Calculate average of neighbouring pixels
                    temp[i][j].rgbtRed = round(sumRed / counter);
                    temp[i][j].rgbtGreen = round(sumGreen / counter);
                    temp[i][j].rgbtBlue = round(sumBlue / counter);
                }
            }
        }
        // Copy new pixels into original image
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; i < width; j++)
            {
                image[i][j].rgbtRed = temp[i][j].rgbtRed;
                image[i][j].rgbtGreen = temp[i][j].rgbtGreen;
                image[i][j].rgbtBlue = temp[i][j].rgbtBlue;
            }
        }
    }
}
