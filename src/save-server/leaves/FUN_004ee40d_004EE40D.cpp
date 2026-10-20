// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE40D .. +0x2B5 bytes.
extern "C" __declspec(naked) void FUN_004ee40d_004EE40D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e2bch
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
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 06: jl 0x4ee43a
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 14: jge 0x4ee44e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0dch
        push 677c28h
        ; Exact mapped bytes E8 F7 A8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee44e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4ee42e
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7F 14: jg 0x4ee46e
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0ddh
        push 677c28h
        ; Exact mapped bytes E8 D7 A8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee46e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4ee454
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 74 06: je 0x4ee480
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 14: jne 0x4ee494
        __asm _emit 0x75
        __asm _emit 0x14
        push 0deh
        push 677c28h
        ; Exact mapped bytes E8 B1 A8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee494
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4ee474
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 40h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 15 37 04 00: call 0x531bd1
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 48h], edx
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 84 A2 FF FF: call 0x4e8759
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 7F 14: jg 0x4ee4f9
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0e7h
        push 677c28h
        ; Exact mapped bytes E8 4C A8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee4f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4ee4dc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 40h]
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 CE 83 FF FF: call 0x4e68dc
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ecx + 48h]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 4ch], edx
        mov dword ptr [ecx + 50h], eax
        push 1
        mov edx, dword ptr [ebp - 40h]
        add edx, 4ch
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 D3 62 04 00: call 0x534804
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 8E 36 04 00: call 0x531bd1
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 58h], edx
        push 1
        mov eax, dword ptr [ebp - 40h]
        add eax, 54h
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 A1 62 04 00: call 0x534804
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 5C 36 04 00: call 0x531bd1
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 60h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 5ch
        push ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 6F 62 04 00: call 0x534804
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 7D 0E: jge 0x4ee5ac
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 50h]
        neg ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 7D 0E: jge 0x4ee5c3
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 58h]
        neg edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [eax + 58h], edx
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 7D 0E: jge 0x4ee5da
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 60h]
        neg eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 60h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 22 A2 FF FF: call 0x4e880b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 7C 09: jl 0x4ee5fb
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 7D 14: jge 0x4ee60f
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0fah
        push 677c28h
        ; Exact mapped bytes E8 36 A7 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee60f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4ee5e9
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 75 14: jne 0x4ee632
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 40h]
        mov eax, dword ptr [eax + 4ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 54h], eax
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 75 14: jne 0x4ee64f
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ecx + 50h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 58h], eax
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 75 14: jne 0x4ee66c
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ecx + 54h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 5ch], eax
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 14: jne 0x4ee689
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ecx + 58h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 1D: je 0x4ee6af
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 66 0B 00 00: call 0x4ef200
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 40h]
        ; Exact mapped bytes 74 0A: je 0x4ee6af
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 00 D9 03 00: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
