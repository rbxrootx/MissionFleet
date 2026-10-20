// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FBE1E .. +0x2EB bytes.
extern "C" __declspec(naked) void FUN_004fbe1e_004FBE1E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fbe41
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c6h
        push 674fe8h
        ; Exact mapped bytes E8 04 CF 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fbe41
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fbe27
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x4fbe61
        __asm _emit 0x7f
        __asm _emit 0x14
        push 4c7h
        push 674fe8h
        ; Exact mapped bytes E8 E4 CE 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fbe61
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fbe47
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7F 14: jg 0x4fbe81
        __asm _emit 0x7f
        __asm _emit 0x14
        push 4c8h
        push 674fe8h
        ; Exact mapped bytes E8 C4 CE 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fbe81
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4fbe67
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 07: jge 0x4fbe94
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 0
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 12: jmp 0x4fbeb5
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
        ; Exact mapped bytes 7D 25: jge 0x4fbee5
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 7D 0A: jge 0x4fbed7
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB BE: jmp 0x4fbea3
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 7fffffffh
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 12: jmp 0x4fbf10
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
        ; Exact mapped bytes 0F 8D C4 01 00 00: jge 0x4fc0e0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 14: jge 0x4fbf36
        __asm _emit 0x7d
        __asm _emit 0x14
        push 4dbh
        push 674fe8h
        ; Exact mapped bytes E8 0F CE 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fbf36
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fbf1c
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x4fbf4e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 0
        ; Exact mapped bytes EB B0: jmp 0x4fbefe
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7D 57: jge 0x4fbfaf
        __asm _emit 0x7d
        __asm _emit 0x57
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 51: je 0x4fbfaf
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 0
        ; Exact mapped bytes A1 C0 6D 68 00: mov eax, dword ptr [0x686dc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 C4 6D 68 00: cmp eax, dword ptr [0x686dc4]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x4fbf89
        __asm _emit 0x74
        __asm _emit 0x14
        push 4eah
        push 674fe8h
        ; Exact mapped bytes E8 BC CD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fbf89
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x4fbf68
        __asm _emit 0x75
        __asm _emit 0xd9
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 03 15 C0 6D 68 00: add edx, dword ptr [0x686dc0]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax - 4]
        add ecx, edx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx - 4], ecx
        mov dword ptr [ebp + 10h], 0
        ; Exact mapped bytes EB 64: jmp 0x4fc013
        __asm _emit 0xeb
        __asm _emit 0x64
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 14: jg 0x4fbfc9
        __asm _emit 0x7f
        __asm _emit 0x14
        push 4f1h
        push 674fe8h
        ; Exact mapped bytes E8 7C CD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fbfc9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fbfaf
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 12: jne 0x4fbfea
        __asm _emit 0x75
        __asm _emit 0x12
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x4fbfe8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 0
        ; Exact mapped bytes EB 29: jmp 0x4fc013
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7D 12: jge 0x4fc007
        __asm _emit 0x7d
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 8], eax
        mov dword ptr [ebp + 10h], 0
        ; Exact mapped bytes EB 0C: jmp 0x4fc013
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 10h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp + 10h], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 14: jge 0x4fc02d
        __asm _emit 0x7d
        __asm _emit 0x14
        push 506h
        push 674fe8h
        ; Exact mapped bytes E8 18 CD 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc02d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fc013
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x4fc0db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7E 2B: jle 0x4fc075
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp + 10h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 14: jg 0x4fc06d
        __asm _emit 0x7f
        __asm _emit 0x14
        push 50dh
        push 674fe8h
        ; Exact mapped bytes E8 D8 CC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc06d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fc053
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 66: jmp 0x4fc0db
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes 8B 15 C0 6D 68 00: mov edx, dword ptr [0x686dc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B 15 C4 6D 68 00: cmp edx, dword ptr [0x686dc4]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x4fc097
        __asm _emit 0x74
        __asm _emit 0x14
        push 512h
        push 674fe8h
        ; Exact mapped bytes E8 AE CC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc097
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4fc075
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 2B 0D C0 6D 68 00: sub ecx, dword ptr [0x686dc0]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], ecx
        ; Exact mapped bytes 7E 17: jle 0x4fc0d4
        __asm _emit 0x7e
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 2B 05 C4 6D 68 00: sub eax, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], edx
        mov dword ptr [ebp + 10h], 0
        ; Exact mapped bytes E9 1E FE FF FF: jmp 0x4fbefe
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 14: je 0x4fc0fa
        __asm _emit 0x74
        __asm _emit 0x14
        push 51ah
        push 674fe8h
        ; Exact mapped bytes E8 4B CC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc0fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fc0e0
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
