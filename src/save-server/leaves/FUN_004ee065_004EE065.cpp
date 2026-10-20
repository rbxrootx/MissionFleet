// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE065 .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_004ee065_004EE065() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 74h], ecx
        push 7fh
        push 677c28h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DF C1 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 75 4C: jne 0x4ee0d6
        __asm _emit 0x75
        __asm _emit 0x4c
        push 677ca4h
        push 677ce0h
        ; Exact mapped bytes E8 7C 25 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x25
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        push 677ce4h
        push 677d04h
        ; Exact mapped bytes E8 6A 25 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x25
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4ee0cb
        __asm _emit 0x74
        __asm _emit 0x14
        push 86h
        push 677c28h
        ; Exact mapped bytes E8 7A AC 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee0cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4ee0ae
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 12 02 00 00: jmp 0x4ee2e8
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 7C 09: jl 0x4ee0e8
        __asm _emit 0x7c
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 7D 14: jge 0x4ee0fc
        __asm _emit 0x7d
        __asm _emit 0x14
        push 8ah
        push 677c28h
        ; Exact mapped bytes E8 49 AC 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee0fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x4ee0d6
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], -1
        ; Exact mapped bytes 74 02: je 0x4ee113
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 79: jmp 0x4ee18c
        __asm _emit 0xeb
        __asm _emit 0x79
        push 8
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 44h]
        mov edx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 65 04 00: call 0x5346e4
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 64 04 00: call 0x534647
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 09: je 0x4ee178
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 75 12: jne 0x4ee18a
        __asm _emit 0x75
        __asm _emit 0x12
        push 677d08h
        push 677d34h
        ; Exact mapped bytes E8 8E 24 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 35: jmp 0x4ee1c1
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 7F 14: jg 0x4ee1a9
        __asm _emit 0x7f
        __asm _emit 0x14
        push 96h
        push 677c28h
        ; Exact mapped bytes E8 9C AB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee1a9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4ee18c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 40h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        push 0
        push 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8F 3C 04 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 5B 04 00: call 0x533d9c
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x4ee2b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 73 3C 04 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        lea edx, [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 62 04 00: call 0x534503
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 53 3D 04 00: call 0x531f62
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ee227
        __asm _emit 0x75
        __asm _emit 0x14
        push 9eh
        push 677c28h
        ; Exact mapped bytes E8 1E AB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee227
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 B0: jne 0x4ee1dd
        __asm _emit 0x75
        __asm _emit 0xb0
        lea ecx, [ebp - 60h]
        push ecx
        lea edx, [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 5D 06 00 00: call 0x4ee89a
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 86 3E 04 00: call 0x5320ca
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 74h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 60: je 0x4ee2b8
        __asm _emit 0x74
        __asm _emit 0x60
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 67 3F 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 EF D8 03 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 3C 40 04 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 4ch], eax
        ; Exact mapped bytes 7D 16: jge 0x4ee292
        __asm _emit 0x7d
        __asm _emit 0x16
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2C 40 04 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        sub eax, dword ptr [ecx + 4ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2C 40 04 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 50h], eax
        ; Exact mapped bytes 7D 16: jge 0x4ee2b8
        __asm _emit 0x7d
        __asm _emit 0x16
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1C 40 04 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        sub eax, dword ptr [ecx + 50h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 63 04 00: call 0x5345f7
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 7F F6 FF FF: call 0x4ed967
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
