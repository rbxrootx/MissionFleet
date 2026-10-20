// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FB930 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_588fb930() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 81 C1 A4 09 00 00: add ecx, 0x9a4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 39 00: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x588fb94c
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 72 F2: jb 0x588fb938
        __asm _emit 0x72
        __asm _emit 0xf2
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
