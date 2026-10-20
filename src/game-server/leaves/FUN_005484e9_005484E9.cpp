// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005484E9 .. +0x23F bytes.
extern "C" __declspec(naked) void FUN_005484e9_005484E9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e03ah
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x54851b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 7C 14: jl 0x54852f
        __asm _emit 0x7c
        __asm _emit 0x14
        push 10bh
        push 5ca28ch
        ; Exact mapped bytes E8 D6 C4 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54852f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x54850a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x548552
        __asm _emit 0x75
        __asm _emit 0x14
        push 10ch
        push 5ca28ch
        ; Exact mapped bytes E8 B3 C4 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x548552
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x548535
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*8]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x54857f
        __asm _emit 0x75
        __asm _emit 0x14
        push 10dh
        push 5ca28ch
        ; Exact mapped bytes E8 86 C4 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54857f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x548558
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 24 23 5E 00: call dword ptr [0x5e2324]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 19: je 0x5485b3
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 8C 2F 01 00 00: jl 0x5486d8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 25 01 00 00: je 0x5486d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x548642
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes E8 AA FA FF FF: call 0x54806e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x5485e1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 04 07 00 00: call 0x548ce0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5485e8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 5B 08 00 00: call 0x548e90
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 1A: jne 0x548665
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0ch]
        shl eax, 2
        push eax
        push 0
        ; Exact mapped bytes FF 15 40 23 5E 00: call dword ptr [0x5e2340]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 1F: jmp 0x548684
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 2
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0ch]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes FF 15 28 23 5E 00: call dword ptr [0x5e2328]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x548692
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 1A 77 F8 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        sub edx, dword ptr [ecx + 8]
        shl edx, 2
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        lea ecx, [eax + ecx*4]
        push ecx
        ; Exact mapped bytes E8 B7 0C F6 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 2C 23 5E 00: call dword ptr [0x5e232c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x5486ec
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7C 14: jl 0x548700
        __asm _emit 0x7c
        __asm _emit 0x14
        push 12fh
        push 5ca28ch
        ; Exact mapped bytes E8 05 C3 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x548700
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x5486d8
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + edx*4], eax
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
