// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040AB92 .. +0xEEB bytes.
extern "C" __declspec(naked) void FUN_0040ab92_0040AB92() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579911h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 240h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 24ch]
        mov ecx, 90h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 248h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C F8 FF FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 248h]
        ; Exact mapped bytes 74 10: je 0x40abec
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 89 8D FF FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 7E 07: jle 0x40abf3
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 6B 0E 00 00: jmp 0x40ba5e
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 C2 EC 07 00: call 0x4898c4
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 52 0E 00 00: je 0x40ba5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 800h
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 76 62 00 00: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 1e4h], 0
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 3A 8D FF FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 26: jne 0x40ac61
        __asm _emit 0x75
        __asm _emit 0x26
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 96 DB 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 248h]
        mov dword ptr [ecx + 0cb8h], eax
        mov dl, byte ptr [ebp - 14h]
        and dl, 0feh
        mov byte ptr [ebp - 14h], dl
        ; Exact mapped bytes EB 08: jmp 0x40ac69
        __asm _emit 0xeb
        __asm _emit 0x08
        mov al, byte ptr [ebp - 14h]
        or al, 1
        mov byte ptr [ebp - 14h], al
        mov cl, byte ptr [ebp - 10h]
        and cl, 0f0h
        mov byte ptr [ebp - 10h], cl
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 F3 8C FF FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        mov dl, byte ptr [ebp - 24ch]
        and dl, 0fh
        shl dl, 4
        mov al, byte ptr [ebp - 10h]
        and al, 0fh
        or al, dl
        mov byte ptr [ebp - 10h], al
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes 66 8B 91 08 01 00 00: mov dx, word ptr [ecx + 0x108]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 E2 FF 0F: and dx, 0xfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 45 EE: mov ax, word ptr [ebp - 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xee
        ; Exact mapped bytes 66 25 00 F0: and ax, 0xf000
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0xf0
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        push 0
        mov ecx, dword ptr [ebp - 248h]
        add ecx, 0cach
        ; Exact mapped bytes E8 2B 33 0E 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x33
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 5a0c68h
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 F7 DA 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 218h], edx
        mov esi, esp
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 168h]
        push ecx
        push 5a0c6ch
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 C6 DA 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 218h]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 0F 84 32 05 00 00: je 0x40b25f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov edx, dword ptr [edx + ecx + 16e4ch]
        mov dword ptr [ebp - 220h], edx
        mov dword ptr [ebp - 22ch], 63h
        mov dword ptr [ebp - 230h], 0
        mov eax, dword ptr [ebp - 220h]
        mov dword ptr [ebp - 234h], eax
        lea ecx, [ebp - 22ch]
        push ecx
        lea edx, [ebp - 230h]
        push edx
        lea eax, [ebp - 234h]
        push eax
        ; Exact mapped bytes E8 2E 8A FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 3A 04 00 00: je 0x40b1d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 220h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 0ah
        ; Exact mapped bytes 72 36: jb 0x40ae00
        __asm _emit 0x72
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 220h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 11h
        ; Exact mapped bytes 73 09: jae 0x40ae00
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 28h], 0
        ; Exact mapped bytes E9 D5 03 00 00: jmp 0x40b1d5
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 220h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 0ah
        ; Exact mapped bytes 72 36: jb 0x40ae62
        __asm _emit 0x72
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 220h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 18h
        ; Exact mapped bytes 73 09: jae 0x40ae62
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 28h], 1
        ; Exact mapped bytes E9 73 03 00 00: jmp 0x40b1d5
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 220h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 18h
        ; Exact mapped bytes 72 35: jb 0x40aec4
        __asm _emit 0x72
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 220h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 1fh
        ; Exact mapped bytes 73 09: jae 0x40aec4
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 28h], 2
        ; Exact mapped bytes E9 11 03 00 00: jmp 0x40b1d5
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 220h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 1fh
        ; Exact mapped bytes 72 36: jb 0x40af27
        __asm _emit 0x72
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 220h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 26h
        ; Exact mapped bytes 73 09: jae 0x40af27
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 28h], 3
        ; Exact mapped bytes E9 AE 02 00 00: jmp 0x40b1d5
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 220h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 26h
        ; Exact mapped bytes 72 36: jb 0x40af89
        __asm _emit 0x72
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 220h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 2fh
        ; Exact mapped bytes 73 09: jae 0x40af89
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 28h], 4
        ; Exact mapped bytes E9 4C 02 00 00: jmp 0x40b1d5
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 220h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 2fh
        ; Exact mapped bytes 72 35: jb 0x40afeb
        __asm _emit 0x72
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 220h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 38h
        ; Exact mapped bytes 73 09: jae 0x40afeb
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 28h], 5
        ; Exact mapped bytes E9 EA 01 00 00: jmp 0x40b1d5
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 220h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 38h
        ; Exact mapped bytes 72 36: jb 0x40b04e
        __asm _emit 0x72
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 220h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 41h
        ; Exact mapped bytes 73 09: jae 0x40b04e
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 28h], 6
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x40b1d5
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 220h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 41h
        ; Exact mapped bytes 72 36: jb 0x40b0b0
        __asm _emit 0x72
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 220h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 4ch
        ; Exact mapped bytes 73 09: jae 0x40b0b0
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 28h], 7
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x40b1d5
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 220h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 4ch
        ; Exact mapped bytes 72 35: jb 0x40b112
        __asm _emit 0x72
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 220h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 57h
        ; Exact mapped bytes 73 09: jae 0x40b112
        __asm _emit 0x73
        __asm _emit 0x09
        mov byte ptr [ebp - 28h], 8
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x40b1d5
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 220h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 57h
        ; Exact mapped bytes 72 33: jb 0x40b172
        __asm _emit 0x72
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 220h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 62h
        ; Exact mapped bytes 73 06: jae 0x40b172
        __asm _emit 0x73
        __asm _emit 0x06
        mov byte ptr [ebp - 28h], 9
        ; Exact mapped bytes EB 63: jmp 0x40b1d5
        __asm _emit 0xeb
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 220h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 62h
        ; Exact mapped bytes 72 33: jb 0x40b1d1
        __asm _emit 0x72
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 220h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 7dh
        ; Exact mapped bytes 73 06: jae 0x40b1d1
        __asm _emit 0x73
        __asm _emit 0x06
        mov byte ptr [ebp - 28h], 0ah
        ; Exact mapped bytes EB 04: jmp 0x40b1d5
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 04: jmp 0x40b1db
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 28h], 0
        mov dword ptr [ebp - 21ch], 0
        mov edx, dword ptr [ebp - 218h]
        cmp dword ptr [edx + 16ch], -1
        ; Exact mapped bytes 74 69: je 0x40b25d
        __asm _emit 0x74
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16c04h]
        push ecx
        mov edx, dword ptr [ebp - 248h]
        mov eax, dword ptr [edx + 0c7ch]
        mov ecx, dword ptr [eax + 40cc8h]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 B5 E8 01 00: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 21ch], eax
        cmp dword ptr [ebp - 21ch], 0
        ; Exact mapped bytes 74 13: je 0x40b259
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 1F 00: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0x00
        mov byte ptr [ebp - 27h], al
        ; Exact mapped bytes EB 04: jmp 0x40b25d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 27h], 0
        ; Exact mapped bytes EB 08: jmp 0x40b267
        __asm _emit 0xeb
        __asm _emit 0x08
        mov byte ptr [ebp - 28h], 0
        mov byte ptr [ebp - 27h], 0
        push 16h
        lea ecx, [ebp - 24h]
        push ecx
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 4E 5D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 7D 60 FF FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        cmp dword ptr [ebp - 218h], 0
        ; Exact mapped bytes 0F 84 0C 07 00 00: je 0x40b9a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        push eax
        push 5a0c70h
        mov ecx, dword ptr [ebp - 1e4h]
        imul ecx, ecx, 1ah
        lea edx, [ebp + ecx - 1e0h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 15 D5 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 218h]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 0F 84 00 06 00 00: je 0x40b8de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov edx, dword ptr [edx + ecx + 16e4ch]
        mov dword ptr [ebp - 228h], edx
        mov dword ptr [ebp - 238h], 63h
        mov dword ptr [ebp - 23ch], 0
        mov eax, dword ptr [ebp - 228h]
        mov dword ptr [ebp - 240h], eax
        lea ecx, [ebp - 238h]
        push ecx
        lea edx, [ebp - 23ch]
        push edx
        lea eax, [ebp - 240h]
        push eax
        ; Exact mapped bytes E8 7D 84 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 DD 04 00 00: je 0x40b82b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 0ah
        ; Exact mapped bytes 72 43: jb 0x40b3be
        __asm _emit 0x72
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 11h
        ; Exact mapped bytes 73 16: jae 0x40b3be
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 0
        ; Exact mapped bytes E9 6B 04 00 00: jmp 0x40b829
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 0ah
        ; Exact mapped bytes 72 43: jb 0x40b42e
        __asm _emit 0x72
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 18h
        ; Exact mapped bytes 73 16: jae 0x40b42e
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 1
        ; Exact mapped bytes E9 FB 03 00 00: jmp 0x40b829
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 18h
        ; Exact mapped bytes 72 43: jb 0x40b49e
        __asm _emit 0x72
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 1fh
        ; Exact mapped bytes 73 16: jae 0x40b49e
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 2
        ; Exact mapped bytes E9 8B 03 00 00: jmp 0x40b829
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 1fh
        ; Exact mapped bytes 72 43: jb 0x40b50e
        __asm _emit 0x72
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 26h
        ; Exact mapped bytes 73 16: jae 0x40b50e
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 3
        ; Exact mapped bytes E9 1B 03 00 00: jmp 0x40b829
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 26h
        ; Exact mapped bytes 72 43: jb 0x40b57e
        __asm _emit 0x72
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 2fh
        ; Exact mapped bytes 73 16: jae 0x40b57e
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 4
        ; Exact mapped bytes E9 AB 02 00 00: jmp 0x40b829
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 2fh
        ; Exact mapped bytes 72 43: jb 0x40b5ee
        __asm _emit 0x72
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 38h
        ; Exact mapped bytes 73 16: jae 0x40b5ee
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 5
        ; Exact mapped bytes E9 3B 02 00 00: jmp 0x40b829
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 38h
        ; Exact mapped bytes 72 43: jb 0x40b65e
        __asm _emit 0x72
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 41h
        ; Exact mapped bytes 73 16: jae 0x40b65e
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 6
        ; Exact mapped bytes E9 CB 01 00 00: jmp 0x40b829
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 41h
        ; Exact mapped bytes 72 43: jb 0x40b6ce
        __asm _emit 0x72
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 4ch
        ; Exact mapped bytes 73 16: jae 0x40b6ce
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 7
        ; Exact mapped bytes E9 5B 01 00 00: jmp 0x40b829
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 4ch
        ; Exact mapped bytes 72 43: jb 0x40b73e
        __asm _emit 0x72
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 57h
        ; Exact mapped bytes 73 16: jae 0x40b73e
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 8
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x40b829
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 57h
        ; Exact mapped bytes 72 40: jb 0x40b7ab
        __asm _emit 0x72
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 62h
        ; Exact mapped bytes 73 13: jae 0x40b7ab
        __asm _emit 0x73
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 9
        ; Exact mapped bytes EB 7E: jmp 0x40b829
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 228h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 62h
        ; Exact mapped bytes 72 40: jb 0x40b818
        __asm _emit 0x72
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 228h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 7dh
        ; Exact mapped bytes 73 13: jae 0x40b818
        __asm _emit 0x73
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c8h], 0ah
        ; Exact mapped bytes EB 11: jmp 0x40b829
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 1e4h]
        imul ecx, ecx, 1ah
        mov byte ptr [ebp + ecx - 1c8h], 0
        ; Exact mapped bytes EB 11: jmp 0x40b83c
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 1e4h]
        imul edx, edx, 1ah
        mov byte ptr [ebp + edx - 1c8h], 0
        mov dword ptr [ebp - 224h], 0
        mov eax, dword ptr [ebp - 218h]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x40b8dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16c04h]
        push edx
        mov eax, dword ptr [ebp - 248h]
        mov ecx, dword ptr [eax + 0c7ch]
        mov edx, dword ptr [ecx + 40cc8h]
        mov ecx, dword ptr [edx + 0ca0h]
        ; Exact mapped bytes E8 50 E2 01 00: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 224h], eax
        cmp dword ptr [ebp - 224h], 0
        ; Exact mapped bytes 74 20: je 0x40b8cb
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 224h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 1e4h]
        imul edx, edx, 1ah
        mov byte ptr [ebp + edx - 1c7h], cl
        ; Exact mapped bytes EB 11: jmp 0x40b8dc
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        mov byte ptr [ebp + eax - 1c7h], 0
        ; Exact mapped bytes EB 22: jmp 0x40b900
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 1e4h]
        imul ecx, ecx, 1ah
        mov byte ptr [ebp + ecx - 1c8h], 0
        mov edx, dword ptr [ebp - 1e4h]
        imul edx, edx, 1ah
        mov byte ptr [ebp + edx - 1c7h], 0
        push 1ah
        mov eax, dword ptr [ebp - 1e4h]
        imul eax, eax, 1ah
        lea ecx, [ebp + eax - 1e0h]
        push ecx
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 A8 56 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 218h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 47: je 0x40b970
        __asm _emit 0x74
        __asm _emit 0x47
        mov dword ptr [ebp - 210h], 5000000h
        mov dword ptr [ebp - 20ch], 1
        mov eax, dword ptr [ebp - 210h]
        or eax, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 214h], eax
        push 0
        push 1ah
        lea ecx, [ebp - 40h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 214h]
        push edx
        push 80020114h
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 C2 B8 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 65 59 FF FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov eax, dword ptr [ebp - 1e4h]
        mov ecx, dword ptr [ebp - 1e4h]
        add ecx, 1
        mov dword ptr [ebp - 1e4h], ecx
        cmp eax, 64h
        ; Exact mapped bytes 7E 02: jle 0x40b99d
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x40b9a2
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 E7 F8 FF FF: jmp 0x40b289
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 248h]
        mov eax, dword ptr [edx + 0ca4h]
        shl eax, 10h
        mov dword ptr [ebp - 210h], eax
        mov ecx, dword ptr [ebp - 248h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 20ch], edx
        mov eax, dword ptr [ebp - 210h]
        or eax, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 214h], eax
        push 0
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 A8 EA FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 7C EA FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 0
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        push 80020117h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 B8 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 248h]
        add ecx, 0c90h
        ; Exact mapped bytes E8 B4 E9 FF FF: call 0x40a3d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x40ba38
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 248h]
        add ecx, 0c90h
        ; Exact mapped bytes E8 D8 7E FF FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 EC 54 00 00: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 244h]
        ; Exact mapped bytes EB 02: jmp 0x40ba5e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 24ch
        cmp ebp, esp
        ; Exact mapped bytes E8 69 CD 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
