// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FBBD0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_586fbbd0_586FBBD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF A3 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0dch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ech], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
