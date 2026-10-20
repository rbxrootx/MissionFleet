// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416040 .. +0x1BE bytes.
extern "C" __declspec(naked) void FUN_00416040_00416040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3dch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3dch]
        mov ecx, 0f7h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 394h], 18h
        mov dword ptr [ebp - 398h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 39ch], ecx
        lea edx, [ebp - 394h]
        push edx
        lea eax, [ebp - 398h]
        push eax
        lea ecx, [ebp - 39ch]
        push ecx
        ; Exact mapped bytes E8 79 B2 FE FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x4161cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 C1 B6 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        cmp dword ptr [ebp - 384h], -1
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x4161cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 384h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 B7 B9 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        cmp dword ptr [ebp - 388h], -1
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x4161cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x416112
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38ch]
        add eax, 1
        mov dword ptr [ebp - 38ch], eax
        cmp dword ptr [ebp - 38ch], 64h
        ; Exact mapped bytes 0F 8D B0 00 00 00: jge 0x4161cf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        mov edx, dword ptr [ebp - 388h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 23 B5 FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 390h], eax
        cmp dword ptr [ebp - 390h], -1
        ; Exact mapped bytes 74 56: je 0x4161a0
        __asm _emit 0x74
        __asm _emit 0x56
        push 37ch
        lea ecx, [ebp - 380h]
        push ecx
        mov edx, dword ptr [ebp - 390h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 9B B7 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 2c0h], 0
        ; Exact mapped bytes 74 2A: je 0x41619e
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 38ch]
        push ecx
        push 1
        push 80021034h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 3F 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 4A: jmp 0x4161e8
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes EB 2A: jmp 0x4161ca
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 38ch]
        push edx
        push 1
        push 80021034h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 3F 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 1E: jmp 0x4161e8
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x416103
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80021034h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 3F 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 3dch
        cmp ebp, esp
        ; Exact mapped bytes E8 F8 EB 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xeb
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
