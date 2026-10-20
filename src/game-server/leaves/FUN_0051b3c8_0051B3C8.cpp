// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B3C8 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_0051b3c8_0051B3C8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0e2h
        push 5cb0ach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 79 FD FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x51b40d
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 74 1A: je 0x51b40d
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 14: je 0x51b40d
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e3h
        push 5cb0ach
        ; Exact mapped bytes E8 F8 95 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b40d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x51b3e7
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x51b42a
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 2A: jmp 0x51b454
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 0B: jne 0x51b43b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 19: jmp 0x51b454
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 0E: jne 0x51b44f
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 05: jmp 0x51b454
        __asm _emit 0xeb
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 33: jmp 0x51b487
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 0B: jge 0x51b465
        __asm _emit 0x7d
        __asm _emit 0x0b
        push 0
        push -1
        push 9
        ; Exact mapped bytes E8 4B 06 FE FF: call 0x4fbab0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], eax
        push 0f5h
        push 5cb0ach
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 DF FC FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
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
