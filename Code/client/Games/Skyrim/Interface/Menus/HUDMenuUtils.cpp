
#include <Games/Skyrim/Interface/Menus/HUDMenuUtils.h>
#include <Games/Skyrim/NetImmerse/NiCamera.h>

namespace HUDMenuUtils
{
static float (*CameraWorldToCam)[4][4] = nullptr;
static const NiRect<float>* CameraPort = nullptr;

bool WorldPtToScreenPt3(const NiPoint3& arWorldPt, NiPoint3& arScreenPt)
{
    return NiCamera::WorldPtToScreenPt3(reinterpret_cast<float*>(CameraWorldToCam), CameraPort, &arWorldPt,
                                        &arScreenPt.x, &arScreenPt.y, &arScreenPt.z, 1e-5f);
}
} // namespace HUDMenuUtils

static TiltedPhoques::Initializer s_Init([]() {
    POINTER_FALLOUT4(float[4][4], s_matrix, 0x145A66AA0 - 0x140000000);
    POINTER_FALLOUT4(NiRect<float>, s_port, 0x145A66B30 - 0x140000000);

    POINTER_SKYRIMSE(float[4][4], s_matrix, 0x142FE75F0 - 0x140000000);
    POINTER_SKYRIMSE(NiRect<float>, s_port, 0x142FE8B98 - 0x140000000);

    HUDMenuUtils::CameraWorldToCam = s_matrix.Get();
    HUDMenuUtils::CameraPort = s_port.Get();
});
