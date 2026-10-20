// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C9950 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_587c9950() {
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
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x587c9a09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x587c998f
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x587c9988
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
        ; Exact mapped bytes 74 0B: je 0x587c998f
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x587c9972
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        sub eax, 203h
        ; Exact mapped bytes 74 53: je 0x587c99ec
        __asm _emit 0x74
        __asm _emit 0x53
        sub eax, 7
        ; Exact mapped bytes 75 6B: jne 0x587c9a09
        __asm _emit 0x75
        __asm _emit 0x6b
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 4
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 91 7B F6 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x7b
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 55: jne 0x587c9a09
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes 66 39 47 0A: cmp word ptr [edi + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes 7E 18: jle 0x587c99d3
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [esi + 60h]
        add eax, 3e8h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D5 FC FF FF: call 0x587c96a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        sub ecx, 3e8h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BC FC FF FF: call 0x587c96a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 4
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 43 7B F6 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7b
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x587c9a09
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 27 FC FF FF: call 0x587c9630
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
