// Geometric Tools LLC, Redmond WA 98052
// Copyright (c) 1998-2015
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
// File Version: 2.0.0 (2015/09/23)

#pragma once

#include <Graphics/GteBlendState.h>
#include <Graphics/DX11/GteDX11DrawingState.h>

namespace gte
{

class GTE_IMPEXP DX11BlendState : public DX11DrawingState
{
public:
    // Construction and destruction.
    virtual ~DX11BlendState();
    DX11BlendState(ID3D11Device* device, BlendState const* blendState);
    static DX11GraphicsObject* Create(ID3D11Device* device,
        GraphicsObject const* object);

    // Member access.
    BlendState* GetBlendState();
    ID3D11BlendState* GetDXBlendState();

    // Enable the blend state.
    void Enable(ID3D11DeviceContext* context);

private:
    // Conversions from GTEngine values to DX11 values.
    static D3D11_BLEND const msMode[];
    static D3D11_BLEND_OP const msOperation[];
};

}
