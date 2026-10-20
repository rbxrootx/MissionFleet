// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FD690 .. +0x24A bytes.
extern "C" __declspec(naked) void FUN_004fd690_004FD690() {
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
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6B C0 04 00: call 0x549724
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x04
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
        ; Exact mapped bytes 7C 05: jl 0x4fd6da
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 F7 01 00 00: jmp 0x4fd8d1
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 28: jge 0x4fd70a
        __asm _emit 0x7d
        __asm _emit 0x28
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x4fd6f0
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x4fd6f7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 5dcbech
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 C7 01 00 00: jmp 0x4fd8d1
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
        ; Exact mapped bytes 75 49: jne 0x4fd767
        __asm _emit 0x75
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        cmp edx, 5ch
        ; Exact mapped bytes 75 3D: jne 0x4fd767
        __asm _emit 0x75
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5ch
        ; Exact mapped bytes 74 32: je 0x4fd767
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 42 F9 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x4fd75f
        __asm _emit 0x75
        __asm _emit 0x11
        push 4bh
        push 5ca304h
        ; Exact mapped bytes E8 A6 72 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd75f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DF: jne 0x4fd744
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes EB C3: jmp 0x4fd72a
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5ch
        ; Exact mapped bytes 74 11: je 0x4fd783
        __asm _emit 0x74
        __asm _emit 0x11
        push 4fh
        push 5ca304h
        ; Exact mapped bytes E8 82 72 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd783
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4fd767
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 8]
        cmp eax, 3
        ; Exact mapped bytes 7E 4C: jle 0x4fd7e0
        __asm _emit 0x7e
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 E3 F8 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ch
        ; Exact mapped bytes 74 32: je 0x4fd7e0
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 C9 F8 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4fd7d8
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 5ca304h
        ; Exact mapped bytes E8 2D 72 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd7d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DF: jne 0x4fd7bd
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes EB C3: jmp 0x4fd7a3
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ch
        ; Exact mapped bytes 74 11: je 0x4fd7fc
        __asm _emit 0x74
        __asm _emit 0x11
        push 5ah
        push 5ca304h
        ; Exact mapped bytes E8 09 72 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd7fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4fd7e0
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 5]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7D 13: jge 0x4fd82d
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4fd8d1
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7F 11: jg 0x4fd852
        __asm _emit 0x7f
        __asm _emit 0x11
        push 69h
        push 5ca304h
        ; Exact mapped bytes E8 B3 71 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd852
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4fd82d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 4]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 3D: jle 0x4fd8ab
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 09 F8 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4fd898
        __asm _emit 0x75
        __asm _emit 0x11
        push 6fh
        push 5ca304h
        ; Exact mapped bytes E8 6D 71 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd898
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DF: jne 0x4fd87d
        __asm _emit 0x75
        __asm _emit 0xdf
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 5ch
        ; Exact mapped bytes 75 C5: jne 0x4fd86e
        __asm _emit 0x75
        __asm _emit 0xc5
        ; Exact mapped bytes EB AD: jmp 0x4fd858
        __asm _emit 0xeb
        __asm _emit 0xad
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], 0
        push 5ca314h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 90 23 5E 00: call dword ptr [0x5e2390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 90 23 5E 00: call dword ptr [0x5e2390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x5e
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
