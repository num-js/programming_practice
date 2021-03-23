from googletrans import Translator

translator = Translator()

word = "How are you"

translatedWord = translator.translate(word, dest="hi")

print(translatedWord.text)