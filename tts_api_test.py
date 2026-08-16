import os
from google.cloud import texttospeech

GOOGLE_API_KEY = os.getenv("GOOGLE_API_KEY")
if not GOOGLE_API_KEY:
    raise RuntimeError("GOOGLE_API_KEY environment variable is not set.")

client = texttospeech.TextToSpeechClient(
    client_options={"api_key": GOOGLE_API_KEY}
)

synthesis_input = texttospeech.SynthesisInput(
    text="Hello! My name is Jubileo! Let's play some games?"
)
voice = texttospeech.VoiceSelectionParams(
    language_code="en-US",
    name="en-US-Wavenet-I",
    ssml_gender=texttospeech.SsmlVoiceGender.NEUTRAL,
)
audio_config = texttospeech.AudioConfig(
    audio_encoding=texttospeech.AudioEncoding.MP3,
    speaking_rate=0.8,
)

response = client.synthesize_speech(
    input=synthesis_input,
    voice=voice,
    audio_config=audio_config,
)

with open("output.mp3", "wb") as out:
    out.write(response.audio_content)
    print('Audio content written to file "output.mp3"')
