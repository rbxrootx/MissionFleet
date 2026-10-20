// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051270F .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_0051270f_0051270F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x512738
        __asm _emit 0x75
        __asm _emit 0x14
        push 245h
        push 673dc0h
        ; Exact mapped bytes E8 0D 66 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512738
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x51271b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x512763
        __asm _emit 0x75
        __asm _emit 0x14
        push 246h
        push 673dc0h
        ; Exact mapped bytes E8 E2 65 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512763
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51273e
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x512783
        __asm _emit 0x75
        __asm _emit 0x14
        push 247h
        push 673dc0h
        ; Exact mapped bytes E8 C2 65 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512783
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x512769
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x5127a5
        __asm _emit 0x75
        __asm _emit 0x14
        push 248h
        push 673dc0h
        ; Exact mapped bytes E8 A0 65 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5127a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x512789
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 34 7C FC FF: call 0x4da3e9
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1C: jne 0x5127da
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        push edx
        push 673e5ch
        ; Exact mapped bytes E8 45 DE F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xde
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x51287e
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 634aa0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 79 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5127ff
        __asm _emit 0x75
        __asm _emit 0x14
        push 252h
        push 673dc0h
        ; Exact mapped bytes E8 46 65 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5127ff
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5127da
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B4 F9 01 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 50800000h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x512850
        __asm _emit 0x75
        __asm _emit 0x16
        push 673e90h
        push 673ebch
        ; Exact mapped bytes E8 CC DD F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xdd
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x51287e
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x51287b
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 3A FC FF: call 0x4d62f5
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x51287b
        __asm _emit 0x74
        __asm _emit 0x11
        push 20h
        push 0
        push 200h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 62 3B FC FF: call 0x4d63dd
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
