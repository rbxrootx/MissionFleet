// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CB710 .. +0x312 bytes.
extern "C" __declspec(naked) void FUN_588cb710() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        mov edi, 2
        mov esi, ecx
        cmp eax, edi
        ; Exact mapped bytes 0F 85 BD 02 00 00: jne 0x588cb9e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 244h]
        mov al, byte ptr [ecx + 24h]
        mov edx, dword ptr [esp + 10h]
        and al, 0fh
        cmp al, 0fh
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x588cb821
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24ch]
        cmp edx, eax
        ; Exact mapped bytes 75 53: jne 0x588cb79a
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588cb756
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x588cb758
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 23ch]
        push eax
        ; Exact mapped bytes E8 7C 65 E6 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x65
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [esi + 244h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ecx, [esi + 260h]
        mov edx, 0fh
        mov edi, edi
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x588cb78a
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 EE: jne 0x588cb780
        __asm _emit 0x75
        __asm _emit 0xee
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edx, dword ptr [esi + 250h]
        ; Exact mapped bytes 75 3C: jne 0x588cb7de
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, eax
        ; Exact mapped bytes E8 C7 C9 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 69 02 00 00: jle 0x588cba1a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 24ch]
        cmp dword ptr [ecx + 88h], 9
        ; Exact mapped bytes 0F 8E 56 02 00 00: jle 0x588cba1a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A7 C9 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 24ch]
        dec eax
        push eax
        ; Exact mapped bytes E8 BA C9 03 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        cmp edx, dword ptr [esi + 254h]
        ; Exact mapped bytes 75 0F: jne 0x588cb7f7
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, esi
        ; Exact mapped bytes E8 E1 CE FF FF: call 0x588c86d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E8 C4 5D E6 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x5d
        __asm _emit 0xe6
        __asm _emit 0xff
        lea ecx, [esi + 260h]
        mov edx, 0fh
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x588cb811
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 EE: jne 0x588cb807
        __asm _emit 0x75
        __asm _emit 0xee
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edx, dword ptr [esi + 2a0h]
        ; Exact mapped bytes 75 1E: jne 0x588cb847
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, esi
        ; Exact mapped bytes E8 60 D9 FF FF: call 0x588c9190
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 E2 01 00 00: jne 0x588cba1a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 11 CF FF FF: call 0x588c8750
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edx, dword ptr [esi + 2a4h]
        ; Exact mapped bytes 74 E9: je 0x588cb838
        __asm _emit 0x74
        __asm _emit 0xe9
        cmp edx, dword ptr [esi + 240h]
        ; Exact mapped bytes 75 38: jne 0x588cb88f
        __asm _emit 0x75
        __asm _emit 0x38
        push 0fh
        ; Exact mapped bytes E8 62 5D E6 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5d
        __asm _emit 0xe6
        __asm _emit 0xff
        add esi, 260h
        mov ecx, 0fh
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x588cb87f
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add esi, 4
        sub ecx, 1
        ; Exact mapped bytes 75 E9: jne 0x588cb870
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edx, dword ptr [esi + 220h]
        ; Exact mapped bytes 75 1B: jne 0x588cb8b2
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 0a4h]
        xor eax, dword ptr [esp + 18h]
        pop edi
        and eax, 1
        xor dword ptr [esi + 0a4h], eax
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edx, dword ptr [esi + 224h]
        ; Exact mapped bytes 75 1D: jne 0x588cb8d7
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [esp + 18h]
        lea edx, [ecx + ecx]
        xor edx, dword ptr [esi + 0a4h]
        and edx, edi
        xor dword ptr [esi + 0a4h], edx
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edx, dword ptr [esi + 238h]
        ; Exact mapped bytes 75 61: jne 0x588cb940
        __asm _emit 0x75
        __asm _emit 0x61
        test byte ptr [esi + 0a4h], 8
        mov ecx, esi
        ; Exact mapped bytes 74 2B: je 0x588cb915
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1
        push 8
        ; Exact mapped bytes E8 5D D9 FF FF: call 0x588c9250
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 19ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 1f8h]
        push 1
        ; Exact mapped bytes E8 33 EC E6 FF: call 0x5873a540
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xec
        __asm _emit 0xe6
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 8
        ; Exact mapped bytes E8 32 D9 FF FF: call 0x588c9250
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 19ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 1f8h]
        push 0
        ; Exact mapped bytes E8 08 EC E6 FF: call 0x5873a540
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0xe6
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp edx, dword ptr [esi + 17ch]
        ; Exact mapped bytes 75 0F: jne 0x588cb957
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, esi
        ; Exact mapped bytes E8 01 D1 FF FF: call 0x588c8a50
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 18h]
        push ebx
        xor edi, edi
        lea ebx, [esi + 1e4h]
        cmp edx, dword ptr [ebx - 10h]
        ; Exact mapped bytes 75 04: jne 0x588cb96d
        __asm _emit 0x75
        __asm _emit 0x04
        push 1
        ; Exact mapped bytes EB 06: jmp 0x588cb973
        __asm _emit 0xeb
        __asm _emit 0x06
        cmp edx, dword ptr [ebx]
        ; Exact mapped bytes 75 0F: jne 0x588cb980
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0
        push ebp
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 54 D0 FF FF: call 0x588c89d0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        inc edi
        add ebx, 4
        cmp edi, 4
        ; Exact mapped bytes 7C DB: jl 0x588cb964
        __asm _emit 0x7c
        __asm _emit 0xdb
        xor edi, edi
        lea ebx, [esi + 260h]
        lea ebp, [edi + 5]
        mov eax, dword ptr [ebx]
        cmp eax, edx
        ; Exact mapped bytes 75 1F: jne 0x588cb9b9
        __asm _emit 0x75
        __asm _emit 0x1f
        push 1
        push edi
        mov ecx, esi
        mov dword ptr [esi + 29ch], eax
        ; Exact mapped bytes E8 A6 D8 FF FF: call 0x588c9250
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x588cb9c4
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes EB 0B: jmp 0x588cb9c4
        __asm _emit 0xeb
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x588cb9c4
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [eax + 50h], 1
        inc edi
        add ebx, 4
        cmp edi, 0fh
        ; Exact mapped bytes 7C C7: jl 0x588cb994
        __asm _emit 0x7c
        __asm _emit 0xc7
        mov esi, dword ptr [esi + 29ch]
        pop ebx
        test esi, esi
        ; Exact mapped bytes 74 42: je 0x588cba1a
        __asm _emit 0x74
        __asm _emit 0x42
        pop edi
        mov dword ptr [esi + 50h], ebp
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0f233h
        ; Exact mapped bytes 75 30: jne 0x588cba1a
        __asm _emit 0x75
        __asm _emit 0x30
        movzx eax, word ptr [esi + 60h]
        mov ecx, dword ptr [eax*4 + 58a24860h]
        ; Exact mapped bytes 66 83 79 02 00: cmp word ptr [ecx + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x588cba1a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        movzx eax, word ptr [esi + 62h]
        movzx ecx, word ptr [esi + 60h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 DC EE FF: call 0x587b9690
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdc
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
