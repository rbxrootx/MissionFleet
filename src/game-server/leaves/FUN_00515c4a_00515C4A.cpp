// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515C4A .. +0x2A5 bytes.
extern "C" __declspec(naked) void FUN_00515c4a_00515C4A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        push 15bh
        push 5c8b74h
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 F7 54 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x515c86
        __asm _emit 0x75
        __asm _emit 0x14
        push 15ch
        push 5c8b74h
        ; Exact mapped bytes E8 7F ED 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x515c86
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x515c69
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 EF D2 FD FF: call 0x4f2f87
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x515ca6
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x515ee6
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 BD 5E 02 00: call 0x53bb74
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 75 16: jne 0x515cdd
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [ebp - 4], 201h
        ; Exact mapped bytes 74 0D: je 0x515cdd
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 4], 202h
        ; Exact mapped bytes 0F 85 AF 01 00 00: jne 0x515e8c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 200h
        ; Exact mapped bytes 72 09: jb 0x515cef
        __asm _emit 0x72
        __asm _emit 0x09
        cmp dword ptr [ebp - 4], 209h
        ; Exact mapped bytes 76 1A: jbe 0x515d09
        __asm _emit 0x76
        __asm _emit 0x1a
        cmp dword ptr [ebp - 4], 0a0h
        ; Exact mapped bytes 0F 82 90 01 00 00: jb 0x515e8c
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0a9h
        ; Exact mapped bytes 0F 87 83 01 00 00: ja 0x515e8c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 47 F2 02 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [edx + 14h]
        push ecx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 66 FC 01 00: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 13 65 02 00: call 0x53c243
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        push 2ch
        push 0
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 33 36 F9 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x36
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 38h], 28h
        lea ecx, [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 0C: je 0x515d73
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 10 4F F9 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 4], 201h
        ; Exact mapped bytes 75 16: jne 0x515d92
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 34h]
        and ecx, 80000000h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x515d92
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 1
        ; Exact mapped bytes EB 07: jmp 0x515d99
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4], 201h
        ; Exact mapped bytes 74 1B: je 0x515dc3
        __asm _emit 0x74
        __asm _emit 0x1b
        push 1
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x515dc3
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 7C 06: jl 0x515dcf
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 34: je 0x515e03
        __asm _emit 0x74
        __asm _emit 0x34
        push 1
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x515de4
        __asm _emit 0x7d
        __asm _emit 0x06
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 1D: je 0x515e01
        __asm _emit 0x74
        __asm _emit 0x1d
        push -1
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0e001h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 23 6C 02 00: call 0x53ca24
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 7D: jmp 0x515e80
        __asm _emit 0xeb
        __asm _emit 0x7d
        cmp dword ptr [ebp - 4], 202h
        ; Exact mapped bytes 75 24: jne 0x515e30
        __asm _emit 0x75
        __asm _emit 0x24
        push -1
        mov eax, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0c8h
        push 0e001h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 25 FB FF FF: call 0x515953
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 50: jmp 0x515e80
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x515e4c
        __asm _emit 0x75
        __asm _emit 0x0f
        push 1
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 7D 14: jge 0x515e60
        __asm _emit 0x7d
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x515e80
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [eax + 104h]
        ; Exact mapped bytes 74 12: je 0x515e80
        __asm _emit 0x74
        __asm _emit 0x12
        push 12ch
        push 0e000h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D3 FA FF FF: call 0x515953
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 104h], eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 61 EF FD FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x515eaa
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 04: je 0x515eaa
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3C: jmp 0x515ee6
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2A: je 0x515eda
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x515ecd
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 19: jmp 0x515ee6
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6D EC FD FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D0: jmp 0x515eaa
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E9 0F FE FF: call 0x4f6ecf
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
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
