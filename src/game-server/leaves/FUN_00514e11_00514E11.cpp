// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514E11 .. +0x2BB bytes.
extern "C" __declspec(naked) void FUN_00514e11_00514E11() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 52 B9 FF FF: call 0x510783
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x514e3c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 87 02 00 00: jmp 0x5150c3
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        push 1
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x514e6b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 25 C4 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0B: je 0x514e93
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FD C3 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x514eb8
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x514fbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C3 C3 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x514edf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x514fbc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x514ef8
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x514ed6
        __asm _emit 0xeb
        __asm _emit 0xde
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D2 C3 02 00: call 0x5412d8
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 06 B8 FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 585e68h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6A 61 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x514f3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 880h
        push 5c84b0h
        ; Exact mapped bytes E8 C7 FA 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514f3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x514f19
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x514f60
        __asm _emit 0x75
        __asm _emit 0x14
        push 881h
        push 5c84b0h
        ; Exact mapped bytes E8 A5 FA 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514f60
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x514f44
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 C8 06 02 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x514f98
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 ED C2 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 74 12: je 0x514fb7
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c890ch
        push 5c8948h
        ; Exact mapped bytes E8 61 AC FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x514ed6
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x5150c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BF C2 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x514fe3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x5150c0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 02: jne 0x514ffc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x514fda
        __asm _emit 0xeb
        __asm _emit 0xde
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CE C2 02 00: call 0x5412d8
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 02 B7 FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 585e68h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 66 60 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x515042
        __asm _emit 0x75
        __asm _emit 0x14
        push 89fh
        push 5c84b0h
        ; Exact mapped bytes E8 C3 F9 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x515042
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51501d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x515064
        __asm _emit 0x75
        __asm _emit 0x14
        push 8a0h
        push 5c84b0h
        ; Exact mapped bytes E8 A1 F9 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x515064
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x515048
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 C4 05 02 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x51509c
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E9 C1 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 74 12: je 0x5150bb
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c894ch
        push 5c8988h
        ; Exact mapped bytes E8 5D AB FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x514fda
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
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
