// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004315D9 .. +0x2B7 bytes.
extern "C" __declspec(naked) void FUN_004315d9_004315D9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        ; Exact mapped bytes E8 CF 46 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [eax + 18h]
        not eax
        and dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 08: jne 0x4315f9
        __asm _emit 0x75
        __asm _emit 0x08
        push 1
        pop eax
        ; Exact mapped bytes E9 93 02 00 00: jmp 0x43188c
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        xor edi, edi
        push 28h
        lea eax, [ebp - 34h]
        push edi
        push eax
        xor esi, esi
        ; Exact mapped bytes E8 D4 D4 FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 4C C4 43 00: mov eax, dword ptr [0x43c44c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes E8 97 46 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        push 8
        test byte ptr [ebp + 8], 1
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes A1 C8 FB 44 00: mov eax, dword ptr [0x44fbc8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        pop ebx
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 0ch], ebx
        ; Exact mapped bytes 74 1E: je 0x431654
        __asm _emit 0x74
        __asm _emit 0x1e
        lea eax, [ebp - 34h]
        mov dword ptr [ebp - 34h], 0bh
        push eax
        mov dword ptr [ebp - 10h], 43dc1ch
        ; Exact mapped bytes E8 C7 E7 FF FF: call 0x42fe14
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x431654
        __asm _emit 0x74
        __asm _emit 0x03
        push 1
        pop esi
        test byte ptr [ebp + 8], 20h
        ; Exact mapped bytes 74 1B: je 0x431675
        __asm _emit 0x74
        __asm _emit 0x1b
        or byte ptr [ebp - 34h], 8bh
        lea eax, [ebp - 34h]
        push eax
        mov dword ptr [ebp - 10h], 43dc60h
        ; Exact mapped bytes E8 A6 E7 FF FF: call 0x42fe14
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x431675
        __asm _emit 0x74
        __asm _emit 0x03
        or esi, 20h
        test byte ptr [ebp + 8], 2
        ; Exact mapped bytes 74 21: je 0x43169c
        __asm _emit 0x74
        __asm _emit 0x21
        lea eax, [ebp - 34h]
        mov dword ptr [ebp - 34h], edi
        push eax
        mov dword ptr [ebp - 10h], 43dc28h
        mov dword ptr [ebp - 18h], 10h
        ; Exact mapped bytes E8 7F E7 FF FF: call 0x42fe14
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x43169c
        __asm _emit 0x74
        __asm _emit 0x03
        or esi, 2
        test byte ptr [ebp + 8], 4
        ; Exact mapped bytes 74 20: je 0x4316c2
        __asm _emit 0x74
        __asm _emit 0x20
        push 7a01h
        lea eax, [ebp - 34h]
        push 43dc3ch
        push eax
        mov dword ptr [ebp - 34h], ebx
        mov dword ptr [ebp - 18h], edi
        ; Exact mapped bytes E8 66 FE FF FF: call 0x431521
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x4316c2
        __asm _emit 0x74
        __asm _emit 0x03
        or esi, 4
        test byte ptr [ebp + 8], bl
        ; Exact mapped bytes 74 27: je 0x4316ee
        __asm _emit 0x74
        __asm _emit 0x27
        push 7a02h
        lea eax, [ebp - 34h]
        push 43dc4ch
        push eax
        mov dword ptr [ebp - 34h], 0bh
        mov dword ptr [ebp - 18h], 6
        ; Exact mapped bytes E8 39 FE FF FF: call 0x431521
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4316ee
        __asm _emit 0x74
        __asm _emit 0x02
        or esi, ebx
        test byte ptr [ebp + 8], 10h
        ; Exact mapped bytes 74 1D: je 0x431711
        __asm _emit 0x74
        __asm _emit 0x1d
        lea eax, [ebp - 0ch]
        push 3fc0h
        push eax
        mov dword ptr [ebp - 8], 0ffh
        ; Exact mapped bytes E8 59 FE FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        ; Exact mapped bytes 66 81 65 08 3F C0: and word ptr [ebp + 8], 0xc03f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x3f
        __asm _emit 0xc0
        test byte ptr [ebp + 8], 40h
        ; Exact mapped bytes 74 14: je 0x43172b
        __asm _emit 0x74
        __asm _emit 0x14
        lea eax, [ebp - 0ch]
        push 40h
        push eax
        mov dword ptr [ebp - 8], 10h
        ; Exact mapped bytes E8 39 FE FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        test byte ptr [ebp + 8], 80h
        ; Exact mapped bytes 74 17: je 0x431748
        __asm _emit 0x74
        __asm _emit 0x17
        lea eax, [ebp - 0ch]
        push 80h
        push eax
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes E8 1C FE FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov eax, 100h
        test dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 0F: je 0x431761
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        lea eax, [ebp - 0ch]
        push eax
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes E8 03 FE FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov eax, 200h
        test dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 13: je 0x43177e
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        lea eax, [ebp - 0ch]
        push eax
        mov dword ptr [ebp - 8], 20h
        ; Exact mapped bytes E8 E6 FD FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov ebx, 400h
        test dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 74 13: je 0x43179b
        __asm _emit 0x74
        __asm _emit 0x13
        lea eax, [ebp - 0ch]
        push ebx
        push eax
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E8 C9 FD FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov edi, 800h
        test dword ptr [ebp + 8], edi
        ; Exact mapped bytes 74 13: je 0x4317b8
        __asm _emit 0x74
        __asm _emit 0x13
        lea eax, [ebp - 0ch]
        push edi
        push eax
        mov dword ptr [ebp - 8], 40h
        ; Exact mapped bytes E8 AC FD FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov eax, 1000h
        test dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 13: je 0x4317d5
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        lea eax, [ebp - 0ch]
        push eax
        mov dword ptr [ebp - 8], 4
        ; Exact mapped bytes E8 8F FD FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov eax, 2000h
        test dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 13: je 0x4317f2
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        lea eax, [ebp - 0ch]
        push eax
        mov dword ptr [ebp - 8], 80h
        ; Exact mapped bytes E8 72 FD FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov eax, 4000h
        test dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 0F: je 0x43180b
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        lea eax, [ebp - 0ch]
        push eax
        mov dword ptr [ebp - 8], edi
        ; Exact mapped bytes E8 59 FD FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov eax, 8000h
        test dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 0F: je 0x431824
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        lea eax, [ebp - 0ch]
        push eax
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes E8 40 FD FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov eax, 10000h
        test dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 13: je 0x431841
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        lea eax, [ebp - 0ch]
        push eax
        mov dword ptr [ebp - 8], 200h
        ; Exact mapped bytes E8 23 FD FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov eax, 20000h
        test dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 13: je 0x43185e
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        lea eax, [ebp - 0ch]
        push eax
        mov dword ptr [ebp - 8], 100h
        ; Exact mapped bytes E8 06 FD FF FF: call 0x431562
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, 3fc0h
        or dword ptr [ecx + 18h], esi
        mov eax, dword ptr [ecx + 18h]
        mov edi, eax
        and edi, edx
        cmp edi, edx
        ; Exact mapped bytes 75 08: jne 0x43187c
        __asm _emit 0x75
        __asm _emit 0x08
        or al, 10h
        or esi, 10h
        mov dword ptr [ecx + 18h], eax
        mov eax, esi
        pop edi
        and eax, dword ptr [ebp + 8]
        pop esi
        pop ebx
        sub eax, dword ptr [ebp + 8]
        neg eax
        sbb eax, eax
        inc eax
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
