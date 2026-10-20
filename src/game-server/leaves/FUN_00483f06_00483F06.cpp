// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00483F06 .. +0x539 bytes.
extern "C" __declspec(naked) void FUN_00483f06_00483F06() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3c4h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3c4h]
        mov ecx, 0f1h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 3c0h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 144h]
        push ecx
        mov edx, dword ptr [ebp - 3c0h]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 82 1F F8 FF: call 0x405ec8
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 38ch], eax
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 144h]
        push ecx
        mov edx, dword ptr [ebp - 3c0h]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 C6 1C F8 FF: call 0x405c2f
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x483f7e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 9D 04 00 00: je 0x484425
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 37ch
        lea ecx, [ebp - 388h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 3c0h]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 8B 1B F8 FF: call 0x405b34
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x1b
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 57 04 00 00: je 0x484408
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 39ch], 4
        mov dword ptr [ebp - 3a0h], 0
        mov ecx, dword ptr [ebp - 378h]
        and ecx, 0fh
        mov dword ptr [ebp - 3a4h], ecx
        lea edx, [ebp - 39ch]
        push edx
        lea eax, [ebp - 3a0h]
        push eax
        lea ecx, [ebp - 3a4h]
        push ecx
        ; Exact mapped bytes E8 D2 F7 F7 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x484084
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3a8h], 7dh
        mov dword ptr [ebp - 3ach], 1
        mov edx, dword ptr [ebp - 378h]
        shr edx, 4
        and edx, 0ffh
        mov dword ptr [ebp - 3b0h], edx
        lea eax, [ebp - 3a8h]
        push eax
        lea ecx, [ebp - 3ach]
        push ecx
        lea edx, [ebp - 3b0h]
        push edx
        ; Exact mapped bytes E8 84 F7 F7 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x484084
        __asm _emit 0x74
        __asm _emit 0x41
        mov dword ptr [ebp - 3b4h], 64h
        mov dword ptr [ebp - 3b8h], 0
        mov eax, dword ptr [ebp - 388h]
        mov dword ptr [ebp - 3bch], eax
        lea ecx, [ebp - 3b4h]
        push ecx
        lea edx, [ebp - 3b8h]
        push edx
        lea eax, [ebp - 3bch]
        push eax
        ; Exact mapped bytes E8 43 F7 F7 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x48408e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c8h], 1
        cmp dword ptr [ebp - 2c8h], 0
        ; Exact mapped bytes 0F 85 6D 03 00 00: jne 0x484408
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 10h
        or ecx, 4
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 388h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 22: je 0x4840d4
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 388h], eax
        mov dword ptr [ebp - 2f0h], 0ffffffffh
        mov ecx, dword ptr [ebp - 378h]
        and ch, 0fh
        mov dword ptr [ebp - 378h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        lea edi, [eax + ecx + 224h]
        mov ecx, 0dfh
        lea esi, [ebp - 388h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + ecx + 224h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        push eax
        mov ecx, dword ptr [ebp - 3c0h]
        mov edx, dword ptr [ecx + 218h]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca4h]
        ; Exact mapped bytes E8 79 10 FA FF: call 0x4251c6
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 3c4h], al
        mov ecx, dword ptr [ebp - 3c4h]
        and ecx, 0ffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 37ch
        and ecx, 1
        mov eax, dword ptr [eax + edx + 278h]
        and al, 0feh
        or eax, ecx
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 278h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*4 + 94h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 2C 02 00 00: mov cx, word ptr [edx + eax + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 390h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 08 2E 02 00 00: mov dx, word ptr [eax + ecx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 390h]
        add eax, edx
        mov dword ptr [ebp - 390h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 30 02 00 00: mov cx, word ptr [edx + eax + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 390h]
        add edx, ecx
        mov dword ptr [ebp - 390h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0ch]
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
        cmp dword ptr [ebp - 390h], eax
        ; Exact mapped bytes 0F 8E A0 01 00 00: jle 0x4843ec
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 30 02 00 00: mov cx, word ptr [edx + eax + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 390h]
        sub edx, ecx
        mov dword ptr [ebp - 390h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 C7 84 11 30 02 00 00 00 00: mov word ptr [ecx + edx + 0x230], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0ch]
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
        cmp dword ptr [ebp - 390h], eax
        ; Exact mapped bytes 0F 8E 32 01 00 00: jle 0x4843ec
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 4E 02 00 00: mov cx, word ptr [edx + eax + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 390h]
        sub edx, ecx
        mov dword ptr [ebp - 394h], edx
        mov dword ptr [ebp - 398h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4842ff
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 398h]
        add eax, 1
        mov dword ptr [ebp - 398h], eax
        cmp dword ptr [ebp - 398h], 2
        ; Exact mapped bytes 0F 8D E0 00 00 00: jge 0x4843ec
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 398h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 51 08: mov ax, word ptr [ecx + edx*2 + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x08
        sub eax, dword ptr [ebp - 394h]
        test eax, eax
        ; Exact mapped bytes 7E 51: jle 0x48438d
        __asm _emit 0x7e
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 398h]
        ; Exact mapped bytes 66 8B 44 51 08: mov ax, word ptr [ecx + edx*2 + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 2B 85 6C FC FF FF: sub ax, word ptr [ebp - 0x394]
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        lea ecx, [edx + ecx + 224h]
        mov edx, dword ptr [ebp - 398h]
        ; Exact mapped bytes 66 89 44 51 08: mov word ptr [ecx + edx*2 + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes EB 5F: jmp 0x4843ec
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov ecx, dword ptr [ebp - 398h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 48 08: mov dx, word ptr [eax + ecx*2 + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 394h]
        sub eax, edx
        mov dword ptr [ebp - 394h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 398h]
        ; Exact mapped bytes 66 C7 44 51 08 00 00: mov word ptr [ecx + edx*2 + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 FF FF FF: jmp 0x4842f0
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 AD E2 FF FF: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 3c0h]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 37 19 F8 FF: call 0x405d54
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 50 FB FF FF: jmp 0x483f75
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        add esp, 3c4h
        cmp ebp, esp
        ; Exact mapped bytes E8 A7 43 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
