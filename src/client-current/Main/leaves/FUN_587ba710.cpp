// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA710 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_587ba710() {
    __asm {
        ; Exact mapped bytes 8B 81 10 01 00 00: mov eax, dword ptr [ecx + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 7E 07: jle 0x587ba722
        __asm _emit 0x7e
        __asm _emit 0x07
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 89 81 10 01 00 00: mov dword ptr [ecx + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
