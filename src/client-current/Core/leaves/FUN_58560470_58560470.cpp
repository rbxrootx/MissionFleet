// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58560470 .. +0x198 bytes.
extern "C" __declspec(naked) void FUN_58560470_58560470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        add eax, 158h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F0 7B F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585604a2
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 3ch]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 DF 75 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        add eax, 158h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D7 7C F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 0E 75 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x58560602
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 6B 75 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 94 7B F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585604fe
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 44h]
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 83 75 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 3A 75 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 20h], edx
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 73 7C F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 AA 74 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x585605fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 07 75 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 30 7B F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7b
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58560562
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 4ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 1F 75 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 D6 74 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 28h], ecx
        lea edx, [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0F 7C F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 46 74 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x585605f8
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 9B F4 FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 9C 74 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 0eh
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x585605f3
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA 63 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x63
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6F 74 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 BA F2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 55 74 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x58560553
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F2 FE FF FF: jmp 0x585604ef
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 91 FE FF FF: jmp 0x58560493
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
