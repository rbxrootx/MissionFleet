// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588199B0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_588199b0() {
    __asm {
        push esi
        push edi
        lea esi, [ecx + 74h]
        mov edi, 6
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 B9 EC 0E 00: call 0x58908680
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 F1: jne 0x588199c0
        __asm _emit 0x75
        __asm _emit 0xf1
        pop edi
        pop esi
        ret
    }
}
