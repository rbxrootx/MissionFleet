// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422F3D .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00422f3d_00422F3D() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push 0
        and dword ptr [esi], 0
        ; Exact mapped bytes FF 15 04 C2 43 00: call dword ptr [0x43c204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 38 4D 5A: cmp word ptr [eax], 0x5a4d
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x4d
        __asm _emit 0x5a
        ; Exact mapped bytes 75 14: jne 0x422f68
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [eax + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x422f68
        __asm _emit 0x74
        __asm _emit 0x0d
        add eax, ecx
        mov cl, byte ptr [eax + 1ah]
        mov byte ptr [esi], cl
        mov al, byte ptr [eax + 1bh]
        mov byte ptr [esi + 1], al
        pop esi
        ret
    }
}
