import datetime as dt
import cv2 as cv
# import numpy as np

cap = cv.VideoCapture(0)

while(True):
    ret, frame = cap.read()
    if ret == True:
        date = str(dt.datetime.now())
        font = cv.FONT_HERSHEY_PLAIN
        frame = cv.putText(frame, date, (40,40),font, 1, (0,255,255), 1)

        cv.imshow('capture', frame)

    if cv.waitKey(0) & 0xFF == ord('q'):
        break
cap.release()
cv.destroyAllWindows()