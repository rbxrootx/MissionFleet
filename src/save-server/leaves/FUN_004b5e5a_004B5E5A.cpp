// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5E5A .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_004b5e5a_004B5E5A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e1b4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 16: je 0x4b5e98
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 75 06: jne 0x4b5e8e
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 0A: jl 0x4b5e98
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov eax, 80004001h
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x4b5f76
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 8A F8 06 00: call 0x52572d
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 0A: jne 0x4b5eb6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004001h
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x4b5f76
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 14 48 03 00: call 0x4ea6d5
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x4b5ec8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x4b5ec1
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4b5ed5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4b5ece
        __asm _emit 0x75
        __asm _emit 0xf3
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b5ee2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x4b5edb
        __asm _emit 0x75
        __asm _emit 0xf3
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 48: jmp 0x4b5f55
        __asm _emit 0xeb
        __asm _emit 0x48
        push 636e20h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 76 42 02 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4b5f2f
        __asm _emit 0x75
        __asm _emit 0x11
        push 78h
        push 6778e0h
        ; Exact mapped bytes E8 16 2E 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b5f2f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4b5f0d
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5B 40 02 00: call 0x4d9f98
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        test eax, eax
    }
}
