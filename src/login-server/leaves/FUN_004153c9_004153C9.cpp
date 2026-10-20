// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004153C9 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004153c9_004153C9() {
    __asm {
        ; Exact mapped bytes 66 83 7C 24 10 64: cmp word ptr [esp + 0x10], 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x64
        ; Exact mapped bytes 74 1F: je 0x4153f0
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 75 18: jne 0x4153f0
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esp + 8]
        cmp eax, -2
        ; Exact mapped bytes 74 0F: je 0x4153f0
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [esp + 4]
        inc eax
        mov ecx, dword ptr [edx]
        cmp ecx, eax
        ; Exact mapped bytes 7E 02: jle 0x4153ee
        __asm _emit 0x7e
        __asm _emit 0x02
        mov eax, ecx
        mov dword ptr [edx], eax
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
