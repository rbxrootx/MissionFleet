// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557527 .. +0x2DC bytes.
extern "C" __declspec(naked) void FUN_00557527_00557527() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 68h
        mov dword ptr [ebp - 18h], eax
        push 7d3h
        push 5cfa08h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 14 3C FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 50 08 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 7d8h
        push 5cfa08h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 DA 3B FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x5575a0
        __asm _emit 0x75
        __asm _emit 0x14
        push 7d9h
        push 5cfa08h
        ; Exact mapped bytes E8 65 D4 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5575a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x557586
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 1
        ; Exact mapped bytes 74 15: je 0x5575d0
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 40h], 2
        ; Exact mapped bytes 74 2B: je 0x5575ec
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 40h], 3
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x55775c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 14 02 00 00: jmp 0x5577e4
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 F8 01 00 00: jmp 0x5577e4
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58a310h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 97 3A FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x557602
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E2 01 00 00: jmp 0x5577e4
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x557622
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x5577e4
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, 1
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 3
        ; Exact mapped bytes 0F 87 10 01 00 00: ja 0x557757
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 24 95 03 78 55 00: jmp dword ptr [edx*4 + 0x557803]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0x55
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 41h]
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x557662
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x557757
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 72 BA FF FF: call 0x5530e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 34h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x557683
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 36: jmp 0x5576b9
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 1E 21 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x21
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], esp
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 0A 99 F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x99
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        push 5cfc60h
        ; Exact mapped bytes FF 15 40 2A 5E 00: call dword ptr [0x5e2a40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 74 7C: je 0x55774e
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 74: je 0x55774e
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx + 41h]
        test eax, eax
        ; Exact mapped bytes 75 68: jne 0x55774e
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 18h]
        mov byte ptr [ecx + 41h], 1
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x55771f
        __asm _emit 0x74
        __asm _emit 0x14
        push 805h
        push 5cfa08h
        ; Exact mapped bytes E8 E6 D2 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55771f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C8: jne 0x5576ed
        __asm _emit 0x75
        __asm _emit 0xc8
        push 806h
        push 5cfa08h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 25 3A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        ; Exact mapped bytes EB 07: jmp 0x557757
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 18h]
        mov byte ptr [eax + 41h], 0
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x5577e4
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        lea eax, [ebp - 38h]
        push eax
        push 2
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5577a6
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 12: je 0x5577a6
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes FF 15 3C 2A 5E 00: call dword ptr [0x5e2a3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 13: je 0x5577bf
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 3ch], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x5577a6
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 13: je 0x5577de
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 38h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x5577c5
        __asm _emit 0x75
        __asm _emit 0xe1
        mov ecx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ecx]
        neg eax
        sbb eax, eax
        and eax, 7fffbffbh
        add eax, 80004005h
        lea esp, [ebp - 58h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
