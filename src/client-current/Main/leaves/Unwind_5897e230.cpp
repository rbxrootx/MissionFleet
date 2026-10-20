// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E230 .. +0x19 bytes.
extern "C" __declspec(naked) void Unwind_5897e230() {
    __asm {
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 83 E0 01: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 0C 00 00 00: je 0x5897e248
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 65 F0 FE: and dword ptr [ebp - 0x10], 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 4D 04: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes E9 78 54 DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
