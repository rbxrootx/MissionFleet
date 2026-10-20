// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891F00 .. +0x19 bytes.
extern "C" __declspec(naked) void Unwind_58891f00() {
    __asm {
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 83 E0 02: and eax, 2
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 0C 00 00 00: je 0x58891f18
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 65 F0 FD: and dword ptr [ebp - 0x10], 0xfffffffd
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xfd
        ; Exact mapped bytes 8D 4D 8C: lea ecx, [ebp - 0x74]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes E9 38 4F C7 FF: jmp 0x58506e50
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x4f
        __asm _emit 0xc7
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
