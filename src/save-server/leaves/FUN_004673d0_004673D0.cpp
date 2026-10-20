// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004673D0 .. +0x3EC bytes.
extern "C" __declspec(naked) void FUN_004673d0_004673D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 60 DA 67 00: mov eax, dword ptr [0x67da60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x467413
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes E8 38 07 00 00: call 0x467b20
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x46740d
        __asm _emit 0x75
        __asm _emit 0x21
        push 63e24ch
        push 0
        push 402h
        push 63e240h
        push 2
        ; Exact mapped bytes E8 5C 5A 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46740d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4673e3
        __asm _emit 0x75
        __asm _emit 0xd0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x46741e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 97 03 00 00: jmp 0x4677b5
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 3
        ; Exact mapped bytes FF 15 20 E2 67 00: call dword ptr [0x67e220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x467468
        __asm _emit 0x75
        __asm _emit 0x2b
        push 63e53ch
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 0C 5A 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46745d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x46743d
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 4D 03 00 00: jmp 0x4677b5
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8F 0B 00 00: call 0x468000
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x467499
        __asm _emit 0x75
        __asm _emit 0x21
        push 63e35ch
        push 0
        push 414h
        push 63e240h
        push 2
        ; Exact mapped bytes E8 D0 59 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467499
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x467468
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 4
        ; Exact mapped bytes 74 43: je 0x4674fb
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 74 3A: je 0x4674fb
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 74 2A: je 0x4674fb
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 74 21: je 0x4674fb
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e514h
        push 0
        push 41ah
        push 63e240h
        push 2
        ; Exact mapped bytes E8 6E 59 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4674fb
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 A7: jne 0x4674a8
        __asm _emit 0x75
        __asm _emit 0xa7
        ; Exact mapped bytes A1 60 DA 67 00: mov eax, dword ptr [0x67da60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x4675d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8A 0D 6C DA 67 00: mov cl, byte ptr [0x67da6c]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1ch
        push edx
        ; Exact mapped bytes E8 6A 05 00 00: call 0x467a90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x467570
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        mov edx, dword ptr [ecx*4 + 67da70h]
        push edx
        push 63e4e8h
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 FF 58 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46756a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BD: jne 0x46752d
        __asm _emit 0x75
        __asm _emit 0xbd
        push 4
        ; Exact mapped bytes 8A 0D 6C DA 67 00: mov cl, byte ptr [0x67da6c]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20h]
        push edx
        ; Exact mapped bytes E8 04 05 00 00: call 0x467a90
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x4675d6
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        mov edx, dword ptr [ecx*4 + 67da70h]
        push edx
        push 63e4bch
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 99 58 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4675d0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BD: jne 0x467593
        __asm _emit 0x75
        __asm _emit 0xbd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 75 6C: jne 0x46764b
        __asm _emit 0x75
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0fedcbabch
        ; Exact mapped bytes 75 09: jne 0x4675f4
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 21: je 0x467615
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e47ch
        push 0
        push 42fh
        push 63e240h
        push 2
        ; Exact mapped bytes E8 54 58 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467615
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C4: jne 0x4675df
        __asm _emit 0x75
        __asm _emit 0xc4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 24h
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 8A 0D 6D DA 67 00: mov cl, byte ptr [0x67da6d]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 89 E2 FF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 1D AA 00 00: call 0x472060
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x4677b5
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 2
        ; Exact mapped bytes 75 0D: jne 0x467661
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 07: jne 0x467661
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 21: je 0x46768d
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e45ch
        push 0
        push 43ch
        push 63e240h
        push 2
        ; Exact mapped bytes E8 DC 57 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46768d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CE: jne 0x467661
        __asm _emit 0x75
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 24 72 68 00: mov eax, dword ptr [0x687224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        sub eax, dword ptr [edx + 10h]
        ; Exact mapped bytes A3 24 72 68 00: mov dword ptr [0x687224], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 60 DA 67 00: mov ecx, dword ptr [0x67da60]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x46778c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 10: je 0x4676cc
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 3E: jmp 0x46770a
        __asm _emit 0xeb
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 18 72 68 00: mov ecx, dword ptr [0x687218]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 21: je 0x4676f8
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e444h
        push 0
        push 44bh
        push 63e240h
        push 2
        ; Exact mapped bytes E8 71 57 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4676f8
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4676cc
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 89 0D 18 72 68 00: mov dword ptr [0x687218], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 0F: je 0x467722
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 3D: jmp 0x46775f
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 20 72 68 00: mov ecx, dword ptr [0x687220]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 21: je 0x46774e
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e42ch
        push 0
        push 455h
        push 63e240h
        push 2
        ; Exact mapped bytes E8 1B 57 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46774e
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x467722
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D 20 72 68 00: mov dword ptr [0x687220], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 24h
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 8A 0D 6D DA 67 00: mov cl, byte ptr [0x67da6d]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 45 E1 FF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D9 A8 00 00: call 0x472060
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 29: jmp 0x4677b5
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        push eax
        xor ecx, ecx
        ; Exact mapped bytes 8A 0D 6D DA 67 00: mov cl, byte ptr [0x67da6d]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 20h
        push edx
        ; Exact mapped bytes E8 0E E1 FF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
