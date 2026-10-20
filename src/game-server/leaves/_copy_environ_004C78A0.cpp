// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C78A0 .. +0xEE bytes.
extern "C" __declspec(naked) void _copy_environ_004C78A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4c78c0
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x4c798a
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        add eax, 4
        mov dword ptr [ebp - 0ch], eax
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x4c78dd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB E3: jmp 0x4c78c0
        __asm _emit 0xeb
        __asm _emit 0xe3
        push 146h
        push 58d5a0h
        push 2
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx*4 + 4]
        push eax
        ; Exact mapped bytes E8 37 29 FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x4c7915
        __asm _emit 0x75
        __asm _emit 0x0a
        push 9
        ; Exact mapped bytes E8 2E 54 FE FF: call 0x4acd40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 5B: je 0x4c797e
        __asm _emit 0x74
        __asm _emit 0x5b
        push 14fh
        push 58d5a0h
        push 2
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 96 1A FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        ; Exact mapped bytes E8 EA 28 FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 14: je 0x4c796a
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 D9 24 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 9D: jmp 0x4c791b
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
