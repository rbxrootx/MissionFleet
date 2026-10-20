// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A09F0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_587a09f0() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 75 F1 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 81 3C 01 00 00: mov dword ptr [ecx + 0x13c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
