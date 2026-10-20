// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003D620 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_1003d620_1003D620() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 1f00h
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 39 01 00 00: jne 0x1003d771
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 44 24 0C: movsx eax, word ptr [esp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        add eax, -7
        cmp eax, 6
        ; Exact mapped bytes 0F 87 28 01 00 00: ja 0x1003d771
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 78 D7 03 10: jmp dword ptr [eax*4 + 0x1003d778]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x10
        mov dword ptr [esp + 4], 4
        ; Exact mapped bytes EB 12: jmp 0x1003d66c
        __asm _emit 0xeb
        __asm _emit 0x12
        mov dword ptr [esp + 4], 0fh
        ; Exact mapped bytes EB 08: jmp 0x1003d66c
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 4], 0
        mov eax, dword ptr [esi + 30ch]
        push ebx
        push ebp
        push edi
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x1003d6ce
        __asm _emit 0x74
        __asm _emit 0x55
        xor ebp, ebp
        mov eax, dword ptr [esi + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x1003d6ce
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 00 68 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x1003d6ce
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 91 6E 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edi, [esi + 0ech]
        mov ebx, 6
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 7F 6E 0C 00: call 0x10104530
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x1003d6aa
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, esi
        ; Exact mapped bytes E8 C2 AE FF FF: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 FB AF FF FF: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, 3e8h
        ; Exact mapped bytes 7C AD: jl 0x1003d67b
        __asm _emit 0x7c
        __asm _emit 0xad
        mov ecx, dword ptr [esi + 0e8h]
        push 0
        ; Exact mapped bytes E8 75 70 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x70
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x1003d749
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [esp + 10h]
        xor ebp, ebp
        test eax, eax
        ; Exact mapped bytes 76 5A: jbe 0x1003d749
        __asm _emit 0x76
        __asm _emit 0x5a
        mov eax, dword ptr [esi + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x1003d749
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 0e8h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 86 67 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        dec edi
        cmp eax, edi
        ; Exact mapped bytes 7D 3A: jge 0x1003d749
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 96 6E 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        lea edi, [esi + 0ech]
        mov ebx, 6
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 84 6E 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x1003d725
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, esi
        ; Exact mapped bytes E8 47 AE FF FF: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 80 AF FF FF: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        inc ebp
        cmp ebp, eax
        ; Exact mapped bytes 72 A6: jb 0x1003d6ef
        __asm _emit 0x72
        __asm _emit 0xa6
        mov ecx, dword ptr [esp + 10h]
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 F7 6F 0C 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7C 24 18 0D: cmp word ptr [esp + 0x18], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x0d
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes 75 0D: jne 0x1003d771
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 1d4h]
        push 5
        ; Exact mapped bytes E8 6F 8A 0C 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x00
        pop esi
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
