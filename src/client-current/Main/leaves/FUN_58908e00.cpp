// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58908E00 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58908e00() {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 50h]
        add ecx, -2
        cmp ecx, 4
        ; Exact mapped bytes 77 3C: ja 0x58908e49
        __asm _emit 0x77
        __asm _emit 0x3c
        ; Exact mapped bytes FF 24 8D 50 8E 90 58: jmp dword ptr [ecx*4 + 0x58908e50]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [eax + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x58908e3d
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        shr cl, 5
        test cl, 1
        ; Exact mapped bytes 74 0F: je 0x58908e3d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        push 0
        push 4
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        ret
        mov dword ptr [eax + 50h], 5
        ; Exact mapped bytes EB D2: jmp 0x58908e1b
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, dword ptr [eax + 34h]
        ret
    }
}
