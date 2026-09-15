// Exact recovered state/data leaf.
extern "C" __declspec(naked) void Recovered00510B15()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm mov dword ptr [ebp-4], 0
    __asm mov eax, dword ptr [ebp-8]
    __asm cmp dword ptr [eax+112], 0
    __asm je second
    __asm mov ecx, dword ptr [ebp-4]
    __asm or ecx, 100000h
    __asm mov dword ptr [ebp-4], ecx
    __asm second:
    __asm mov edx, dword ptr [ebp-8]
    __asm cmp dword ptr [edx+116], 0
    __asm je done
    __asm mov eax, dword ptr [ebp-4]
    __asm or eax, 200000h
    __asm mov dword ptr [ebp-4], eax
    __asm done:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
