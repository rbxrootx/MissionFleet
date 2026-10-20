// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470A4A .. +0x32B bytes.
extern "C" __declspec(naked) void FUN_00470a4a_00470A4A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ach
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3ach]
        mov ecx, 0ebh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 3ach], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 F8 A2 FD FF: call 0x44ad76
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 0D F2 FC FF: call 0x43fc98
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7C 07: jl 0x470a96
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov dword ptr [ebp - 388h], 0
        push 37ch
        push 0
        lea eax, [ebp - 384h]
        push eax
        ; Exact mapped bytes E8 BD 88 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x470ac8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 168h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 50: mov cx, word ptr [eax + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 0F 8D 7B 02 00 00: jge 0x470d5b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 37ch
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [edx]
        push eax
        lea ecx, [ebp - 384h]
        push ecx
        ; Exact mapped bytes E8 26 85 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 394h], 63h
        mov dword ptr [ebp - 398h], 0
        mov edx, dword ptr [ebp - 384h]
        mov dword ptr [ebp - 39ch], edx
        lea eax, [ebp - 394h]
        push eax
        lea ecx, [ebp - 398h]
        push ecx
        lea edx, [ebp - 39ch]
        push edx
        ; Exact mapped bytes E8 89 2C F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 9A 01 00 00: je 0x470cdc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x470c1f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 330h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 56h
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x470c1f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 37ch
        push 0
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 384h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        push ecx
        ; Exact mapped bytes E8 E5 87 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 384h]
        imul ecx, ecx, 37ch
        mov dword ptr [eax + ecx + 2e4h], 1
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 384h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        or edx, 0fffffffeh
        mov eax, dword ptr [ebp - 384h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + eax + 278h], edx
        mov edx, dword ptr [ebp - 384h]
        shl edx, 10h
        or edx, 4
        mov dword ptr [ebp - 38ch], edx
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 3ach]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 9B 1A 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x470cdc
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 384h]
        imul eax, eax, 37ch
        lea edi, [edx + eax + 224h]
        mov ecx, 0dfh
        lea esi, [ebp - 384h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 374h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 1eh
        ; Exact mapped bytes 76 0A: jbe 0x470c66
        __asm _emit 0x76
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 60 8E FD FF: call 0x449ac6
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 3a0h], 31h
        mov dword ptr [ebp - 3a4h], 0
        mov edx, dword ptr [ebp - 2ech]
        mov dword ptr [ebp - 3a8h], edx
        lea eax, [ebp - 3a0h]
        push eax
        lea ecx, [ebp - 3a4h]
        push ecx
        lea edx, [ebp - 3a8h]
        push edx
        ; Exact mapped bytes E8 20 2B F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2b
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x470cdc
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 2ech]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 374h]
        shr ecx, 0ch
        and ecx, 0fh
        mov edx, dword ptr [ebp - 384h]
        mov dword ptr [eax + ecx*4 + 270h], edx
        mov eax, dword ptr [ebp - 378h]
        and eax, 0ffffh
        cmp eax, 78h
        ; Exact mapped bytes 7E 5A: jle 0x470d46
        __asm _emit 0x7e
        __asm _emit 0x5a
        mov dword ptr [ebp - 388h], 1
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 384h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 C7 84 02 30 02 00 00 78 00: mov word ptr [edx + eax + 0x230], 0x78
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 384h]
        shl ecx, 10h
        or ecx, 4
        mov dword ptr [ebp - 390h], ecx
        mov edx, dword ptr [ebp - 390h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ach]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 6F 19 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 37ch
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes E9 64 FD FF FF: jmp 0x470abf
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        add esp, 3ach
        cmp ebp, esp
        ; Exact mapped bytes E8 71 7A 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
