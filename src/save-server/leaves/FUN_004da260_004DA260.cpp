// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA260 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_004da260_004DA260() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 29: jne 0x4da295
        __asm _emit 0x75
        __asm _emit 0x29
        push 673c84h
        push 673cach
        ; Exact mapped bytes E8 9A 63 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 B5 EA 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4da290
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x4da363
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 4
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C4 91 FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x4da2cf
        __asm _emit 0x75
        __asm _emit 0x29
        push 673cb0h
        push 673cdch
        ; Exact mapped bytes E8 60 63 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 7B EA 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4da2ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x4da363
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x4da2d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x4da2cf
        __asm _emit 0x75
        __asm _emit 0xf3
        push 0
        push 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 7B 91 FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x4da315
        __asm _emit 0x75
        __asm _emit 0x26
        push 673ce0h
        push 673d14h
        ; Exact mapped bytes E8 17 63 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 32 EA 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4da313
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes EB 4E: jmp 0x4da363
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 38 91 FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x4da358
        __asm _emit 0x75
        __asm _emit 0x26
        push 673d18h
        push 673d44h
        ; Exact mapped bytes E8 D4 62 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 EF E9 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4da356
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes EB 0B: jmp 0x4da363
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
