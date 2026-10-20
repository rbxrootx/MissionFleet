// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F731E .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_004f731e_004F731E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4f7341
        __asm _emit 0x75
        __asm _emit 0x11
        push 24h
        push 672eech
        ; Exact mapped bytes E8 04 1A 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7341
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4f732a
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 11: jne 0x4f735e
        __asm _emit 0x75
        __asm _emit 0x11
        push 25h
        push 672eech
        ; Exact mapped bytes E8 E7 19 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f735e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4f7347
        __asm _emit 0x75
        __asm _emit 0xe3
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 6C EA FD FF: call 0x4d5de3
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 36: jne 0x4f73b3
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 8]
        push edx
        push 672ef8h
        ; Exact mapped bytes E8 8A 92 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4f73a8
        __asm _emit 0x74
        __asm _emit 0x11
        push 2bh
        push 672eech
        ; Exact mapped bytes E8 9D 19 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f73a8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f738e
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 46 BB FA FF: call 0x4a2ef9
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x4f73dd
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 672eech
        ; Exact mapped bytes E8 68 19 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f73dd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x4f73c6
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
