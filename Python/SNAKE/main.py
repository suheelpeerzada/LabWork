import pygame

screen = pygame.display.set_mode((800,600))
pl = pygame.image.load('FLAPPY\\assets\\flb1.png').convert_alpha()
player = pl.get_rect()
vel = 4
pygame.init()
clock = pygame.time.Clock()

while True:
    screen.fill('white')   
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            break
    keys = pygame.key.get_pressed()
    if keys[pygame.K_w]:
        player.y -= vel
    if keys[pygame.K_s]:
        player.y += vel
    if keys[pygame.K_d]:
        player.x += vel
    if keys[pygame.K_a]:
        player.x -= vel
    clock.tick(60)
    screen.blit(pl,player)
    pygame.display.update()
quit()