// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468560 .. +0x2B1 bytes.
extern "C" __declspec(naked) void FUN_00468560_00468560() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e880h
        push 46d504h
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
        add esp, -10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], 0
        push 9
        ; Exact mapped bytes E8 1F 83 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        push 63e86ch
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 AE 48 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4685bb
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x46859b
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x4685cf
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes A1 20 72 68 00: mov eax, dword ptr [0x687220]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 08: jmp 0x4685e1
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 18 02 00 00: je 0x468803
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 84 0C 02 00 00: je 0x468803
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 3
        ; Exact mapped bytes 74 2D: je 0x468635
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x468635
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 75 12: jne 0x46863a
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 60 DA 67 00: mov ecx, dword ptr [0x67da60]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x46863a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C4 01 00 00: jmp 0x4687fe
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 70: je 0x4686b3
        __asm _emit 0x74
        __asm _emit 0x70
        push 0
        push 1
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 5D F9 FF FF: call 0x467fb0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x468684
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 63e858h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 ED 47 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46867c
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x46865a
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes EB 2F: jmp 0x4686b3
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 63e84ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 BC 47 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4686ad
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x468684
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 63e844h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 94 47 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4686d5
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4686b3
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 4
        ; Exact mapped bytes 75 71: jne 0x46875d
        __asm _emit 0x75
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        sar eax, 10h
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        push ecx
        push 63e810h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 45 47 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x468724
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C2: jne 0x4686ec
        __asm _emit 0x75
        __asm _emit 0xc2
        ; Exact mapped bytes 83 3D C4 8D 68 00 00: cmp dword ptr [0x688dc4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x46874c
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 20h
        push edx
        ; Exact mapped bytes FF 15 C4 8D 68 00: call dword ptr [0x688dc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 0C: jmp 0x468758
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 0B 01 00 00: call 0x468860
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4687fe
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 75 3D: jne 0x4687a3
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        push ecx
        push 63e7e8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 DA 46 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46878f
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x468766
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 C2 00 00 00: call 0x468860
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 5B: jmp 0x4687fe
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 2
        ; Exact mapped bytes 75 4A: jne 0x4687fe
        __asm _emit 0x75
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        sar eax, 10h
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        push ecx
        push 63e7b4h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 7D 46 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4687ec
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C2: jne 0x4687b4
        __asm _emit 0x75
        __asm _emit 0xc2
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 65 00 00 00: call 0x468860
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 D6 FD FF FF: jmp 0x4685d9
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x468811
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x46881c
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
