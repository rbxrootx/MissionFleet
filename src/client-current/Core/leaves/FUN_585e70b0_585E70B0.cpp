// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E70B0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_585e70b0_585E70B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 88h], ecx
        mov edx, 19h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 8C 00 00 00: mov word ptr [eax + 0x8c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
