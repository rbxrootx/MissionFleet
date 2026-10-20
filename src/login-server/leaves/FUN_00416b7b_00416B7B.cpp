// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416B7B .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_00416b7b_00416B7B() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        xor edx, edx
        push ebx
        push esi
        ; Exact mapped bytes 66 81 79 02 FF FF: cmp word ptr [ecx + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ecx]
        sete dl
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x416b9a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [ecx + 0ch]
        lea eax, [ecx + 1ah]
        ; Exact mapped bytes EB 03: jmp 0x416b9d
        __asm _emit 0xeb
        __asm _emit 0x03
        lea eax, [ecx + 12h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push 2
        ; Exact mapped bytes 66 81 F9 FF FF: cmp cx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes 75 12: jne 0x416bbc
        __asm _emit 0x75
        __asm _emit 0x12
        add eax, 4
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 81 F9 FF FF: cmp cx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 11: jne 0x416bc8
        __asm _emit 0x75
        __asm _emit 0x11
        add eax, 4
        ; Exact mapped bytes EB 18: jmp 0x416bd4
        __asm _emit 0xeb
        __asm _emit 0x18
        add eax, esi
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 EA: je 0x416bad
        __asm _emit 0x74
        __asm _emit 0xea
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes EB F4: jmp 0x416bbc
        __asm _emit 0xeb
        __asm _emit 0xf4
        add eax, esi
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 05: je 0x416bd4
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes EB F4: jmp 0x416bc8
        __asm _emit 0xeb
        __asm _emit 0xf4
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        add eax, esi
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F6: jne 0x416bd4
        __asm _emit 0x75
        __asm _emit 0xf6
        test bl, 40h
        ; Exact mapped bytes 74 14: je 0x416bf7
        __asm _emit 0x74
        __asm _emit 0x14
        neg edx
        sbb edx, edx
        and edx, esi
        inc edx
        lea eax, [eax + edx*2]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        add eax, esi
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F6: jne 0x416bed
        __asm _emit 0x75
        __asm _emit 0xf6
        add eax, 3
        pop esi
        and al, 0fch
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
