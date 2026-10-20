// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846E60 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_58846e60() {
    __asm {
        ; Exact mapped bytes 83 7C 24 08 02: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes 75 13: jne 0x58846e7a
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 3B 81 9C 00 00 00: cmp eax, dword ptr [ecx + 0x9c]
        __asm _emit 0x3b
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x58846e7a
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
