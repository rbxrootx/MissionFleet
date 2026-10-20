// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AC5E0 .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_586ac5e0_586AC5E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ac5fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D 45 01 00 00: jge 0x586ac74a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 0f8h]
        ; Exact mapped bytes E8 79 92 DE FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x92
        __asm _emit 0xde
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x586ac745
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0f8h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 83 DD FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x83
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D4 92 DD FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x586ac745
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0f8h]
        ; Exact mapped bytes E8 3A FE FF FF: call 0x586ac4a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x586ac743
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 83 DD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x83
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 0f8h]
        ; Exact mapped bytes E8 02 AB E2 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xab
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0D 4F 0A 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x4f
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 78: je 0x586ac71f
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E AA E2 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 01 E4 EB FF: call 0x5856aac0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 82 DD FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x82
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx edx, ax
        shl edx, 10h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 0f8h]
        ; Exact mapped bytes E8 AB AA E2 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 20h]
        or edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 6C E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 02 18 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 24: jmp 0x586ac743
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes E8 48 45 1A 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0x1a
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x586ac730
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 49 F0 FF: call 0x585b1130
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x49
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x586ac74a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A8 FE FF FF: jmp 0x586ac5f2
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 6C E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6c
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 74 54: je 0x586ac7ac
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 82 DD FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x82
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A2 91 DD FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x91
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x586ac7ac
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 6B E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        push 0
        push 0
        push -1
        mov edx, dword ptr [ebp - 3ch]
        push edx
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 01 18 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
