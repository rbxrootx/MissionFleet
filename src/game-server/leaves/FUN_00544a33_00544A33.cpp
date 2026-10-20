// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544A33 .. +0x315 bytes.
extern "C" __declspec(naked) void FUN_00544a33_00544A33() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d27ch
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
        ; Exact mapped bytes 75 14: jne 0x544a6e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7h
        push 5c7374h
        ; Exact mapped bytes E8 97 FF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544a6e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x544a54
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x544a8e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b8h
        push 5c7374h
        ; Exact mapped bytes E8 77 FF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544a8e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x544a74
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x544aae
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b9h
        push 5c7374h
        ; Exact mapped bytes E8 57 FF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544aae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x544a94
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x544ace
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bah
        push 5c7374h
        ; Exact mapped bytes E8 37 FF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544ace
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x544ab4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x544bf5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E0 FA FF FF: call 0x5445e2
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 07: jne 0x544b12
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 23 02 00 00: jmp 0x544d35
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
        ; Exact mapped bytes FF 15 08 1E 5E 00: call dword ptr [0x5e1e08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 5A: jne 0x544b97
        __asm _emit 0x75
        __asm _emit 0x5a
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 74 14: je 0x544b57
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c9h
        push 5c7374h
        ; Exact mapped bytes E8 AE FE FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544b57
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x544b3d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 58 88 FA FF: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x88
        __asm _emit 0xfa
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
        ; Exact mapped bytes FF 15 08 1E 5E 00: call dword ptr [0x5e1e08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 2A: jne 0x544bd1
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 74 14: je 0x544bc1
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d1h
        push 5c7374h
        ; Exact mapped bytes E8 44 FE FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544bc1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x544ba7
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, 1
        ; Exact mapped bytes E9 64 01 00 00: jmp 0x544d35
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
        ; Exact mapped bytes E8 27 88 FA FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        xor eax, eax
        ; Exact mapped bytes E9 40 01 00 00: jmp 0x544d35
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x544c15
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ddh
        push 5c7374h
        ; Exact mapped bytes E8 F0 FD FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544c15
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x544bf5
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
        ; Exact mapped bytes E8 67 FB FF FF: call 0x544798
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 4C C3 FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x544c62
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F2 8B FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x544d35
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F6 C2 FE FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x544c76
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x544c8e
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e2h
        push 5c7374h
        ; Exact mapped bytes E8 77 FD FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544c8e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CE: jne 0x544c62
        __asm _emit 0x75
        __asm _emit 0xce
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 C4 C2 FE FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc2
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
        ; Exact mapped bytes E8 09 87 FA FF: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx], edx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x544cd7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 2
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7D 3D: jge 0x544d1c
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 95 C4 FE FF: call 0x531183
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc4
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
        ; Exact mapped bytes E8 80 C4 FE FF: call 0x531183
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc4
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
        ; Exact mapped bytes EB B2: jmp 0x544cce
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov dword ptr [ebp - 3ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 1A 8B FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8b
        __asm _emit 0xfa
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
