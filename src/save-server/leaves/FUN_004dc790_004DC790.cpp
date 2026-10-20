// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DC790 .. +0x24A bytes.
extern "C" __declspec(naked) void FUN_004dc790_004DC790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8B 82 06 00: call 0x544a44
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7C 05: jl 0x4dc7da
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 F7 01 00 00: jmp 0x4dc9d1
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 28: jge 0x4dc80a
        __asm _emit 0x7d
        __asm _emit 0x28
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x4dc7f0
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x4dc7f7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 68510ch
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 C7 01 00 00: jmp 0x4dc9d1
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ch
        ; Exact mapped bytes 75 49: jne 0x4dc867
        __asm _emit 0x75
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        cmp edx, 5ch
        ; Exact mapped bytes 75 3D: jne 0x4dc867
        __asm _emit 0x75
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5ch
        ; Exact mapped bytes 74 32: je 0x4dc867
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 D2 CE F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xce
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x4dc85f
        __asm _emit 0x75
        __asm _emit 0x11
        push 4bh
        push 676a8ch
        ; Exact mapped bytes E8 E6 C4 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc85f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DF: jne 0x4dc844
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes EB C3: jmp 0x4dc82a
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5ch
        ; Exact mapped bytes 74 11: je 0x4dc883
        __asm _emit 0x74
        __asm _emit 0x11
        push 4fh
        push 676a8ch
        ; Exact mapped bytes E8 C2 C4 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc883
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4dc867
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 8]
        cmp eax, 3
        ; Exact mapped bytes 7E 4C: jle 0x4dc8e0
        __asm _emit 0x7e
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 73 CE F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xce
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ch
        ; Exact mapped bytes 74 32: je 0x4dc8e0
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 59 CE F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xce
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4dc8d8
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 676a8ch
        ; Exact mapped bytes E8 6D C4 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc8d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DF: jne 0x4dc8bd
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes EB C3: jmp 0x4dc8a3
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ch
        ; Exact mapped bytes 74 11: je 0x4dc8fc
        __asm _emit 0x74
        __asm _emit 0x11
        push 5ah
        push 676a8ch
        ; Exact mapped bytes E8 49 C4 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc8fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4dc8e0
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 5]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7D 13: jge 0x4dc92d
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4dc9d1
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7F 11: jg 0x4dc952
        __asm _emit 0x7f
        __asm _emit 0x11
        push 69h
        push 676a8ch
        ; Exact mapped bytes E8 F3 C3 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc952
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4dc92d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 4]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 3D: jle 0x4dc9ab
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 99 CD F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcd
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4dc998
        __asm _emit 0x75
        __asm _emit 0x11
        push 6fh
        push 676a8ch
        ; Exact mapped bytes E8 AD C3 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc998
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DF: jne 0x4dc97d
        __asm _emit 0x75
        __asm _emit 0xdf
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 5ch
        ; Exact mapped bytes 75 C5: jne 0x4dc96e
        __asm _emit 0x75
        __asm _emit 0xc5
        ; Exact mapped bytes EB AD: jmp 0x4dc958
        __asm _emit 0xeb
        __asm _emit 0xad
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], 0
        push 676a9ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 E0 B9 68 00: call dword ptr [0x68b9e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E0 B9 68 00: call dword ptr [0x68b9e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
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
