// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58842160 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58842160() {
    __asm {
        push esi
        push edi
        mov dword ptr [ecx + 64h], 0
        lea esi, [ecx + 0d0h]
        mov edi, 4
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 75 66 0C 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x66
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 F1: jne 0x58842174
        __asm _emit 0x75
        __asm _emit 0xf1
        pop edi
        pop esi
        ret
    }
}
