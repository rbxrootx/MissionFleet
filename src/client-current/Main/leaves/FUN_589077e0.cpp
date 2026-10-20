// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589077E0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_589077e0() {
    __asm {
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 28: jne 0x5890780e
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 22: je 0x5890780e
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 83 3D 34 85 A2 58 00: cmp dword ptr [0x58a28534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x589077fe
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 38 85 A2 58 00: cmp dword ptr [0x58a28538], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x5890780e
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 18h]
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 40h]
        push edx
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
