import numpy as np
import cv2 as cv

img = cv.imread('lena_copy.jpg', 1)

img = cv.line(img, (0,0), (150,300), (255,0,0), 10)

img = cv.rectangle(img, (160,50), (280,280), (0,255,0), 10)

img = cv.circle(img, (200,400), 60, (0,0,255), 10)

img = cv.arrowedLine(img, (620,480), (200,400), (255,255,0), 10)

cv.imshow('image', img)
cv.waitKey(0)
cv.destroyAllWindows()