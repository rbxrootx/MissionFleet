// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C8560 .. +0x24A bytes.
extern "C" __declspec(naked) void FUN_587c8560() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x587c862d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x587c859f
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x587c8598
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x587c859f
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x587c8582
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x587c862d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        lea eax, [edi - 0dh]
        cmp eax, 61h
        ; Exact mapped bytes 77 55: ja 0x587c860c
        __asm _emit 0x77
        __asm _emit 0x55
        movzx edx, byte ptr [eax + 587c87e8h]
        ; Exact mapped bytes FF 24 95 AC 87 7C 58: jmp dword ptr [edx*4 + 0x587c87ac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0x87
        __asm _emit 0x7c
        __asm _emit 0x58
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB 3C: jmp 0x587c860c
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [esi + 0b0h], 0
        ; Exact mapped bytes 74 33: je 0x587c860c
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [esi + 0ach]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 27: je 0x587c860c
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 78h]
        mov eax, dword ptr [ecx + 64h]
        test eax, eax
        ; Exact mapped bytes 7E 1D: jle 0x587c860c
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov ecx, dword ptr [esi + 0b0h]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 18h]
        push 0f235h
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 F3 13 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 0
        ; Exact mapped bytes E8 21 ED 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB CB: jmp 0x587c860c
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov ecx, dword ptr [esi + 78h]
        mov eax, dword ptr [ecx + 64h]
        test eax, eax
        ; Exact mapped bytes 74 C1: je 0x587c860c
        __asm _emit 0x74
        __asm _emit 0xc1
        cmp eax, 0bebc200h
        ; Exact mapped bytes 77 BA: ja 0x587c860c
        __asm _emit 0x77
        __asm _emit 0xba
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        add edx, edx
        push edx
        ; Exact mapped bytes E8 00 ED 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB AA: jmp 0x587c860c
        __asm _emit 0xeb
        __asm _emit 0xaa
        mov eax, dword ptr [esi + 78h]
        cmp dword ptr [eax + 64h], 0bebc200h
        ; Exact mapped bytes 73 9E: jae 0x587c860c
        __asm _emit 0x73
        __asm _emit 0x9e
        mov ecx, eax
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 1]
        push eax
        ; Exact mapped bytes E8 E0 EC 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 8A: jmp 0x587c860c
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 7A FF FF FF: jae 0x587c860c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 2]
        push eax
        ; Exact mapped bytes E8 BE EC 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x587c860c
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 55 FF FF FF: jae 0x587c860c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 3]
        push eax
        ; Exact mapped bytes E8 99 EC 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x587c860c
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 30 FF FF FF: jae 0x587c860c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 4]
        push eax
        ; Exact mapped bytes E8 74 EC 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 1B FF FF FF: jmp 0x587c860c
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 0B FF FF FF: jae 0x587c860c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 5]
        push eax
        ; Exact mapped bytes E8 4F EC 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 F6 FE FF FF: jmp 0x587c860c
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 E6 FE FF FF: jae 0x587c860c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 6]
        push eax
        ; Exact mapped bytes E8 2A EC 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 D1 FE FF FF: jmp 0x587c860c
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 C1 FE FF FF: jae 0x587c860c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 7]
        push eax
        ; Exact mapped bytes E8 05 EC 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 AC FE FF FF: jmp 0x587c860c
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 9C FE FF FF: jae 0x587c860c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 8]
        push eax
        ; Exact mapped bytes E8 E0 EB 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xeb
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 87 FE FF FF: jmp 0x587c860c
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        cmp dword ptr [ecx + 64h], 0bebc200h
        ; Exact mapped bytes 0F 83 77 FE FF FF: jae 0x587c860c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ecx + 64h]
        lea edx, [eax + eax*4]
        lea eax, [edx + edx + 9]
        push eax
        ; Exact mapped bytes E8 BB EB 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xeb
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes E9 62 FE FF FF: jmp 0x587c860c
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
