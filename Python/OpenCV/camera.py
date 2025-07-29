import cv2

capture = 0
cap = cv2.VideoCapture(0)
fourcc = cv2.VideoWriter_fourcc(*"XVID")
out = cv2.VideoWriter("OpenCV/output.avi", fourcc, 20.0, (640,480))
font  = cv2.FONT_HERSHEY_SIMPLEX
text = ""
while(True):
    ret, frame = cap.read()
    if ret:
        if 0xFF == ord("c"):
            if capture == 1:
                    capture = 0
                    out.release()
                    text = "C - Start recording"
            else:
                    capture = 1
                    text = "C - Stop recording"

            cv2.imshow('capture', frame)
            if capture == 1:
                out.write(frame)
            
            if cv2.waitKey(1) & 0xFF == ord('q'):
                    break
    else:
        break

cap.release()
out.release()
cv2.destroyAllWindows()