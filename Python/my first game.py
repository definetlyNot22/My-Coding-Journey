import pygame
import random
pygame.init()
width, height = 800, 600
window = pygame.display.set_mode((width, height))
pygame.display.set_caption('Snake, Water, Gun')
snake_img = pygame.image.load('snake.png')
water_img = pygame.image.load('water.png')
gun_img = pygame.image.load('gun.png')
images = {"snake": snake_img, "water": water_img, "gun": gun_img}
white = (255, 255, 255)
black = (0, 0, 0)
choices = ["snake", "water", "gun"]
you_choice = None
computer_choice = None
font = pygame.font.SysFont(None, 55)

def display_message(text, color, x, y):
    screen_text = font.render(text, True, color)
    window.blit(screen_text, [x, y])

running = True

while running:
    window.fill(white)
    window.blit(snake_img, (100, 100))
    window.blit(water_img, (300, 100))
    window.blit(gun_img, (500, 100))
    
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.MOUSEBUTTONDOWN:
            mouse_x, mouse_y = event.pos
            if 100 < mouse_x < 300 and 100 < mouse_y < 300:
                you_choice = "snake"
            elif 300 < mouse_x < 500 and 100 < mouse_y < 300:
                you_choice = "water"
            elif 500 < mouse_x < 700 and 100 < mouse_y < 300:
                you_choice = "gun"
                
            if you_choice:
                computer_choice = random.choice(choices)
                
                window.blit(images[you_choice], (150, 400))
                window.blit(images[computer_choice], (500, 400))
                
                you = you_choice
                computer = computer_choice
                if you == computer:
                    display_message("It's a draw!", black, 300, 350)
                elif (you == "snake" and computer == "water") or \
                     (you == "water" and computer == "gun") or \
                     (you == "gun" and computer == "snake"):
                    display_message("You win!", black, 300, 350)
                else:
                    display_message("You lose!", black, 300, 350)
    
    pygame.display.update()

pygame.quit()
