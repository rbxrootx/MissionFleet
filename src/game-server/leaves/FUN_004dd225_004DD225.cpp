// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DD225 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_004dd225_004DD225() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4dd256
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a3h
        push 5c6c98h
        ; Exact mapped bytes E8 AF 77 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd256
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4dd231
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 3C: jne 0x4dd2a4
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FD 01 00 00: call 0x4dd46d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4dd28d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0abh
        push 5c6ca8h
        ; Exact mapped bytes E8 78 77 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd28d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4dd273
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x4dd2a4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B3 D7 FF FF: call 0x4daa54
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 04: jne 0x4dd2ae
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4A: jmp 0x4dd2f8
        __asm _emit 0xeb
        __asm _emit 0x4a
        push 1
        mov edx, dword ptr [ebp - 4]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 96 2B FF FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4dd2d8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b2h
        push 5c6cb8h
        ; Exact mapped bytes E8 2D 77 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd2d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4dd2ae
        __asm _emit 0x75
        __asm _emit 0xd0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        push 103bh
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
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
