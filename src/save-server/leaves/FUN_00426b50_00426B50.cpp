// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426B50 .. +0x58C bytes.
extern "C" __declspec(naked) void FUN_00426b50_00426B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 40ch]
        mov ecx, 103h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x426b83
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 43 05 00 00: jmp 0x4270c6
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 AF AD FD FF: call 0x401947
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 A9 AA FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 38ch], eax
        mov dword ptr [ebp - 390h], 0
        ; Exact mapped bytes EB 0F: jmp 0x426bd6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 390h]
        add ecx, 1
        mov dword ptr [ebp - 390h], ecx
        cmp dword ptr [ebp - 38ch], -1
        ; Exact mapped bytes 0F 84 DE 04 00 00: je 0x4270c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 390h], 64h
        ; Exact mapped bytes 0F 8D D1 04 00 00: jge 0x4270c1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 37ch
        lea edx, [ebp - 384h]
        push edx
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 F2 AC FD FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 82 04 00 00: je 0x42709e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3a0h], 4
        mov dword ptr [ebp - 3a4h], 0
        mov eax, dword ptr [ebp - 374h]
        and eax, 0fh
        mov dword ptr [ebp - 3a8h], eax
        lea ecx, [ebp - 3a0h]
        push ecx
        lea edx, [ebp - 3a4h]
        push edx
        lea eax, [ebp - 3a8h]
        push eax
        ; Exact mapped bytes E8 BD A6 FD FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x426cef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ach], 7dh
        mov dword ptr [ebp - 3b0h], 1
        mov ecx, dword ptr [ebp - 374h]
        shr ecx, 4
        and ecx, 0ffh
        mov dword ptr [ebp - 3b4h], ecx
        lea edx, [ebp - 3ach]
        push edx
        lea eax, [ebp - 3b0h]
        push eax
        lea ecx, [ebp - 3b4h]
        push ecx
        ; Exact mapped bytes E8 6F A6 FD FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x426cef
        __asm _emit 0x74
        __asm _emit 0x41
        mov dword ptr [ebp - 3b8h], 64h
        mov dword ptr [ebp - 3bch], 0
        mov edx, dword ptr [ebp - 384h]
        mov dword ptr [ebp - 3c0h], edx
        lea eax, [ebp - 3b8h]
        push eax
        lea ecx, [ebp - 3bch]
        push ecx
        lea edx, [ebp - 3c0h]
        push edx
        ; Exact mapped bytes E8 2E A6 FD FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x426cf9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c4h], 1
        cmp dword ptr [ebp - 2c4h], 0
        ; Exact mapped bytes 0F 85 98 03 00 00: jne 0x42709e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 390h]
        shl eax, 10h
        or al, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 384h]
        cmp ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes 74 25: je 0x426d47
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 390h]
        mov dword ptr [ebp - 384h], edx
        mov dword ptr [ebp - 2ech], 0ffffffffh
        mov eax, dword ptr [ebp - 374h]
        and ah, 0fh
        mov dword ptr [ebp - 374h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 390h]
        imul eax, eax, 37ch
        lea edi, [edx + eax + 224h]
        mov ecx, 0dfh
        lea esi, [ebp - 384h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 390h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp - 390h]
        mov dword ptr [edx + eax + 224h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 390h]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 A4 FD FF: call 0x401217
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 3c8h], al
        mov eax, dword ptr [ebp - 3c8h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [ebp - 390h]
        imul ecx, ecx, 37ch
        and eax, 1
        mov edx, dword ptr [edx + ecx + 278h]
        and edx, 0fffffffeh
        or edx, eax
        mov eax, dword ptr [ebp - 390h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [ecx + eax + 278h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 390h]
        mov edx, dword ptr [ebp - 38ch]
        mov dword ptr [eax + ecx*4 + 94h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 390h]
        imul edx, edx, 37ch
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 11 2C 02 00 00: mov ax, word ptr [ecx + edx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 394h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 390h]
        imul eax, eax, 37ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 2E 02 00 00: mov cx, word ptr [edx + eax + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 394h]
        add edx, ecx
        mov dword ptr [ebp - 394h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 390h]
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
        mov ecx, dword ptr [ebp - 394h]
        add ecx, eax
        mov dword ptr [ebp - 394h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 390h]
        imul ecx, ecx, 37ch
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 08 4E 02 00 00: mov dx, word ptr [eax + ecx + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 394h], edx
        ; Exact mapped bytes 0F 8E A0 01 00 00: jle 0x427050
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 390h]
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
        mov ecx, dword ptr [ebp - 394h]
        sub ecx, eax
        mov dword ptr [ebp - 394h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 390h]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 C7 84 08 30 02 00 00 00 00: mov word ptr [eax + ecx + 0x230], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 390h]
        imul ecx, ecx, 37ch
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 08 4E 02 00 00: mov dx, word ptr [eax + ecx + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 394h], edx
        ; Exact mapped bytes 0F 8E 32 01 00 00: jle 0x427050
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 390h]
        imul edx, edx, 37ch
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 11 4E 02 00 00: mov ax, word ptr [ecx + edx + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 394h]
        sub ecx, eax
        mov dword ptr [ebp - 398h], ecx
        mov dword ptr [ebp - 39ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x426f63
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 39ch]
        add edx, 1
        mov dword ptr [ebp - 39ch], edx
        cmp dword ptr [ebp - 39ch], 2
        ; Exact mapped bytes 0F 8D E0 00 00 00: jge 0x427050
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 390h]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov ecx, dword ptr [ebp - 39ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 48 08: mov dx, word ptr [eax + ecx*2 + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x08
        sub edx, dword ptr [ebp - 398h]
        test edx, edx
        ; Exact mapped bytes 7E 51: jle 0x426ff1
        __asm _emit 0x7e
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 390h]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes 66 8B 54 48 08: mov dx, word ptr [eax + ecx*2 + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 66 2B 95 68 FC FF FF: sub dx, word ptr [ebp - 0x398]
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 390h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        lea eax, [ecx + eax + 224h]
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes 66 89 54 48 08: mov word ptr [eax + ecx*2 + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes EB 5F: jmp 0x427050
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 390h]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        mov eax, dword ptr [ebp - 39ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 42 08: mov cx, word ptr [edx + eax*2 + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 398h]
        sub edx, ecx
        mov dword ptr [ebp - 398h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 390h]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes 66 C7 44 48 08 00 00: mov word ptr [eax + ecx*2 + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 FF FF FF: jmp 0x426f54
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 390h]
        mov byte ptr [edx], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 390h]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov edx, esp
        mov dword ptr [ebp - 3c4h], esp
        push ecx
        mov ecx, edx
        ; Exact mapped bytes E8 8D 54 0A 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 3cch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 51 A6 FD FF: call 0x4016ef
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 A4 9F FD FF: call 0x40105a
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 38ch], eax
        ; Exact mapped bytes E9 06 FB FF FF: jmp 0x426bc7
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 40ch
        cmp ebp, esp
        ; Exact mapped bytes E8 1A DD 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
