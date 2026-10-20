// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ECB52 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_004ecb52_004ECB52() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 67 B2 03 00: call 0x527dcd
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb2
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x4ecb84
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 07: jmp 0x4ecb8b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 75 19: jne 0x4ecbb9
        __asm _emit 0x75
        __asm _emit 0x19
        push 676c74h
        push 676cb0h
        ; Exact mapped bytes E8 66 3A FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x3a
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x4ecc49
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 75 14: jne 0x4ecbd6
        __asm _emit 0x75
        __asm _emit 0x14
        push 131h
        push 676ad0h
        ; Exact mapped bytes E8 6F C1 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ecbd6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4ecbb9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 02 D8 FE FF: call 0x4da3e9
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1A: jne 0x4ecc0a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 58h]
        mov edx, dword ptr [ecx]
        push edx
        push 676cb4h
        ; Exact mapped bytes E8 12 3A FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x3a
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 3F: jmp 0x4ecc49
        __asm _emit 0xeb
        __asm _emit 0x3f
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 44000000h
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 40h]
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
        ; Exact mapped bytes 75 16: jne 0x4ecc46
        __asm _emit 0x75
        __asm _emit 0x16
        push 676ce4h
        push 676d1ch
        ; Exact mapped bytes E8 D6 39 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x4ecc49
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
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
