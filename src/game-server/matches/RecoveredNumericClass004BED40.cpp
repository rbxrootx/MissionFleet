// Exact recovered numeric classifier.
extern "C" __declspec(naked) void Recovered004BED40()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 0ffffh
    __asm and eax, 1
    __asm test eax, eax
    __asm je flag4
    __asm mov ecx, dword ptr [ebp-4]
    __asm or ecx, 10h
    __asm mov dword ptr [ebp-4], ecx
    __asm flag4:
    __asm mov edx, dword ptr [ebp+8]
    __asm and edx, 0ffffh
    __asm and edx, 4
    __asm test edx, edx
    __asm je flag8
    __asm mov eax, dword ptr [ebp-4]
    __asm or al, 8
    __asm mov dword ptr [ebp-4], eax
    __asm flag8:
    __asm mov ecx, dword ptr [ebp+8]
    __asm and ecx, 0ffffh
    __asm and ecx, 8
    __asm test ecx, ecx
    __asm je flag16
    __asm mov edx, dword ptr [ebp-4]
    __asm or edx, 4
    __asm mov dword ptr [ebp-4], edx
    __asm flag16:
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 0ffffh
    __asm and eax, 10h
    __asm test eax, eax
    __asm je flag32
    __asm mov ecx, dword ptr [ebp-4]
    __asm or ecx, 2
    __asm mov dword ptr [ebp-4], ecx
    __asm flag32:
    __asm mov edx, dword ptr [ebp+8]
    __asm and edx, 0ffffh
    __asm and edx, 20h
    __asm test edx, edx
    __asm je flag2
    __asm mov eax, dword ptr [ebp-4]
    __asm or al, 1
    __asm mov dword ptr [ebp-4], eax
    __asm flag2:
    __asm mov ecx, dword ptr [ebp+8]
    __asm and ecx, 0ffffh
    __asm and ecx, 2
    __asm test ecx, ecx
    __asm je done
    __asm mov edx, dword ptr [ebp-4]
    __asm or edx, 80000h
    __asm mov dword ptr [ebp-4], edx
    __asm done:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
