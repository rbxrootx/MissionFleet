// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043293D .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_0043293d_0043293D() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        xor eax, eax
        push esi
        ; Exact mapped bytes 66 81 7B 02 FF FF: cmp word ptr [ebx + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        sete al
        mov esi, eax
        ; Exact mapped bytes E8 91 FF FF FF: call 0x4328e7
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 7B 02 FF FF: cmp word ptr [ebx + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes 75 05: jne 0x432964
        __asm _emit 0x75
        __asm _emit 0x05
        mov ecx, dword ptr [ebx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x432966
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, dword ptr [ebx]
        test cl, 40h
        ; Exact mapped bytes 74 1A: je 0x432985
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        push edi
        neg ecx
        sbb ecx, ecx
        and ecx, 2
        inc ecx
        lea edi, [eax + ecx*2]
        push edi
        ; Exact mapped bytes E8 66 D0 FE FF: call 0x41f9e5
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        lea eax, [edi + eax*2 + 2]
        pop edi
        test esi, esi
        ; Exact mapped bytes 74 06: je 0x43298f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 8B 4B 10: mov cx, word ptr [ebx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x10
        ; Exact mapped bytes EB 04: jmp 0x432993
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 4B 08: mov cx, word ptr [ebx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 76 58: jbe 0x4329f0
        __asm _emit 0x76
        __asm _emit 0x58
        neg esi
        sbb esi, esi
        and esi, 6
        add esi, 12h
        movzx edx, cx
        add eax, 3
        and al, 0fch
        add eax, esi
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
        ; Exact mapped bytes 75 12: jne 0x4329c8
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
        ; Exact mapped bytes 75 14: jne 0x4329d7
        __asm _emit 0x75
        __asm _emit 0x14
        add eax, 4
        ; Exact mapped bytes EB 1E: jmp 0x4329e6
        __asm _emit 0xeb
        __asm _emit 0x1e
        add eax, 2
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 E9: je 0x4329b9
        __asm _emit 0x74
        __asm _emit 0xe9
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        inc eax
        inc eax
        ; Exact mapped bytes EB F4: jmp 0x4329cb
        __asm _emit 0xeb
        __asm _emit 0xf4
        add eax, 2
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 07: je 0x4329e6
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        inc eax
        inc eax
        ; Exact mapped bytes EB F4: jmp 0x4329da
        __asm _emit 0xeb
        __asm _emit 0xf4
        movzx ecx, word ptr [eax]
        dec edx
        lea eax, [eax + ecx + 2]
        ; Exact mapped bytes 75 B5: jne 0x4329a5
        __asm _emit 0x75
        __asm _emit 0xb5
        sub eax, ebx
        pop esi
        pop ebx
        ret
    }
}
