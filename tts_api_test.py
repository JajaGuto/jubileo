from google.cloud import texttospeech

# Instantiates a client
client = texttospeech.TextToSpeechClient(client_options={"api_key": "AIzaSyDmDeVSEnYsyBtCztCFfZm6_R7TzmT-Kp8"})

# Set the text input to be synthesized
synthesis_input = texttospeech.SynthesisInput(text="Hello! My name is Jubileo! Let's play some games?")

# Build the voice request, select the language code ("en-US") and the ssml
# voice gender ("neutral")
voice = texttospeech.VoiceSelectionParams(
    language_code="en-US", 
    name="en-US-Wavenet-I", 
    ssml_gender=texttospeech.SsmlVoiceGender.NEUTRAL
)   

# Select the type of audio file you want returned
audio_config = texttospeech.AudioConfig(
    audio_encoding=texttospeech.AudioEncoding.MP3,
    speaking_rate=0.8
)

# Perform the text-to-speech request on the text input with the selected
# voice parameters and audio file type
response = client.synthesize_speech(
    input=synthesis_input, voice=voice, audio_config=audio_config
)

# The response's audio_content is binary.
with open("output.mp3", "wb") as out:
    # Write the response to the output file.
    out.write(response.audio_content)
    print('Audio content written to file "output.mp3"')
