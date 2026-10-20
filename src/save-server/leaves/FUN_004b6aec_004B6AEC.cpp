// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B6AEC .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_004b6aec_004B6AEC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 1D: je 0x4b6b1b
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 0ch], 400h
        ; Exact mapped bytes 74 14: je 0x4b6b1b
        __asm _emit 0x74
        __asm _emit 0x14
        push 117h
        push 677e8ch
        ; Exact mapped bytes E8 2A 22 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b6b1b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4b6af8
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes E8 4F 96 08 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x4b6bd4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 24h]
        and ecx, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 0A: jne 0x4b6b56
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x4b6c0a
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 75 07: jne 0x4b6b6b
        __asm _emit 0x75
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 82 A3 01 00: call 0x4d0eed
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 39 4A 07 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4a
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x4b6bba
        __asm _emit 0x74
        __asm _emit 0x43
        push 2ch
        push 0
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 3C ED FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 34h], 28h
        mov dword ptr [ebp - 30h], 1
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 34h]
        push eax
        push 0
        push 405h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7F 4A 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x4a
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        not ecx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 24h]
        and eax, ecx
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 24h], eax
        mov eax, 1
        ; Exact mapped bytes EB 36: jmp 0x4b6c0a
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 24h]
        and eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x4b6c05
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes E8 7D 9A 08 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 1034h], 4b6cdeh
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 24h]
        or eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 24h], eax
        mov eax, 1
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
