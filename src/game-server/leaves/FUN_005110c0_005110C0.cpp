// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005110C0 .. +0x285 bytes.
extern "C" __declspec(naked) void FUN_005110c0_005110C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        push 26eh
        push 5c84b0h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 81 A0 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 17 DD FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x511102
        __asm _emit 0x75
        __asm _emit 0x14
        push 26fh
        push 5c84b0h
        ; Exact mapped bytes E8 03 39 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511102
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x5110df
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 75 14: jne 0x511125
        __asm _emit 0x75
        __asm _emit 0x14
        push 270h
        push 5c84b0h
        ; Exact mapped bytes E8 E0 38 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511125
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x511108
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 68h]
        cmp eax, dword ptr [edx + 40h]
        ; Exact mapped bytes 7C 14: jl 0x51114d
        __asm _emit 0x7c
        __asm _emit 0x14
        push 271h
        push 5c84b0h
        ; Exact mapped bytes E8 B8 38 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51114d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x51112b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 64h]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 7ch]
        add edx, eax
        push edx
        ; Exact mapped bytes E8 46 FE FF FF: call 0x510fd0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 07: jne 0x51119a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A2 01 00 00: jmp 0x51133c
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 37: je 0x5111da
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0ea10h
        push ecx
        push 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5111da
        __asm _emit 0x75
        __asm _emit 0x19
        push 5c8684h
        push 5c86b4h
        ; Exact mapped bytes E8 45 EA FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 62 01 00 00: jmp 0x51133c
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        add edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 68h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5111fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x5112d8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ecx + edx + 8]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 19 44 02 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 C0 00 00 00: call dword ptr [eax + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 75: jne 0x5112d3
        __asm _emit 0x75
        __asm _emit 0x75
        push 5c86b8h
        push 5c86e8h
        ; Exact mapped bytes E8 A8 E9 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 21: jle 0x511297
        __asm _emit 0x7e
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D9: jmp 0x511270
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 20: je 0x5112c0
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0ea10h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2F D6 FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        sub edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 68h], edx
        xor eax, eax
        ; Exact mapped bytes EB 69: jmp 0x51133c
        __asm _emit 0xeb
        __asm _emit 0x69
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x5111f2
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 7ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [eax + ecx + 4], edx
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 7ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + eax + 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 68h], edx
        ; Exact mapped bytes 74 14: je 0x511323
        __asm _emit 0x74
        __asm _emit 0x14
        push 297h
        push 5c84b0h
        ; Exact mapped bytes E8 E2 36 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511323
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x511301
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
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
