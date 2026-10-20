// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047406D .. +0x33E bytes.
extern "C" __declspec(naked) void FUN_0047406d_0047406D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57be0ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 6ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 78h]
        mov ecx, 1bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4740ab
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E4 02 00 00: jmp 0x47438f
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 77h
        push 5bb2ech
        push 24h
        ; Exact mapped bytes E8 7A 8F 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 12: je 0x4740de
        __asm _emit 0x74
        __asm _emit 0x12
        push 4b0h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B7 CD F9 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x4740e5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 10h], 0
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 4
        ; Exact mapped bytes E8 52 63 FA FF: call 0x41a460
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 4
        ; Exact mapped bytes E8 7E 63 FA FF: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 8D 66 FA FF: call 0x41a7c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x474192
        __asm _emit 0x74
        __asm _emit 0x56
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CC 65 FA FF: call 0x41a710
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 20h], eax
        mov esi, esp
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 83 46 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5C CE F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        push 5bb324h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4D CE F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xce
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        push 0
        lea ecx, [ebp - 34h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B0 65 FA FF: call 0x41a740
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 95: jmp 0x474127
        __asm _emit 0xeb
        __asm _emit 0x95
        mov edx, dword ptr [ebp - 60h]
        add edx, 64h
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 38 46 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x4741ec
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 60h]
        add eax, 64h
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1E 46 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F4 CD F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        push 5bb328h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E5 CD F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 47: jmp 0x474233
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x47422c
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 1A: je 0x47421e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 C7 45 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x474225
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov dword ptr [ebp - 1ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x47438f
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x474309
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4B 62 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x4742c0
        __asm _emit 0x74
        __asm _emit 0x77
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3D 62 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 14 62 F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        push 80020f01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 2F 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x4742be
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x4742b4
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 1A: je 0x4742a6
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 3F 45 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4742ad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 1ch], 0
        mov eax, 1
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x47438f
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x474307
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x474300
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 1A: je 0x4742f2
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 F3 44 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x4742f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 1ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x47438f
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x47434d
        __asm _emit 0xeb
        __asm _emit 0x44
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x474349
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 1A: je 0x47433b
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 50h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 AA 44 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x474342
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov dword ptr [ebp - 1ch], 0
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x47438f
        __asm _emit 0xeb
        __asm _emit 0x42
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x47438d
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 1A: je 0x47437f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 66 44 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x474386
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov dword ptr [ebp - 1ch], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 78h
        cmp ebp, esp
        ; Exact mapped bytes E8 3B 44 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
