import cv2 as cv
import numpy as np

# cap = cv.VideoCapture(0)

def click_event(event, x, y, flags, para):
    if event == cv.EVENT_LBUTTONDOWN:
        print(x , ' ' , y)
        text = str(x) + ' ' + str(y)
        font = cv.FONT_HERSHEY_SIMPLEX
        cv.putText(img, text,(x,y), font, 1, (255,255,255), 2)
        cv.imshow('image', img)
img = np.zeros((512,512,3), np.uint16)
cv.imshow('image', img)
cv.setMouseCallback('image', click_event)
cv.waitKey(0)
cv.destroyAllWindows()
