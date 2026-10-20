// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00530273 .. +0x29B bytes.
extern "C" __declspec(naked) void FUN_00530273_00530273() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x530299
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a8h
        push 5ccae4h
        ; Exact mapped bytes E8 6C 47 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530299
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x53027f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x5303ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x5303ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0ch], ecx
        push 588258h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C1 AD FC FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5302e7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b0h
        push 5ccae4h
        ; Exact mapped bytes E8 1E 47 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5302e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5302c2
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x5303ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B0 F3 FE FF: call 0x51f6b2
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x5303ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 14h]
        and edx, dword ptr [ecx + 64h]
        and edx, 0f000h
        test edx, edx
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5303ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0F CD 00 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x530347
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b6h
        push 5ccae4h
        ; Exact mapped bytes E8 BE 46 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530347
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x53032d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 588240h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 AD FC FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x530372
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7h
        push 5ccae4h
        ; Exact mapped bytes E8 93 46 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530372
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x53034d
        __asm _emit 0x75
        __asm _emit 0xd5
        push 15h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 00 EF FB FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xef
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6C C0 00 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x530505
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x5303e1
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 14h]
        or edx, 4
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebp + 14h]
        and eax, 5000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x5303e1
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 14h]
        and ch, 0fh
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [ebp + 14h]
        or dh, 20h
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 73 F9 FF FF: call 0x52fd60
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x53040a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cbh
        push 5ccae4h
        ; Exact mapped bytes E8 FB 45 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53040a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5303f0
        __asm _emit 0x75
        __asm _emit 0xe0
        push 15h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 EE FB FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 0C: jne 0x53043d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 20h], ecx
        push 0e81fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 97 E4 FB FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x530467
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d2h
        push 5ccae4h
        ; Exact mapped bytes E8 9E 45 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530467
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x53044d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 588258h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 AC FC FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x530492
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d3h
        push 5ccae4h
        ; Exact mapped bytes E8 73 45 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530492
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x53046d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 6ch]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 14: je 0x5304b7
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d5h
        push 5ccae4h
        ; Exact mapped bytes E8 4E 45 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5304b7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x530498
        __asm _emit 0x75
        __asm _emit 0xdb
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 F2 FE FF: call 0x51f77f
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -10h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x530505
        __asm _emit 0x74
        __asm _emit 0x12
        push 8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 EE FB FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F BF 00 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xbf
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
