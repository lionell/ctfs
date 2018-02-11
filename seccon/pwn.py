from PIL import Image
from PIL import ImageEnhance
import zbarlight
import urllib
import cStringIO

def traverse(rol):
    sides = ["B", "D", "F", "L", "R", "U"]

    for s in sides:
        URL = base + rol + "_" + s + ".png"

        file = cStringIO.StringIO(urllib.urlopen(URL).read())
        img = Image.open(file)
        img.load()

        img.show()
        enhancer = ImageEnhance.Color(img)
        img = enhancer.enhance(0.0)
        #enhancer = ImageEnhance.Brightness(img)
        #img = enhancer.enhance(5.0)
        #enhancer = ImageEnhance.Contrast(img)
        #img = enhancer.enhance(5.0)
        img.show()
        exit()

        #codes = zbarlight.scan_codes('qrcode', img)
        #print URL
        #print('QR code: %s' % codes)

base = "http://qubicrube.pwn.seccon.jp:33654/images/"
#rol = "02c286df1bbd7923d1f7"

#traverse("01000000000000000000")
traverse("02c286df1bbd7923d1f7")
