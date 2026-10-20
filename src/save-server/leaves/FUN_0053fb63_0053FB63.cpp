// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053FB63 .. +0x315 bytes.
extern "C" __declspec(naked) void FUN_0053fb63_0053FB63() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cc5ch
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
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x53fb9e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7h
        push 6739a4h
        ; Exact mapped bytes E8 A7 91 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fb9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x53fb84
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x53fbbe
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b8h
        push 6739a4h
        ; Exact mapped bytes E8 87 91 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fbbe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x53fba4
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x53fbde
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b9h
        push 6739a4h
        ; Exact mapped bytes E8 67 91 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fbde
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x53fbc4
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x53fbfe
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bah
        push 6739a4h
        ; Exact mapped bytes E8 47 91 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fbfe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x53fbe4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x53fd25
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E0 FA FF FF: call 0x53f712
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 07: jne 0x53fc42
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 23 02 00 00: jmp 0x53fe65
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        push 0
        lea eax, [ebp - 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 9C B2 68 00: call dword ptr [0x68b29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 5A: jne 0x53fcc7
        __asm _emit 0x75
        __asm _emit 0x5a
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 74 14: je 0x53fc87
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c9h
        push 6739a4h
        ; Exact mapped bytes E8 BE 90 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fc87
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x53fc6d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 C8 C7 F8 FF: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 9C B2 68 00: call dword ptr [0x68b29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 2A: jne 0x53fd01
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 74 14: je 0x53fcf1
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d1h
        push 6739a4h
        ; Exact mapped bytes E8 54 90 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fcf1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x53fcd7
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, 1
        ; Exact mapped bytes E9 64 01 00 00: jmp 0x53fe65
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 97 C7 F8 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        xor eax, eax
        ; Exact mapped bytes E9 40 01 00 00: jmp 0x53fe65
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x53fd45
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ddh
        push 6739a4h
        ; Exact mapped bytes E8 00 90 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fd45
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x53fd25
        __asm _emit 0x75
        __asm _emit 0xda
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 67 FB FF FF: call 0x53f8c8
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 1C 50 FE FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x53fd92
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 62 CB F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x53fe65
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 C6 4F FE FF: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x53fda6
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x53fdbe
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e2h
        push 6739a4h
        ; Exact mapped bytes E8 87 8F FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fdbe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CE: jne 0x53fd92
        __asm _emit 0x75
        __asm _emit 0xce
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 94 4F FE FF: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 79 C6 F8 FF: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx], edx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x53fe07
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 2
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7D 3D: jge 0x53fe4c
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 65 51 FE FF: call 0x524f83
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE F0: movsx esi, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xf0
        sub esi, 41h
        shl esi, 4
        mov eax, dword ptr [ebp - 24h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 50 51 FE FF: call 0x524f83
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE C8: movsx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc8
        lea ecx, [esi + ecx - 41h]
        mov eax, dword ptr [ebp - 24h]
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 10h]
        mov edx, dword ptr [edx]
        mov byte ptr [edx + eax], cl
        ; Exact mapped bytes EB B2: jmp 0x53fdfe
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov dword ptr [ebp - 3ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 8A CA F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xca
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3ch]
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
