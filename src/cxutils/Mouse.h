////////////////////////////////////////////////////////////////////////////////////
///
///  \file Mouse.h
///  \brief Main include file which contains methods for capturing and generating
///  mouse events.
///
///  <br>Author(s): Daniel Barber
///  <br>Created: 10 March 2009
///  <br>Copyright (c) 2009
///  <br>Applied Cognition and Training in Immersive Virtual Environments
///  <br>(ACTIVE) Laboratory
///  <br>Institute for Simulation and Training (IST)
///  <br>University of Central Florida (UCF)
///  <br>All rights reserved.
///  <br>Email: dbarber@ist.ucf.edu
///  <br>Web:  http://active.ist.ucf.edu
///
///  Redistribution and use in source and binary forms, with or without
///  modification, are permitted provided that the following conditions are met:
///      * Redistributions of source code must retain the above copyright
///        notice, this list of conditions and the following disclaimer.
///      * Redistributions in binary form must reproduce the above copyright
///        notice, this list of conditions and the following disclaimer in the
///        documentation and/or other materials provided with the distribution.
///      * Neither the name of the ACTIVE LAB, IST, UCF, nor the
///        names of its contributors may be used to endorse or promote products
///        derived from this software without specific prior written permission.
/// 
///  THIS SOFTWARE IS PROVIDED BY THE ACTIVE LAB''AS IS'' AND ANY
///  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
///  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
///  DISCLAIMED. IN NO EVENT SHALL UCF BE LIABLE FOR ANY
///  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
///  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
///  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
///  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
///  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
///  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
///
////////////////////////////////////////////////////////////////////////////////////
#ifndef __CXUTILS_MOUSE__H
#define __CXUTILS_MOUSE__H

#include "cxutils/CxBase.h"

namespace CxUtils
{
    ////////////////////////////////////////////////////////////////////////////////////
    ///
    ///   \class Mouse
    ///   \brief Static methods for determining the current position of the mouse
    ///          cursor on the screen and to emulate mouse movements and button
    ///          clicks.
    ///
    ///   Dependencies for Linux: libx11, libxtst
    ///
    ////////////////////////////////////////////////////////////////////////////////////
    class CX_UTILS_DLL Mouse
    {
    public:
        ////////////////////////////////////////////////////////////////////////////////////
        ///
        ///   \enum Button
        ///   \brief Button values on a mouse.
        ///
        ////////////////////////////////////////////////////////////////////////////////////
        enum Button
        {
            Any = -1,
            Invalid = 0,
            LeftButton = 0x01,
            RightButton = 0x02,
            MiddleButton = 0x04
        };
        static bool IsButtonDown(const Button button = Any);
        static Button GetCurrentButton();
        static bool FakeButtonPress(const Button button,
                                    const bool releaseFlag = true);
        static bool FakeButtonRelease(const Button button);
        static bool SetCursorPosition(const double dx, 
                                      const double dy,
                                      const bool absoluteFlag = true);
        static bool GetCursorPosition(double& x,
                                      double& y,
                                      const bool normalized = true);
        static bool GetScreenResolution(unsigned int& width, unsigned int& height);
    };
}


#endif
/* End of File */