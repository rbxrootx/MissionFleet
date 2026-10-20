// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC9E8 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_004ec9e8_004EC9E8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x4eca0d
        __asm _emit 0x74
        __asm _emit 0x13
        push 0f8h
        push 676ad0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 53 D8 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 75 14: jne 0x4eca2a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fbh
        push 676ad0h
        ; Exact mapped bytes E8 1B C3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eca2a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4eca0d
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 95 B3 03 00: call 0x527dcd
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 75 3C: jne 0x4eca98
        __asm _emit 0x75
        __asm _emit 0x3c
        push 676ba0h
        push 676bd8h
        ; Exact mapped bytes E8 AA 3B FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4eca8b
        __asm _emit 0x74
        __asm _emit 0x14
        push 105h
        push 676ad0h
        ; Exact mapped bytes E8 BA C2 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eca8b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4eca6e
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x4ecb49
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 46 D9 FE FF: call 0x4da3e9
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1D: jne 0x4ecac9
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx]
        push edx
        push 676bdch
        ; Exact mapped bytes E8 56 3B FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x4ecb49
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 636f38h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA D6 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ecaee
        __asm _emit 0x75
        __asm _emit 0x14
        push 10fh
        push 676ad0h
        ; Exact mapped bytes E8 57 C2 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ecaee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4ecac9
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 12: jne 0x4ecb0c
        __asm _emit 0x75
        __asm _emit 0x12
        push 676c0ch
        push 676c3ch
        ; Exact mapped bytes E8 0C 3B FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 18h]
        push ecx
        push 0
        push 0cf8000h
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 3ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4ecb46
        __asm _emit 0x75
        __asm _emit 0x16
        push 676c40h
        push 676c70h
        ; Exact mapped bytes E8 D6 3A FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3a
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x4ecb49
        __asm _emit 0xeb
        __asm _emit 0x03
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
