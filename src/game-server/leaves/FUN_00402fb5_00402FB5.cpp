// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402FB5 .. +0x32F bytes.
extern "C" __declspec(naked) void FUN_00402fb5_00402FB5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 5ch]
        mov ecx, 17h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 5ch], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 75 07: jne 0x402fe4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EE 02 00 00: jmp 0x4032d2
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 3ch], 1fh
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 44h], eax
        lea ecx, [ebp - 3ch]
        push ecx
        lea edx, [ebp - 40h]
        push edx
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 AE 07 00 00: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 B0 02 00 00: je 0x4032cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 1
        shl ecx, 2
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 10h], ecx
        ; Exact mapped bytes 0F 85 9C 02 00 00: jne 0x4032cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x403049
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 8D 78 02 00 00: jge 0x4032cd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov eax, dword ptr [ebp - 8]
        shl eax, 2
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 48h], 1fh
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 50h], eax
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 4ch]
        push edx
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 2D 07 00 00: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x4030c6
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4 + 270h]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 54h], 63h
        mov dword ptr [ebp - 58h], 0
        lea edx, [ebp - 54h]
        push edx
        lea eax, [ebp - 58h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 FB 07 00 00: call 0x4038e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 D8 01 00 00: je 0x4032c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 08 00 00: call 0x403990
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C4 01 00 00: je 0x4032c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x40314e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x4031f3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 51 08: mov ax, word ptr [ecx + edx*2 + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 38h]
        add ecx, eax
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 42 08: mov cx, word ptr [edx + eax*2 + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp + edx*4 - 30h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + eax*4 + 1]
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        xor ecx, 0aah
        mov edx, dword ptr [ebp - 34h]
        add edx, ecx
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + eax*4 + 1]
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        xor ecx, 0aah
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp + edx*4 - 24h], ecx
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x403145
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 37ch
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 11 30 02 00 00: mov ax, word ptr [ecx + edx + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 2
        mov edx, dword ptr [ebp - 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 4A 06: mov si, word ptr [edx + ecx*2 + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x4a
        __asm _emit 0x06
        xor esi, 0aah
        cmp eax, esi
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x4032c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 82 8F 00 00 00: jb 0x4032c8
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 2
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 4A 02: mov ax, word ptr [edx + ecx*2 + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x02
        xor eax, 0aah
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 89 84 0A 2C 02 00 00: mov word ptr [edx + ecx + 0x22c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        shl edx, 2
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 50 04: mov cx, word ptr [eax + edx*2 + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x50
        __asm _emit 0x04
        xor ecx, 0aah
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 89 8C 10 2E 02 00 00: mov word ptr [eax + edx + 0x22e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        shl eax, 2
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 41 06: mov dx, word ptr [ecx + eax*2 + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0x06
        xor edx, 0aah
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 89 94 01 30 02 00 00: mov word ptr [ecx + eax + 0x230], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 FD FF FF: jmp 0x403040
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        add esp, 5ch
        cmp ebp, esp
        ; Exact mapped bytes E8 02 55 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
