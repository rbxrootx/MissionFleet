// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A450 .. +0x2ED bytes.
extern "C" __declspec(naked) void FUN_5879a450_5879A450() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891af8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0d8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov dword ptr [ebp - 48h], edi
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 40h], esi
        mov eax, dword ptr [edi + 8]
        mov dword ptr [ebp - 44h], esi
        and eax, 0ffh
        ; Exact mapped bytes 0F 84 1C 02 00 00: je 0x5879a6b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 7
        ; Exact mapped bytes 0F 85 46 02 00 00: jne 0x5879a6e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor edx, edx
        xor ecx, ecx
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [edi]
        mov dword ptr [ebp - 4], 2
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 3ch], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x5879a605
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0aaaaaaah
        ; Exact mapped bytes 0F 87 50 02 00 00: ja 0x5879a729
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 3ch]
        push eax
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 3A A4 D6 FF: call 0x58504920
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa4
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 30h]
        add esp, 8
        mov esi, dword ptr [ebp - 34h]
        mov ecx, eax
        mov dword ptr [ebp - 38h], eax
        cmp esi, edi
        ; Exact mapped bytes 74 4F: je 0x5879a547
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        lea ecx, [ecx + 18h]
        ; Exact mapped bytes 0F 11 41 E8: movups xmmword ptr [ecx - 0x18], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x41
        __asm _emit 0xe8
        mov dword ptr [ecx - 8], 0
        mov dword ptr [ecx - 4], 0
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        ; Exact mapped bytes 0F 11 41 E8: movups xmmword ptr [ecx - 0x18], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x41
        __asm _emit 0xe8
        ; Exact mapped bytes F3 0F 7E 46 10: movq xmm0, qword ptr [esi + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F D6 41 F8: movq qword ptr [ecx - 8], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x41
        __asm _emit 0xf8
        mov dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0fh
        mov byte ptr [esi], 0
        add esi, 18h
        cmp esi, edi
        ; Exact mapped bytes 75 BF: jne 0x5879a500
        __asm _emit 0x75
        __asm _emit 0xbf
        mov edi, dword ptr [ebp - 30h]
        mov esi, dword ptr [ebp - 34h]
        test esi, esi
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x5879a5e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, edi
        ; Exact mapped bytes 74 4E: je 0x5879a5a1
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 14h]
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2B: jbe 0x5879a586
        __asm _emit 0x76
        __asm _emit 0x2b
        mov eax, dword ptr [esi]
        inc ecx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 16: jb 0x5879a57c
        __asm _emit 0x72
        __asm _emit 0x16
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 B4 01 00 00: ja 0x5879a72e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        push ecx
        push eax
        ; Exact mapped bytes E8 B1 6A 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0fh
        mov byte ptr [esi], 0
        add esi, 18h
        cmp esi, edi
        ; Exact mapped bytes 75 B5: jne 0x5879a553
        __asm _emit 0x75
        __asm _emit 0xb5
        mov esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 2ch]
        mov eax, 2aaaaaabh
        sub ecx, esi
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea ecx, [eax + eax*2]
        mov eax, esi
        shl ecx, 3
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879a5db
        __asm _emit 0x72
        __asm _emit 0x14
        mov esi, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, esi
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 53 01 00 00: ja 0x5879a72e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        ; Exact mapped bytes E8 52 6A 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6a
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        add esp, 8
        mov ecx, dword ptr [ebp - 38h]
        mov edx, eax
        mov esi, dword ptr [ebp - 44h]
        mov edi, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], edx
        lea eax, [eax + eax*2]
        lea ecx, [ecx + eax*8]
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [edi]
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edi]
        mov dword ptr [ebp - 3ch], eax
        cmp eax, edi
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5879a6a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov eax, dword ptr [eax + 14h]
        shr eax, 2
        push eax
        push ecx
        lea ecx, [ebp - 28h]
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes E8 92 EB D0 FF: call 0x584a91d0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xeb
        __asm _emit 0xd0
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        mov byte ptr [ebp - 4], 3
        push eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 E2 A5 D6 FF: call 0x58504c30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov byte ptr [ebp - 4], 2
        cmp ecx, 0fh
        ; Exact mapped bytes 76 2C: jbe 0x5879a686
        __asm _emit 0x76
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 28h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 14: jb 0x5879a67c
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 0F 87 B2 00 00 00: ja 0x5879a72e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push edx
        ; Exact mapped bytes E8 B1 69 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 92 EC FF FF: call 0x58799320
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3ch]
        cmp eax, edi
        ; Exact mapped bytes 75 81: jne 0x5879a616
        __asm _emit 0x75
        __asm _emit 0x81
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], edx
        mov dword ptr [esi + 8], ecx
        ; Exact mapped bytes EB 21: jmp 0x5879a6c9
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], edx
        mov dword ptr [esi + 8], ecx
        ; Exact mapped bytes EB 14: jmp 0x5879a6c9
        __asm _emit 0xeb
        __asm _emit 0x14
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi + 8], 0
        mov eax, esi
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 6E 69 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0e4h]
        ; Exact mapped bytes E8 0B 2D D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x2d
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0e4h]
        mov dword ptr [ebp - 4], 0
        push 588b706ch
        push eax
        ; Exact mapped bytes E8 E3 9E D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0e4h]
        push eax
        ; Exact mapped bytes E8 E1 3A D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3a
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 07 06 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 12 D9 CE FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd9
        __asm _emit 0xce
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 9C 68 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}
