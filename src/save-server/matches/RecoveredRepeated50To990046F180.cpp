
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0046F180()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm add ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm cmp dword ptr [edx + 4], 0
    __asm jl loc_0046F1BF
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [eax + 4]
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [edx + ecx]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov edx, dword ptr [ecx + 8]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, dword ptr [eax + edx]
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov eax, dword ptr [ebp - 4]
    __asm add eax, dword ptr [edx + 4]
    __asm mov dword ptr [ebp - 4], eax
loc_0046F1BF:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
