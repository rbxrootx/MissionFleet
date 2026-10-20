// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58848EBA .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58848eba() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8D 4E 14: lea ecx, [esi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes E8 12 00 00 00: call 0x58848ed7
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 A6 70 AF 06 00 00: and dword ptr [esi + 0x6af70], 0
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x70
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 83 A6 A4 AF 06 00 00: and dword ptr [esi + 0x6afa4], 0
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0xa4
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
