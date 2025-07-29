import pygame

running = True
h = 800
w = 600
pygame.init()
screen = pygame.display.set_mode((h, w))
r1 = h/2
r2 = w/2
head = pygame.Surface((r2,r1))


while running == True:
    screen.fill('green')
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    head.fill('red')
    screen.blit(head, (r1,r2))
    key = pygame.key.get_pressed()
    if key[pygame.K_w]:
        r1-=20
    if key[pygame.K_s]:
        r1+=20
    if key[pygame.K_d]:
        r2+=20
    if key[pygame.K_a]:
        r2-=20
    
    pygame.display.update()
    pygame.time.Clock().tick(60)
pygame.quit()