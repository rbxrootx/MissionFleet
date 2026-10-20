// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002FC10 .. +0x1E5 bytes.
extern "C" __declspec(naked) void FUN_1002fc10_1002FC10() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 2f4h]
        mov edi, dword ptr [esi + 0a020h]
        mov eax, dword ptr [ecx + 28h]
        cmp edi, eax
        ; Exact mapped bytes 74 6D: je 0x1002fc95
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 7E 0E: jle 0x1002fc38
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov edx, edi
        sub edx, eax
        cmp edx, 6
        ; Exact mapped bytes 7E 0E: jle 0x1002fc41
        __asm _emit 0x7e
        __asm _emit 0x0e
        lea edi, [eax + 6]
        ; Exact mapped bytes EB 09: jmp 0x1002fc41
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, eax
        sub edx, edi
        cmp edx, 6
        ; Exact mapped bytes 7F 4F: jg 0x1002fc90
        __asm _emit 0x7f
        __asm _emit 0x4f
        push edi
        ; Exact mapped bytes E8 D9 F4 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2f8h]
        push edi
        ; Exact mapped bytes E8 CD F4 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a01ch]
        test eax, eax
        ; Exact mapped bytes 0F 8E 90 01 00 00: jle 0x1002fdf1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0a018h]
        ; Exact mapped bytes 0F 8F 84 01 00 00: jg 0x1002fdf1
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2fch]
        mov ebx, 100h
        sub ebx, edi
        push ebx
        ; Exact mapped bytes E8 A0 F4 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 300h]
        push ebx
        ; Exact mapped bytes E8 94 F4 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        lea edi, [eax - 6]
        ; Exact mapped bytes EB AC: jmp 0x1002fc41
        __asm _emit 0xeb
        __asm _emit 0xac
        mov eax, dword ptr [esi + 0a014h]
        cmp eax, 3ch
        ; Exact mapped bytes 0F 8E 46 01 00 00: jle 0x1002fdea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a01ch]
        mov edx, dword ptr [esi + 0a018h]
        xor ebx, ebx
        cmp eax, edx
        mov dword ptr [esi + 0a014h], ebx
        ; Exact mapped bytes 0F 8D 12 01 00 00: jge 0x1002fdd2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a010h]
        cmp edx, 16h
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x1002fd67
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebx
        mov dword ptr [esi + 0a020h], ebx
        mov dword ptr [esi + 0a010h], 17h
        ; Exact mapped bytes 0F 8E F2 00 00 00: jle 0x1002fdd9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2fch]
        mov edx, dword ptr [eax + 54h]
        mov edi, dword ptr [eax + 50h]
        cmp edx, ebx
        ; Exact mapped bytes 74 08: je 0x1002fcff
        __asm _emit 0x74
        __asm _emit 0x08
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4A 0C: mov cx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x1002fd01
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add edi, 2
        mov ebx, 0fffeh
        cmp edi, ecx
        ; Exact mapped bytes 7F 06: jg 0x1002fd13
        __asm _emit 0x7f
        __asm _emit 0x06
        add dword ptr [eax + 50h], 2
        ; Exact mapped bytes EB 04: jmp 0x1002fd17
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 300h]
        mov ecx, dword ptr [eax + 54h]
        mov edi, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1002fd2f
        __asm _emit 0x74
        __asm _emit 0x08
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x1002fd31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add edi, 2
        cmp edi, edx
        ; Exact mapped bytes 7F 1A: jg 0x1002fd52
        __asm _emit 0x7f
        __asm _emit 0x1a
        mov ecx, dword ptr [eax + 50h]
        pop edi
        add ecx, 2
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [esi + 0a01ch]
        inc eax
        mov dword ptr [esi + 0a01ch], eax
        pop esi
        pop ebx
        ret
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a01ch]
        inc eax
        pop edi
        mov dword ptr [esi + 0a01ch], eax
        pop esi
        pop ebx
        ret
        cmp edx, 17h
        ; Exact mapped bytes 75 6D: jne 0x1002fdd9
        __asm _emit 0x75
        __asm _emit 0x6d
        mov dword ptr [esi + 0a020h], 100h
        mov dword ptr [esi + 0a010h], 16h
        mov eax, dword ptr [ecx + 54h]
        mov edi, dword ptr [ecx + 50h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1002fd92
        __asm _emit 0x74
        __asm _emit 0x08
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x1002fd94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add edi, 3
        mov ebx, 0fffeh
        cmp edi, edx
        ; Exact mapped bytes 7F 06: jg 0x1002fda6
        __asm _emit 0x7f
        __asm _emit 0x06
        add dword ptr [ecx + 50h], 2
        ; Exact mapped bytes EB 04: jmp 0x1002fdaa
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f8h]
        mov ecx, dword ptr [eax + 54h]
        mov edi, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x1002fdc8
        __asm _emit 0x74
        __asm _emit 0x0e
        xor edx, edx
        add edi, 3
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes E9 6C FF FF FF: jmp 0x1002fd34
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        add edi, 3
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x1002fd34
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0a01ch]
        pop edi
        inc eax
        mov dword ptr [esi + 0a01ch], eax
        pop esi
        pop ebx
        ret
        inc eax
        mov dword ptr [esi + 0a014h], eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}
