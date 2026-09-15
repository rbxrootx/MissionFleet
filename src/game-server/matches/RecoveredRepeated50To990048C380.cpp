
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0048C380()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0xbb8]
    __asm add ecx, 1
    __asm mov edx, dword ptr [eax + 0xbbc]
    __asm adc edx, 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0xbb8], ecx
    __asm mov dword ptr [eax + 0xbbc], edx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx + 0xbf0]
    __asm add edx, 1
    __asm mov eax, dword ptr [ecx + 0xbf4]
    __asm adc eax, 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 0xbf0], edx
    __asm mov dword ptr [ecx + 0xbf4], eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
