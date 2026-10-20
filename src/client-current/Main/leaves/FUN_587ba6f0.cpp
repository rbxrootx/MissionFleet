// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA6F0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_587ba6f0() {
    __asm {
        ; Exact mapped bytes 8B 81 B4 00 00 00: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 45 25 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x25
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
