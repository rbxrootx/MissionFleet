// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417A10 .. +0x355 bytes.
extern "C" __declspec(naked) void FUN_00417a10_00417A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 998h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 998h]
        mov ecx, 266h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 2ch
        ; Exact mapped bytes 73 07: jae 0x417a43
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0C 03 00 00: jmp 0x417d4f
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 2ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 AE D8 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 14 9D FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 1
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x417afc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 34h], -1
        ; Exact mapped bytes 74 5B: je 0x417ad8
        __asm _emit 0x74
        __asm _emit 0x5b
        push 78h
        push 0
        lea eax, [ebp - 0ach]
        push eax
        ; Exact mapped bytes E8 33 DE 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 78h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2ch
        push ecx
        lea edx, [ebp - 0ach]
        push edx
        ; Exact mapped bytes E8 5B D8 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 98 FE FF: call 0x4012d5
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 30001h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 26 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x417af7
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 20001h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 26 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E 02 00 00: jmp 0x417d4a
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 2
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x417c11
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 7E 9F FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        cmp dword ptr [ebp - 0b0h], -1
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x417bed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        add esi, 2ch
        mov ecx, 0dfh
        lea edi, [ebp - 42ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 934h], 63h
        mov dword ptr [ebp - 938h], 0
        mov edx, dword ptr [ebp - 42ch]
        mov dword ptr [ebp - 93ch], edx
        lea eax, [ebp - 934h]
        push eax
        lea ecx, [ebp - 938h]
        push ecx
        lea edx, [ebp - 93ch]
        push edx
        ; Exact mapped bytes E8 99 97 FE FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x417bcc
        __asm _emit 0x74
        __asm _emit 0x48
        lea eax, [ebp - 42ch]
        push eax
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 940h], esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 DB 4D 0B 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x4d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 954h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 9B FE FF: call 0x4016ef
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 30002h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 58 25 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x417beb
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 20002h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 25 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x417c0c
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 20002h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 25 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x417d4a
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 3
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x417d2b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 69 9E FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        cmp dword ptr [ebp - 430h], -1
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x417d0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        add esi, 2ch
        mov ecx, 140h
        lea edi, [ebp - 930h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 944h], 31h
        mov dword ptr [ebp - 948h], 0
        mov eax, dword ptr [ebp - 930h]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 94ch], eax
        lea ecx, [ebp - 944h]
        push ecx
        lea edx, [ebp - 948h]
        push edx
        lea eax, [ebp - 94ch]
        push eax
        ; Exact mapped bytes E8 7C 96 FE FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x417ce9
        __asm _emit 0x74
        __asm _emit 0x48
        lea ecx, [ebp - 930h]
        push ecx
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 950h], esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 BE 4C 0B 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 958h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 9C FE FF: call 0x401988
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 30003h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B 24 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x417d08
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 20003h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 24 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x417d29
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 20003h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 23 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x417d4a
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 20000h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 8001d200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 23 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 998h
        cmp ebp, esp
        ; Exact mapped bytes E8 91 D0 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
