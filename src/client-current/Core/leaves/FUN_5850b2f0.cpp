// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B2F0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_5850b2f0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8D 45 08: lea eax, [ebp + 8]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 24 E3 34 00: call 0x58859620
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe3
        __asm _emit 0x34
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 98: cwde
        __asm _emit 0x98
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
