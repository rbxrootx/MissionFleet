// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB820 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_587bb820_587BB820() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x587bb836
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 75 07: jne 0x587bb83d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x587bb8f8
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B B1 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb1
        __asm _emit 0xcc
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 07: je 0x587bb851
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x587bb8f8
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 5D: je 0x587bb8b7
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes 8B 0D 94 5F 96 58: mov ecx, dword ptr [0x58965f94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 94 5F 96 58: mov eax, dword ptr [0x58965f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x587bb8b5
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        add edx, 1ch
        push edx
        push 588d1a28h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x587bb8a4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0A: jmp 0x587bb8ae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov eax, 1
        ; Exact mapped bytes EB 43: jmp 0x587bb8f8
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes EB 3F: jmp 0x587bb8f6
        __asm _emit 0xeb
        __asm _emit 0x3f
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 36: je 0x587bb8f6
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes 8B 0D 98 5F 96 58: mov ecx, dword ptr [0x58965f98]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 98 5F 96 58: mov eax, dword ptr [0x58965f98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x587bb8f6
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], 0
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x587bb8f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
