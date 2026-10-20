// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048097B .. +0x39A bytes.
extern "C" __declspec(naked) void FUN_0048097b_0048097B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 84 26 03 00 00: je 0x480cc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 42 9A F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 13 03 00 00: je 0x480cc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 2F 9A F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 36 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x36
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 BF 02 00 00: jne 0x480c92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 9A F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EE 35 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 A5 02 00 00: jne 0x480c92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 99 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 EE 99 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 88 02 00 00: jne 0x480c92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE 99 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 EC 00 00 00: mov dx, word ptr [ecx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 1
        ; Exact mapped bytes 0F 85 68 02 00 00: jne 0x480c92
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 30h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 24h], eax
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 12: je 0x480a6d
        __asm _emit 0x74
        __asm _emit 0x12
        push 2
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B6 85 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        cmp ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes 0F 8F E8 01 00 00: jg 0x480c6d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 24h]
        cmp edx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 0F 87 D0 01 00 00: ja 0x480c6d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        imul eax, eax, 6
        add eax, 2
        mov ecx, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ecx + 10h]
        ; Exact mapped bytes 74 11: je 0x480ac4
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 0F 85 A9 01 00 00: jne 0x480c6d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 38h], eax
        push 527h
        push 5c4328h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 38h]
        imul eax, eax, 6
        push eax
        ; Exact mapped bytes E8 48 C5 06 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 34h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 38h]
        imul ecx, ecx, 6
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes E8 09 85 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 8], 0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 80 D8 FF FF: call 0x47e3ae
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x480c3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 7C 04 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0xff
        push 2
        mov edx, dword ptr [ebp - 10h]
        add edx, 2ch
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 68 04 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 1ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 73 26: jae 0x480b98
        __asm _emit 0x73
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 91 D7 FF FF: call 0x47e30b
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020d09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 66 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 6C 01 00 00: jmp 0x480d04
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 18h]
        sub ecx, dword ptr [eax + 28h]
        test ecx, ecx
        ; Exact mapped bytes 7C 67: jl 0x480c15
        __asm _emit 0x7c
        __asm _emit 0x67
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 1ch]
        sub edx, dword ptr [ecx + 2ch]
        test edx, edx
        ; Exact mapped bytes 72 51: jb 0x480c15
        __asm _emit 0x72
        __asm _emit 0x51
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d07h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 66 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 A8 98 F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 7C 98 F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020d03h
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 1F 66 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x480c3b
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EE D6 FF FF: call 0x47e30b
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020d09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 65 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x480d04
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x480c6b
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C6 D6 FF FF: call 0x47e30b
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        push edx
        push 0
        push 80020d09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE 65 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x480d04
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x480c90
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 96 D6 FF FF: call 0x47e30b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 65 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 74: jmp 0x480d04
        __asm _emit 0xeb
        __asm _emit 0x74
        ; Exact mapped bytes EB 35: jmp 0x480cc7
        __asm _emit 0xeb
        __asm _emit 0x35
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d09h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 65 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d09h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 6F 65 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x480d04
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes EB 36: jmp 0x480cff
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 C8 D5 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 65 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x480d04
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 D1 7A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
