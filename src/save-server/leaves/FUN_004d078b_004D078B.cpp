// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D078B .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_004d078b_004D078B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes E8 BD 80 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 52: je 0x4d07f7
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 75 32: jne 0x4d07e2
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes E8 AE FE 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        test edx, edx
        ; Exact mapped bytes 75 1A: jne 0x4d07d8
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 AD 12 06 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 75 09: jne 0x4d07d1
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes E8 1B A3 04 00: call 0x51aae8
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4d07d8
        __asm _emit 0x74
        __asm _emit 0x07
        push 0
        ; Exact mapped bytes E8 9D 8A 0B 00: call 0x589275
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        cmp edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 75 0A: jne 0x4d07f7
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 48h]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 1B: je 0x4d081b
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 30h]
        mov eax, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax + 30h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 12: je 0x4d0842
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4d0849
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 34h], 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 24h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x4d08bd
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes E8 10 F9 06 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 36 AD 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x4d08bd
        __asm _emit 0x74
        __asm _emit 0x43
        push 2ch
        push 0
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 39 50 F9 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 38h], 28h
        mov dword ptr [ebp - 34h], 1
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 38h]
        push ecx
        push 0
        push 405h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7C AD 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        push -4
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 CB EE FF FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push -4
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 2C: jne 0x4d0917
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 13: je 0x4d0917
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        push -4
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 38 F1 FF FF: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4d093c
        __asm _emit 0x74
        __asm _emit 0x14
        push 347h
        push 671a64h
        ; Exact mapped bytes E8 09 84 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d093c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4d091f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 92 AC 00 00 00: call dword ptr [edx + 0xac]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
