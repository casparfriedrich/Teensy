/*
 * Copyright (c) 2015 - 2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __USB_DEVICE_AUDIO_H__
#define __USB_DEVICE_AUDIO_H__ 1

/*!
 * @addtogroup usb_device_audio_drv
 * @{
 */

#if USB_DEVICE_CONFIG_AUDIO
#define USBCFG_AUDIO_CLASS_2_0 0
#endif

/*!
 * @name USB Audio class codes
 * @{
 */

/*! @brief Audio device class code */
#define USB_DEVICE_CONFIG_AUDIO_CLASS_CODE (0x01)

/*! @brief Audio device subclass code */
#define USB_DEVICE_AUDIO_STREAM_SUBCLASS (0x02)
#define USB_DEVICE_AUDIO_CONTROL_SUBCLASS (0x01)

/*! @brief Audio device class-specific descriptor type */
#define USB_DESCRIPTOR_TYPE_AUDIO_CS_INTERFACE (0x24)

/*! @brief Audio device class-specific control interface descriptor subtype */
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_CONTROL_HEADER (0x01)
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_CONTROL_INPUT_TERMINAL (0x02)
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_CONTROL_OUTPUT_TERMINAL (0x03)
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_CONTROL_FEATURE_UNIT (0x06)

/*! @brief Audio device class-specific steam interface descriptor subtype */
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_STREAMING_GENERAL (0x01)
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_STREAMING_FORMAT_TYPE (0x02)

/*! @brief Audio device class-specific GET CUR COMMAND  */
#define USB_DEVICE_AUDIO_GET_CUR_MUTE_CONTROL (0x8101)
#define USB_DEVICE_AUDIO_GET_CUR_VOLUME_CONTROL (0x8102)
#define USB_DEVICE_AUDIO_GET_CUR_BASS_CONTROL (0x8103)
#define USB_DEVICE_AUDIO_GET_CUR_MID_CONTROL (0x8104)
#define USB_DEVICE_AUDIO_GET_CUR_TREBLE_CONTROL (0x8105)
#define USB_DEVICE_AUDIO_GET_CUR_GRAPHIC_EQUALIZER_CONTROL (0x8106)
#define USB_DEVICE_AUDIO_GET_CUR_AUTOMATIC_GAIN_CONTROL (0x8107)
#define USB_DEVICE_AUDIO_GET_CUR_DELAY_CONTROL (0x8108)
#define USB_DEVICE_AUDIO_GET_CUR_BASS_BOOST_CONTROL (0x8109)
#define USB_DEVICE_AUDIO_GET_CUR_LOUDNESS_CONTROL (0x810A)

/*! @brief Audio device class-specific GET MIN COMMAND  */
#define USB_DEVICE_AUDIO_GET_MIN_VOLUME_CONTROL (0x8202)
#define USB_DEVICE_AUDIO_GET_MIN_BASS_CONTROL (0x8203)
#define USB_DEVICE_AUDIO_GET_MIN_MID_CONTROL (0x8204)
#define USB_DEVICE_AUDIO_GET_MIN_TREBLE_CONTROL (0x8205)
#define USB_DEVICE_AUDIO_GET_MIN_GRAPHIC_EQUALIZER_CONTROL (0x8206)
#define USB_DEVICE_AUDIO_GET_MIN_DELAY_CONTROL (0x8208)

/*! @brief Audio device class-specific GET MAX COMMAND  */
#define USB_DEVICE_AUDIO_GET_MAX_VOLUME_CONTROL (0x8302)
#define USB_DEVICE_AUDIO_GET_MAX_BASS_CONTROL (0x8303)
#define USB_DEVICE_AUDIO_GET_MAX_MID_CONTROL (0x8304)
#define USB_DEVICE_AUDIO_GET_MAX_TREBLE_CONTROL (0x8305)
#define USB_DEVICE_AUDIO_GET_MAX_GRAPHIC_EQUALIZER_CONTROL (0x8306)
#define USB_DEVICE_AUDIO_GET_MAX_DELAY_CONTROL (0x8308)

/*! @brief Audio device class-specific GET RES COMMAND  */
#define USB_DEVICE_AUDIO_GET_RES_VOLUME_CONTROL (0x8402)
#define USB_DEVICE_AUDIO_GET_RES_BASS_CONTROL (0x8403)
#define USB_DEVICE_AUDIO_GET_RES_MID_CONTROL (0x8404)
#define USB_DEVICE_AUDIO_GET_RES_TREBLE_CONTROL (0x8405)
#define USB_DEVICE_AUDIO_GET_RES_GRAPHIC_EQUALIZER_CONTROL (0x8406)
#define USB_DEVICE_AUDIO_GET_RES_DELAY_CONTROL (0x8408)

