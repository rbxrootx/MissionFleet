// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054AAA4 .. +0x1CD bytes.
extern "C" __declspec(naked) void FUN_0054aaa4_0054AAA4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 4C: call dword ptr [edx + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x4c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x54aad0
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x54ac68
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x54aaf8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f5h
        push 678964h
        ; Exact mapped bytes E8 4D E2 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54aaf8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54aade
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes A1 30 0D 64 00: mov eax, dword ptr [0x640d30]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 33: jne 0x54ab43
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 3B 15 34 0D 64 00: cmp edx, dword ptr [0x640d34]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x54ab43
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 3B 0D 38 0D 64 00: cmp ecx, dword ptr [0x640d38]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 75 17: jne 0x54ab43
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 3B 05 3C 0D 64 00: cmp eax, dword ptr [0x640d3c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x54ab43
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 07: jmp 0x54ab4a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 6D: je 0x54abc3
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x54ab79
        __asm _emit 0x75
        __asm _emit 0x14
        push 102h
        push 678964h
        ; Exact mapped bytes E8 CC E1 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ab79
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54ab5f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 27: je 0x54abae
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 08: je 0x54aba3
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x54ac68
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 8
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB D1: jmp 0x54ab7f
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 9A: jne 0x54ab56
        __asm _emit 0x75
        __asm _emit 0x9a
        xor eax, eax
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x54ac68
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x54abe6
        __asm _emit 0x75
        __asm _emit 0x14
        push 11dh
        push 678964h
        ; Exact mapped bytes E8 5F E1 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54abe6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x54abcc
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 60: je 0x54ac54
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 49: jne 0x54ac49
        __asm _emit 0x75
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 39: jne 0x54ac49
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 29: jne 0x54ac49
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 0ch]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 75 19: jne 0x54ac49
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 05: je 0x54ac49
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 1F: jmp 0x54ac68
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 8
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 98: jmp 0x54abec
        __asm _emit 0xeb
        __asm _emit 0x98
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x54abc3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
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
