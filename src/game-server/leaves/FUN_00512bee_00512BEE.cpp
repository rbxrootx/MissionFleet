// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512BEE .. +0x2EB bytes.
extern "C" __declspec(naked) void FUN_00512bee_00512BEE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x512c11
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c6h
        push 5c84b0h
        ; Exact mapped bytes E8 F4 1D 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512c11
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x512bf7
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x512c31
        __asm _emit 0x7f
        __asm _emit 0x14
        push 4c7h
        push 5c84b0h
        ; Exact mapped bytes E8 D4 1D 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512c31
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x512c17
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7F 14: jg 0x512c51
        __asm _emit 0x7f
        __asm _emit 0x14
        push 4c8h
        push 5c84b0h
        ; Exact mapped bytes E8 B4 1D 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512c51
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x512c37
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 07: jge 0x512c64
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 0
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 12: jmp 0x512c85
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 0ch
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 25: jge 0x512cb5
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 7D 0A: jge 0x512ca7
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB BE: jmp 0x512c73
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 7fffffffh
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 12: jmp 0x512ce0
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 0ch
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D C4 01 00 00: jge 0x512eb0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 14: jge 0x512d06
        __asm _emit 0x7d
        __asm _emit 0x14
        push 4dbh
        push 5c84b0h
        ; Exact mapped bytes E8 FF 1C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512d06
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x512cec
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x512d1e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 0
        ; Exact mapped bytes EB B0: jmp 0x512cce
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7D 57: jge 0x512d7f
        __asm _emit 0x7d
        __asm _emit 0x57
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 51: je 0x512d7f
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 0
        ; Exact mapped bytes A1 A8 E8 5D 00: mov eax, dword ptr [0x5de8a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 AC E8 5D 00: cmp eax, dword ptr [0x5de8ac]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x512d59
        __asm _emit 0x74
        __asm _emit 0x14
        push 4eah
        push 5c84b0h
        ; Exact mapped bytes E8 AC 1C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512d59
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x512d38
        __asm _emit 0x75
        __asm _emit 0xd9
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 03 15 A8 E8 5D 00: add edx, dword ptr [0x5de8a8]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax - 4]
        add ecx, edx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx - 4], ecx
        mov dword ptr [ebp + 10h], 0
        ; Exact mapped bytes EB 64: jmp 0x512de3
        __asm _emit 0xeb
        __asm _emit 0x64
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 14: jg 0x512d99
        __asm _emit 0x7f
        __asm _emit 0x14
        push 4f1h
        push 5c84b0h
        ; Exact mapped bytes E8 6C 1C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512d99
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x512d7f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 12: jne 0x512dba
        __asm _emit 0x75
        __asm _emit 0x12
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x512db8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 0
        ; Exact mapped bytes EB 29: jmp 0x512de3
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7D 12: jge 0x512dd7
        __asm _emit 0x7d
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 8], eax
        mov dword ptr [ebp + 10h], 0
        ; Exact mapped bytes EB 0C: jmp 0x512de3
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 10h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp + 10h], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 14: jge 0x512dfd
        __asm _emit 0x7d
        __asm _emit 0x14
        push 506h
        push 5c84b0h
        ; Exact mapped bytes E8 08 1C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512dfd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x512de3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x512eab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7E 2B: jle 0x512e45
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp + 10h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 14: jg 0x512e3d
        __asm _emit 0x7f
        __asm _emit 0x14
        push 50dh
        push 5c84b0h
        ; Exact mapped bytes E8 C8 1B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512e3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x512e23
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 66: jmp 0x512eab
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes 8B 15 A8 E8 5D 00: mov edx, dword ptr [0x5de8a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 3B 15 AC E8 5D 00: cmp edx, dword ptr [0x5de8ac]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x512e67
        __asm _emit 0x74
        __asm _emit 0x14
        push 512h
        push 5c84b0h
        ; Exact mapped bytes E8 9E 1B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512e67
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x512e45
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 2B 0D A8 E8 5D 00: sub ecx, dword ptr [0x5de8a8]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], ecx
        ; Exact mapped bytes 7E 17: jle 0x512ea4
        __asm _emit 0x7e
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 2B 05 AC E8 5D 00: sub eax, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], edx
        mov dword ptr [ebp + 10h], 0
        ; Exact mapped bytes E9 1E FE FF FF: jmp 0x512cce
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 14: je 0x512eca
        __asm _emit 0x74
        __asm _emit 0x14
        push 51ah
        push 5c84b0h
        ; Exact mapped bytes E8 3B 1B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512eca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x512eb0
        __asm _emit 0x75
        __asm _emit 0xe0
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