/*! @brief Audio device class-specific SET CUR COMMAND  */
#define USB_DEVICE_AUDIO_SET_CUR_MUTE_CONTROL (0x0101)
#define USB_DEVICE_AUDIO_SET_CUR_VOLUME_CONTROL (0x0102)
#define USB_DEVICE_AUDIO_SET_CUR_BASS_CONTROL (0x0103)
#define USB_DEVICE_AUDIO_SET_CUR_MID_CONTROL (0x0104)
#define USB_DEVICE_AUDIO_SET_CUR_TREBLE_CONTROL (0x0105)
#define USB_DEVICE_AUDIO_SET_CUR_GRAPHIC_EQUALIZER_CONTROL (0x0106)
#define USB_DEVICE_AUDIO_SET_CUR_AUTOMATIC_GAIN_CONTROL (0x0107)
#define USB_DEVICE_AUDIO_SET_CUR_DELAY_CONTROL (0x0108)
#define USB_DEVICE_AUDIO_SET_CUR_BASS_BOOST_CONTROL (0x0109)
#define USB_DEVICE_AUDIO_SET_CUR_LOUDNESS_CONTROL (0x010A)
#define USB_DEVICE_AUDIO_SET_CUR_PITCH_CONTROL (0x010D)

/*! @brief Audio device class-specific SET MIN COMMAND  */
#define USB_DEVICE_AUDIO_SET_MIN_VOLUME_CONTROL (0x0202)
#define USB_DEVICE_AUDIO_SET_MIN_BASS_CONTROL (0x0203)
#define USB_DEVICE_AUDIO_SET_MIN_MID_CONTROL (0x0204)
#define USB_DEVICE_AUDIO_SET_MIN_TREBLE_CONTROL (0x0205)
#define USB_DEVICE_AUDIO_SET_MIN_GRAPHIC_EQUALIZER_CONTROL (0x0206)
#define USB_DEVICE_AUDIO_SET_MIN_DELAY_CONTROL (0x0208)

/*! @brief Audio device class-specific SET MAX COMMAND  */
#define USB_DEVICE_AUDIO_SET_MAX_VOLUME_CONTROL (0x0302)
#define USB_DEVICE_AUDIO_SET_MAX_BASS_CONTROL (0x0303)
#define USB_DEVICE_AUDIO_SET_MAX_MID_CONTROL (0x0304)
#define USB_DEVICE_AUDIO_SET_MAX_TREBLE_CONTROL (0x0305)
#define USB_DEVICE_AUDIO_SET_MAX_GRAPHIC_EQUALIZER_CONTROL (0x0306)
#define USB_DEVICE_AUDIO_SET_MAX_DELAY_CONTROL (0x0308)

/*! @brief Audio device class-specific SET RES COMMAND  */
#define USB_DEVICE_AUDIO_SET_RES_VOLUME_CONTROL (0x0402)
#define USB_DEVICE_AUDIO_SET_RES_BASS_CONTROL (0x0403)
#define USB_DEVICE_AUDIO_SET_RES_MID_CONTROL (0x0404)
#define USB_DEVICE_AUDIO_SET_RES_TREBLE_CONTROL (0x0405)
#define USB_DEVICE_AUDIO_SET_RES_GRAPHIC_EQUALIZER_CONTROL (0x0406)
#define USB_DEVICE_AUDIO_SET_RES_DELAY_CONTROL (0x0408)

/*! @brief Audio device class-specific GET SAMPLING FREQ CONTROL COMMAND  */
#define USB_DEVICE_AUDIO_GET_CUR_SAMPLING_FREQ_CONTROL (0x810C)
#define USB_DEVICE_AUDIO_GET_MIN_SAMPLING_FREQ_CONTROL (0x820C)
#define USB_DEVICE_AUDIO_GET_MAX_SAMPLING_FREQ_CONTROL (0x830C)
#define USB_DEVICE_AUDIO_GET_RES_SAMPLING_FREQ_CONTROL (0x840C)

/*! @brief Audio device class-specific SET SAMPLING FREQ CONTROL COMMAND  */
#define USB_DEVICE_AUDIO_SET_CUR_SAMPLING_FREQ_CONTROL (0x010C)
#define USB_DEVICE_AUDIO_SET_MIN_SAMPLING_FREQ_CONTROL (0x020C)
#define USB_DEVICE_AUDIO_SET_MAX_SAMPLING_FREQ_CONTROL (0x030C)
#define USB_DEVICE_AUDIO_SET_RES_SAMPLING_FREQ_CONTROL (0x040C)

#if USBCFG_AUDIO_CLASS_2_0
/*! @brief Audio 2.0 device class-specific SET/GET SAMPLING FREQ CONTROL COMMAND  */
#define USB_DEVICE_AUDIO_SET_CUR_SAM_FREQ_CONTROL (0x0501)
#define USB_DEVICE_AUDIO_SET_CUR_CLOCK_VALID_CONTROL (0x0502)
#define USB_DEVICE_AUDIO_GET_CUR_SAM_FREQ_CONTROL (0x8501)
#define USB_DEVICE_AUDIO_GET_RANGE_SAM_FREQ_CONTROL (0x9501)
#define USB_DEVICE_AUDIO_GET_CUR_CLOCK_VALID_CONTROL (0x8502)
#endif

