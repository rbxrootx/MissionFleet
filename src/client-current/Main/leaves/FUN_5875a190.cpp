// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875A190 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_5875a190() {
    __asm {
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 03: jne 0x5875a19a
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 3B 88 64 01 00 00: cmp ecx, dword ptr [eax + 0x164]
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
