// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507A28 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_00507a28_00507A28() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x507a4d
        __asm _emit 0x74
        __asm _emit 0x13
        push 0f8h
        push 5ca348h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 13 37 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 75 14: jne 0x507a6a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fbh
        push 5ca348h
        ; Exact mapped bytes E8 9B CF 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507a6a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x507a4d
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 9B C5 02 00: call 0x534013
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 75 3C: jne 0x507ad8
        __asm _emit 0x75
        __asm _emit 0x3c
        push 5ca418h
        push 5ca450h
        ; Exact mapped bytes E8 6A 81 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x507acb
        __asm _emit 0x74
        __asm _emit 0x14
        push 105h
        push 5ca348h
        ; Exact mapped bytes E8 3A CF 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507acb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x507aae
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x507b89
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 06 38 FF FF: call 0x4fb2e9
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1D: jne 0x507b09
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx]
        push edx
        push 5ca454h
        ; Exact mapped bytes E8 16 81 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x507b89
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 585e80h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 35 FF FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x507b2e
        __asm _emit 0x75
        __asm _emit 0x14
        push 10fh
        push 5ca348h
        ; Exact mapped bytes E8 D7 CE 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507b2e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x507b09
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 12: jne 0x507b4c
        __asm _emit 0x75
        __asm _emit 0x12
        push 5ca484h
        push 5ca4b4h
        ; Exact mapped bytes E8 CC 80 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 18h]
        push ecx
        push 0
        push 0cf8000h
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 3ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x507b86
        __asm _emit 0x75
        __asm _emit 0x16
        push 5ca4b8h
        push 5ca4e8h
        ; Exact mapped bytes E8 96 80 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x507b89
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
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