#if USBCFG_AUDIO_CLASS_2_0
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_CONTROL_CLOCK_SOURCE_UNIT (0x0A)
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_CONTROL_CLOCK_SELECTOR_UNIT (0x0B)
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_CONTROL_CLOCK_MULTIPLIER_UNIT (0x0C)
#define USB_DESCRIPTOR_SUBTYPE_AUDIO_CONTROL_SAMPLE_RATE_CONVERTER_UNIT (0x0D)

#define USB_DEVICE_AUDIO_CS_CONTROL_UNDEFINED (0x00)
#define USB_DEVICE_AUDIO_CS_SAM_FREQ_CONTROL (0x01)
#define USB_DEVICE_AUDIO_CS_CLOCK_VALID_CONTROL (0x02)
#define USB_DEVICE_AUDIO_REQUEST_CUR (0x01)
#define USB_DEVICE_AUDIO_REQUEST_RANGE (0x02)

#endif

/* Commands for USB device AUDIO Class specific request */
#define USB_DEVICE_AUDIO_SET_CUR_VOLUME_REQUEST (0x01)
#define USB_DEVICE_AUDIO_SET_MIN_VOLUME_REQUEST (0x02)
#define USB_DEVICE_AUDIO_SET_MAX_VOLUME_REQUEST (0x03)
#define USB_DEVICE_AUDIO_SET_RES_VOLUME_REQUEST (0x04)

#define USB_DEVICE_AUDIO_GET_CUR_VOLUME_REQUEST (0x81)
#define USB_DEVICE_AUDIO_GET_MIN_VOLUME_REQUEST (0x82)
#define USB_DEVICE_AUDIO_GET_MAX_VOLUME_REQUEST (0x83)
#define USB_DEVICE_AUDIO_GET_RES_VOLUME_REQUEST (0x84)

/* Commands for USB device AUDIO terminal control selector */
#define USB_DEVICE_AUDIO_COPY_PROTECT_CONTROL_SELECTOR (0x01)

/* Commands for USB device AUDIO feature unit control selector */
#define USB_DEVICE_AUDIO_MUTE_CONTROL_SELECTOR (0x01)
#define USB_DEVICE_AUDIO_VOLUME_CONTROL_SELECTOR (0x02)
#define USB_DEVICE_AUDIO_BASS_CONTROL_SELECTOR (0x03)
#define USB_DEVICE_AUDIO_MID_CONTROL_SELECTOR (0x04)
#define USB_DEVICE_AUDIO_TREBLE_CONTROL_SELECTOR (0x05)
#define USB_DEVICE_AUDIO_GRAPHIC_EQUALIZER_CONTROL_SELECTOR (0x06)
#define USB_DEVICE_AUDIO_AUTOMATIC_GAIN_CONTROL_SELECTOR (0x07)
#define USB_DEVICE_AUDIO_DELAY_CONTROL_SELECTOR (0x08)
#define USB_DEVICE_AUDIO_BASS_BOOST_CONTROL_SELECTOR (0x09)
#define USB_DEVICE_AUDIO_LOUDNESS_CONTROL_SELECTOR (0x0A)

/* Commands for USB device AUDIO endpoint control selector */
#define USB_DEVICE_AUDIO_SAMPLING_FREQ_CONTROL_SELECTOR (0x01)
#define USB_DEVICE_AUDIO_PITCH_CONTROL_SELECTOR (0x02)
/*! @}*/

/*!
 * @name USB Audio class setup request types
 * @{
 */
/*! @brief Audio device class setup request set type */
#define USB_DEVICE_AUDIO_SET_REQUEST_INTERFACE (0x21)
#define USB_DEVICE_AUDIO_SET_REQUEST_ENDPOINT (0x22)

/*! @brief Audio device class setup request get type */
#define USB_DEVICE_AUDIO_GET_REQUEST_INTERFACE (0xA1)
#define USB_DEVICE_AUDIO_GET_REQUEST_ENDPOINT (0xA2)
/*! @}*/

#if USBCFG_AUDIO_CLASS_2_0
STRUCT_PACKED
struct _usb_device_control_range_struct
{
    uint16_t samplingFrequencyNumber;
    uint32_t samplingFrequencyMin;
    uint32_t samplingFrequencyMax;
    uint32_t samplingFrequencyRes;
} STRUCT_UNPACKED;
typedef struct _usb_device_control_range_struct usb_device_control_range_struct_t;
#endif

/*! @}*/

#endif /* __USB_DEVICE_AUDIO_H__ */