modded class EffectSound
{
	// Needed to get wavelength in seconds to send to server to move AI mouth - !TODO: Better way to do this?
	AbstractWave ZenExpAI_GetAbstractWave()
	{
		return m_SoundWaveObject;
	}
}