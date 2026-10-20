// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891F37 .. +0x19 bytes.
extern "C" __declspec(naked) void Unwind_58891f37() {
    __asm {
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 83 E0 08: and eax, 8
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 0C 00 00 00: je 0x58891f4f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 65 F0 F7: and dword ptr [ebp - 0x10], 0xfffffff7
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xf7
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 E1 7D C1 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x7d
        __asm _emit 0xc1
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
