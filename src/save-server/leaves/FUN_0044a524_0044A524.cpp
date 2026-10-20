// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044A524 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_0044a524_0044A524() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x44a623
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 65 75 0E 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0f0h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 08 BA 68 00: call dword ptr [0x68ba08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 5F: je 0x44a5cb
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 0C BA 68 00: call dword ptr [0x68ba0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 19: jne 0x44a59c
        __asm _emit 0x75
        __asm _emit 0x19
        push 672898h
        push 6728d0h
        ; Exact mapped bytes E8 83 60 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x44a66c
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 04 BA 68 00: call dword ptr [0x68ba04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x44a5c3
        __asm _emit 0x75
        __asm _emit 0x14
        push 146h
        push 67288ch
        ; Exact mapped bytes E8 82 E7 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe7
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44a5c3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x44a5a9
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 58: jmp 0x44a623
        __asm _emit 0xeb
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x44a5ee
        __asm _emit 0x75
        __asm _emit 0x14
        push 14eh
        push 67288ch
        ; Exact mapped bytes E8 57 E7 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe7
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44a5ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x44a5d4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 74 27: je 0x44a623
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 14: je 0x44a618
        __asm _emit 0x74
        __asm _emit 0x14
        push 6728d4h
        push 672910h
        ; Exact mapped bytes E8 02 60 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 0B: jmp 0x44a623
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        add edx, 4
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB D1: jmp 0x44a5f4
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov dword ptr [ebp - 0ch], 1
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x44a64a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x44a669
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x44a669
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 71 F1 FF FF: call 0x4497d0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 10 BA 68 00: call dword ptr [0x68ba10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
