import cv2 as cv
import numpy as np

frame = np.zeros((480,640), np.uint8) #creates a black image

text = 'HI, OPenCV'

font = cv.FONT_HERSHEY_SIMPLEX
frame = cv.putText(frame, text,(200,300), font, 1, (255,255,255), 2)
cv.imshow('image', frame)

cv.waitKey(0)
cv.destroyAllWindows()