// Geometric Tools LLC, Redmond WA 98052
// Copyright (c) 1998-2015
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
// File Version: 2.0.0 (2015/09/23)

#pragma once

#include <GTEngine.h>
using namespace gte;

//#define SAVE_RENDERING_TO_DISK

class TexturingWindow : public Window3
{
public:
    TexturingWindow(Parameters& parameters);

    virtual void OnIdle();

private:
    bool SetEnvironment();
    void CreateScene();
    void InitializeCamera();

    std::shared_ptr<Visual> mSquare;

#if defined(SAVE_RENDERING_TO_DISK)
    std::shared_ptr<DrawTarget> mTarget;
#endif
};
