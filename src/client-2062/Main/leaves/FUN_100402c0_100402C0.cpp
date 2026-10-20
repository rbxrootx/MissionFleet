// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100402C0 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_100402c0_100402C0() {
    __asm {
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes BA 20 00 00 00: mov edx, 0x20
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 06: je 0x100402d4
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 75 EE: jne 0x100402c8
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
