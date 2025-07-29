import cv2 as cv
import numpy as np

cap = cv.VideoCapture(0)

while(1):
    ret, frame = cap.read()
    if ret:
        cv.imshow('capture', frame)
        me = np.arange(frame)
        face = cv.FaceDetectorYN.detect(me)
        if cv.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        break

cap.release()
cv.destroyAllWindows()