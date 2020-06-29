/**
 * picolibrary-microchip-avr-megaavr
 *
 * Copyright 2020 Andrew Countryman <apcountryman@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed under
 * the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * \file
 * \brief picolibrary::Microchip::AVR::megaAVR::Asynchronous_Serial::Transmitter_8_N_1
 *        hello world interactive test program.
 */

#include "picolibrary/microchip/avr/megaavr/asynchronous_serial.h"
#include "picolibrary/microchip/avr/megaavr/peripheral.h"
#include "picolibrary/microchip/avr/megaavr/peripheral/usart.h"
#include "picolibrary/testing/interactive/asynchronous_serial.h"

/**
 * \brief Execute the
 *        picolibrary::Microchip::AVR::megaAVR::Asynchronous_Serial::Transmitter_8_N_1
 *        interactive test.
 *
 * \return 0.
 */
int main()
{
    ::picolibrary::Testing::Interactive::Asynchronous_Serial::hello_world(
        ::picolibrary::Microchip::AVR::megaAVR::Asynchronous_Serial::Transmitter_8_N_1{
            ::picolibrary::Microchip::AVR::megaAVR::Peripheral::TRANSMITTER_USART(),
            { .operating_speed = ::picolibrary::Microchip::AVR::megaAVR::Peripheral::USART::Operating_Speed::TRANSMITTER_CLOCK_GENERATOR_OPERATING_SPEED,
              .scaling_factor  = TRANSMITTER_CLOCK_GENERATOR_SCALING_FACTOR } } );
}