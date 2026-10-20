// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10002EC0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_10002ec0_10002EC0() {
    __asm {
        ; Exact mapped bytes 8B 41 58: mov eax, dword ptr [ecx + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 73 07: jae 0x10002ecf
        __asm _emit 0x73
        __asm _emit 0x07
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 41 58: mov dword ptr [ecx + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x58
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes C7 41 58 00 00 00 00: mov dword ptr [ecx + 0x58], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
