// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DCBB0 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_004dcbb0_004DCBB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10ch], ecx
        mov eax, dword ptr [ebp - 10ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4dcbe2
        __asm _emit 0x75
        __asm _emit 0x14
        push 92h
        push 676a8ch
        ; Exact mapped bytes E8 63 C1 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dcbe2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4dcbc2
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4dcc02
        __asm _emit 0x75
        __asm _emit 0x14
        push 93h
        push 676a8ch
        ; Exact mapped bytes E8 43 C1 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dcc02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4dcbe8
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2F 68 FC FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4dcc2b
        __asm _emit 0x75
        __asm _emit 0x14
        push 94h
        push 676a8ch
        ; Exact mapped bytes E8 1A C1 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dcc2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4dcc08
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 5E 1E 00 00: call 0x4dea9f
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4dcc5c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 1
        mov dword ptr [ebp - 108h], ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        cmp dword ptr [ebp - 108h], eax
        ; Exact mapped bytes 7D 2C: jge 0x4dcc9c
        __asm _emit 0x7d
        __asm _emit 0x2c
        lea ecx, [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 108h]
        lea ecx, [eax + ecx*4]
        ; Exact mapped bytes E8 1C 81 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A6 21 00 00: call 0x4dee3a
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4dcc9a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4dcc9c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B1: jmp 0x4dcc4d
        __asm _emit 0xeb
        __asm _emit 0xb1
        ; Exact mapped bytes EB 0F: jmp 0x4dccad
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 108h]
        sub edx, 1
        mov dword ptr [ebp - 108h], edx
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 7E 7E: jle 0x4dcd34
        __asm _emit 0x7e
        __asm _emit 0x7e
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 7F 14: jg 0x4dccd3
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0a3h
        push 676a8ch
        ; Exact mapped bytes E8 72 C0 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dccd3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4dccb6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 108h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7C 14: jl 0x4dccfe
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0a4h
        push 676a8ch
        ; Exact mapped bytes E8 47 C0 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dccfe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4dccd9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 108h]
        lea ecx, [edx + eax*4 - 4]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 108h]
        lea ecx, [eax + ecx*4]
        ; Exact mapped bytes E8 B7 FD FE FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x4dcc9e
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 54 FE FE FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfe
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
