// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C037 .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_0056c037_0056C037() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 4dfh
        push 5d053ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 0A F1 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf1
        __asm _emit 0xf8
        __asm _emit 0xff
        push 4e0h
        push 5d053ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F7 F0 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 40 5A FD FF: call 0x541ab1
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 4e4h
        push 5d053ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 D9 F0 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C0 55 FE FF: call 0x55165d
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 70: je 0x56c116
        __asm _emit 0x74
        __asm _emit 0x70
        push 1
        push 0e900h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2C 07 FD FF: call 0x53c7e1
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 58: je 0x56c116
        __asm _emit 0x74
        __asm _emit 0x58
        push 585e68h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C5 EF F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56c0e3
        __asm _emit 0x75
        __asm _emit 0x14
        push 4efh
        push 5d053ch
        ; Exact mapped bytes E8 22 89 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c0e3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56c0be
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 48 0F FD FF: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 02 2D F8 FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0c8h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 58 2D F8 FF: call 0x4eee65
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0cch], eax
        xor eax, eax
        cmp dword ptr [ebp - 8], 0
        sete al
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 BA F9 FF: call 0x507b92
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xba
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 07: jne 0x56c140
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x56c1cf
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 21: je 0x56c167
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F6 01 00 00: call 0x56c34c
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        push 0
        push 200h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E6 2D F8 FF: call 0x4eef4d
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c4h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 15: jne 0x56c18e
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        push 50bh
        push 5d053ch
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 BF EF F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        push 58b1f8h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E2 EE F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56c1c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 50ch
        push 5d053ch
        ; Exact mapped bytes E8 3F 88 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c1c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x56c1a1
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 14h]
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
