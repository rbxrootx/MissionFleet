// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433780 .. +0x209 bytes.
extern "C" __declspec(naked) void FUN_00433780_00433780() {
    __asm {
        sub esp, 1ch
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esp + 24h]
        push esi
        mov esi, dword ptr [ecx]
        mov dword ptr [esp + 1ch], ecx
        mov ecx, edx
        sub ecx, esi
        mov dword ptr [esp + 8], edx
        sar ecx, 1
        cmp eax, ecx
        ; Exact mapped bytes 76 0A: jbe 0x4337a9
        __asm _emit 0x76
        __asm _emit 0x0a
        or eax, 0ffffffffh
        pop esi
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        push ebx
        lea esi, [esi + eax*2]
        mov ebx, edx
        sub ebx, esi
        push ebp
        mov ebp, dword ptr [esp + 2ch]
        push edi
        sar ebx, 3
        test ebx, ebx
        lea edi, [ebp + ecx*2]
        ; Exact mapped bytes 0F 8E CC 00 00 00: jle 0x433896
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 16: mov dx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x16
        mov al, byte ptr [esp + 34h]
        ; Exact mapped bytes 66 89 54 24 18: mov word ptr [esp + 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        mov edx, dword ptr [esp + 18h]
        lea ecx, [esp + 34h]
        mov byte ptr [esp + 34h], al
        push ecx
        push edx
        push edi
        push ebp
        ; Exact mapped bytes E8 35 22 00 00: call 0x435a20
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp eax, edi
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x433966
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 02: mov ax, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x02
        add esi, 2
        mov cl, byte ptr [esp + 34h]
        ; Exact mapped bytes 66 89 44 24 1C: mov word ptr [esp + 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 1ch]
        lea edx, [esp + 30h]
        push edx
        push eax
        push edi
        push ebp
        mov byte ptr [esp + 40h], cl
        ; Exact mapped bytes E8 05 22 00 00: call 0x435a20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp eax, edi
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x433966
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 02: mov cx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x02
        add esi, 2
        mov dl, byte ptr [esp + 34h]
        ; Exact mapped bytes 66 89 4C 24 20: mov word ptr [esp + 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        mov ecx, dword ptr [esp + 20h]
        lea eax, [esp + 38h]
        push eax
        push ecx
        push edi
        push ebp
        mov byte ptr [esp + 48h], dl
        ; Exact mapped bytes E8 D5 21 00 00: call 0x435a20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp eax, edi
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x433966
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 02: mov dx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x02
        add esi, 2
        mov al, byte ptr [esp + 34h]
        ; Exact mapped bytes 66 89 54 24 24: mov word ptr [esp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        mov edx, dword ptr [esp + 24h]
        lea ecx, [esp + 11h]
        push ecx
        push edx
        push edi
        push ebp
        mov byte ptr [esp + 21h], al
        ; Exact mapped bytes E8 A5 21 00 00: call 0x435a20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp eax, edi
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x433966
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        dec ebx
        test ebx, ebx
        ; Exact mapped bytes 0F 8F 38 FF FF FF: jg 0x4337ca
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        mov eax, edx
        sub eax, esi
        sar eax, 1
        dec eax
        ; Exact mapped bytes 74 68: je 0x433907
        __asm _emit 0x74
        __asm _emit 0x68
        dec eax
        ; Exact mapped bytes 74 36: je 0x4338d8
        __asm _emit 0x74
        __asm _emit 0x36
        dec eax
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x433964
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        mov cl, byte ptr [esp + 34h]
        ; Exact mapped bytes 66 89 44 24 24: mov word ptr [esp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        mov eax, dword ptr [esp + 24h]
        lea edx, [esp + 12h]
        mov byte ptr [esp + 12h], cl
        push edx
        push eax
        push edi
        push ebp
        ; Exact mapped bytes E8 56 21 00 00: call 0x435a20
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp eax, edi
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x433966
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        mov dl, byte ptr [esp + 34h]
        ; Exact mapped bytes 66 89 4C 24 24: mov word ptr [esp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 24h]
        lea eax, [esp + 13h]
        mov byte ptr [esp + 13h], dl
        push eax
        push ecx
        push edi
        push ebp
        ; Exact mapped bytes E8 27 21 00 00: call 0x435a20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp eax, edi
        ; Exact mapped bytes 74 66: je 0x433966
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [esp + 14h]
        add esi, 2
        ; Exact mapped bytes 66 8B 1E: mov bx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1e
        mov ecx, edi
        sub ecx, ebp
        mov eax, ebp
        sar ecx, 3
        test ecx, ecx
        ; Exact mapped bytes 7E 25: jle 0x43393c
        __asm _emit 0x7e
        __asm _emit 0x25
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 74 44: je 0x433960
        __asm _emit 0x74
        __asm _emit 0x44
        add eax, 2
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 74 3C: je 0x433960
        __asm _emit 0x74
        __asm _emit 0x3c
        add eax, 2
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 74 34: je 0x433960
        __asm _emit 0x74
        __asm _emit 0x34
        add eax, 2
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 74 2C: je 0x433960
        __asm _emit 0x74
        __asm _emit 0x2c
        add eax, 2
        dec ecx
        test ecx, ecx
        ; Exact mapped bytes 7F DB: jg 0x433917
        __asm _emit 0x7f
        __asm _emit 0xdb
        mov ecx, edi
        sub ecx, eax
        sar ecx, 1
        dec ecx
        ; Exact mapped bytes 74 16: je 0x43395b
        __asm _emit 0x74
        __asm _emit 0x16
        dec ecx
        ; Exact mapped bytes 74 0B: je 0x433953
        __asm _emit 0x74
        __asm _emit 0x0b
        dec ecx
        ; Exact mapped bytes 75 1B: jne 0x433966
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 74 10: je 0x433960
        __asm _emit 0x74
        __asm _emit 0x10
        add eax, 2
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 74 08: je 0x433960
        __asm _emit 0x74
        __asm _emit 0x08
        add eax, 2
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 75 06: jne 0x433966
        __asm _emit 0x75
        __asm _emit 0x06
        cmp eax, edi
        ; Exact mapped bytes 74 02: je 0x433966
        __asm _emit 0x74
        __asm _emit 0x02
        mov esi, edx
        mov eax, dword ptr [esp + 28h]
        pop edi
        pop ebp
        pop ebx
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 74 0D: je 0x43397f
        __asm _emit 0x74
        __asm _emit 0x0d
        sub esi, dword ptr [eax]
        sar esi, 1
        mov eax, esi
        pop esi
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        or eax, 0ffffffffh
        pop esi
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
