// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588808BF .. +0x19 bytes.
extern "C" __declspec(naked) void Unwind_588808bf() {
    __asm {
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 83 E0 01: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 0C 00 00 00: je 0x588808d7
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
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 49 68 C8 FF: jmp 0x58507120
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
