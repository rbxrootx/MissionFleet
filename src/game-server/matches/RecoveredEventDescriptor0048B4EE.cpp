// Exact recovered event/descriptor helper.
extern "C" __declspec(naked) void Recovered0048B4EE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+68h]
    __asm shl ecx, 4
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [edx+ecx+6ch], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+68h]
    __asm shl edx, 4
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+0ch]
    __asm mov dword ptr [eax+edx+70h], ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+68h]
    __asm shl eax, 4
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp+10h]
    __asm mov dword ptr [ecx+eax+74h], edx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+68h]
    __asm shl ecx, 4
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp+14h]
    __asm mov dword ptr [edx+ecx+78h], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+68h]
    __asm add edx, 1
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax+68h], edx
    __asm mov ecx, dword ptr [ebp-4]
    __asm cmp dword ptr [ecx+68h], 0b3h
    __asm jl done
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+68h], 0
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 10h
}
