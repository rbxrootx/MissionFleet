// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875D9F0 .. +0x1AF bytes.
extern "C" __declspec(naked) void FUN_5875d9f0_5875D9F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x5875da07
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8F 01 00 00: jmp 0x5875db96
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 19: je 0x5875da2f
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x5875db2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 84 31 01 00 00: je 0x5875db5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 67 01 00 00: jmp 0x5875db96
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1B E5 DF FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe5
        __asm _emit 0xdf
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 72 00 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5f10h], 40000000h
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x5875db29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 8F D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x8f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 6F D2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 7E D3 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x7e
        __asm _emit 0xd3
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 8F D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E 7F D3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 8F D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 7C D3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7c
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 7D D3 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7d
        __asm _emit 0xd3
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 8E D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 7F D3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x7f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 1ch], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ea8h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 98 00 E1 FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6B: jmp 0x5875db96
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 25: je 0x5875db59
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5ecch], 1
        ; Exact mapped bytes 75 19: jne 0x5875db59
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 7ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E8 EC 00 00: call 0x5876c840
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3B: jmp 0x5875db96
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 79 D4 FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x79
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x5875db96
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        imul edx, dword ptr [ecx + 7ch], 64h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 E9 00 00: call 0x5876c4a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ebch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9B 1B E2 FF: call 0x5857f730
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1b
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
