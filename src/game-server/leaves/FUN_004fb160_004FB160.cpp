// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB160 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_004fb160_004FB160() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 29: jne 0x4fb195
        __asm _emit 0x75
        __asm _emit 0x29
        push 5c74fch
        push 5c7524h
        ; Exact mapped bytes E8 9A 4A FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 75 98 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb190
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x4fb263
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 4
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B4 4C FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x4fb1cf
        __asm _emit 0x75
        __asm _emit 0x29
        push 5c7528h
        push 5c7554h
        ; Exact mapped bytes E8 60 4A FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 3B 98 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb1ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x4fb263
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x4fb1d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x4fb1cf
        __asm _emit 0x75
        __asm _emit 0xf3
        push 0
        push 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 6B 4C FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x4fb215
        __asm _emit 0x75
        __asm _emit 0x26
        push 5c7558h
        push 5c758ch
        ; Exact mapped bytes E8 17 4A FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 F2 97 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb213
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes EB 4E: jmp 0x4fb263
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 28 4C FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x4fb258
        __asm _emit 0x75
        __asm _emit 0x26
        push 5c7590h
        push 5c75bch
        ; Exact mapped bytes E8 D4 49 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 AF 97 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb256
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes EB 0B: jmp 0x4fb263
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
