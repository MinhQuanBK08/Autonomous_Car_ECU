/**
 * Copyright (c) 2019, Bosch Engineering Center Cluj and BFMC organizers
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:

 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.

 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.

 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE
*/


#include <hardware/encoders/encoderinterfaces.hpp>


namespace hardware::encoders{

    /**
     * @brief Getter function for the last filtered value.
     * 
     * @return Filtered counted impulses 
     */
    int16_t IEncoderGetter::getCount(){
        return 0;
    }

    /**
     * @brief Getter function for the last filtered rotation speed (rotation per second). 
     * 
     * @return Filtered rotation speed in rps 
     */
    float IEncoderGetter::getSpeedRps(){
        return 0.0;

    }

    /**
     * @brief Getter function for the traveled distance. 
     * 
     * @return traveled distance
     */
    float IEncoderGetter::getTraveledDistance(){
        return 0.0;
    }

    /**
     * @brief Getter function starts the recording for the traveled distance. 
     * 
     * @return 
     */
    void IEncoderGetter::startDistMeasure(){
    }

    /**
     * @brief Getter function for the traveled distance. 
     * 
     * @return 
     */
    void IEncoderGetter::stopDistMeasure(){
    }

    /**
    * @brief Get the encoder capacity. If it's false, than the encoder can give the orientation like a positive or a negative rotation speed, else it returns only the absolute value of the rotation speed. 
    * 
    * @return Capacity of measuring the rotation direction
    */
    bool IEncoderGetter::isAbs(){
        return 0;
    }

    
}; // namespace hardware::encoders 