// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58742D60 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58742d60() {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 50h]
        add ecx, -2
        cmp ecx, 8
        ; Exact mapped bytes 77 54: ja 0x58742dc1
        __asm _emit 0x77
        __asm _emit 0x54
        movzx ecx, byte ptr [ecx + 58742dd4h]
        ; Exact mapped bytes FF 24 8D C8 2D 74 58: jmp dword ptr [ecx*4 + 0x58742dc8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x2d
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [eax + 50h], 1
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x58742da4
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        shr dl, 5
        test dl, 1
        ; Exact mapped bytes 74 0F: je 0x58742da4
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
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [eax + 50h], 7
        test ecx, ecx
        ; Exact mapped bytes 74 EF: je 0x58742da4
        __asm _emit 0x74
        __asm _emit 0xef
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        shr cl, 5
        test cl, 1
        ; Exact mapped bytes EB D2: jmp 0x58742d93
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, dword ptr [eax + 34h]
        ret
    }
}
