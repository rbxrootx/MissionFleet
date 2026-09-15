// Exact recovered OLE/math dispatch helper.
extern "C" __declspec(naked) void Recovered004A5339()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax+28], 0
    __asm je done
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+28]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+28]
    __asm mov eax, dword ptr [ecx]
    __asm push edx
    __asm call dword ptr [eax+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx+28], 0
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
