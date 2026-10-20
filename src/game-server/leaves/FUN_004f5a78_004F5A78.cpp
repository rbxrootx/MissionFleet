// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F5A78 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_004f5a78_004F5A78() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x4f5aa9
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f5aa9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a5fh
        push 5c5574h
        ; Exact mapped bytes E8 5C EF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f5aa9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4f5a81
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f5ac9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a60h
        push 5c5574h
        ; Exact mapped bytes E8 3C EF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f5ac9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4f5aaf
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0D: jmp 0x4f5ae6
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3B: je 0x4f5b27
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 0F BF FF FF: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1D: je 0x4f5b1b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 98 00 00 00: call dword ptr [eax + 0x98]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4f5b1b
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 0E: jmp 0x4f5b29
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x4f5b25
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4f5b27
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B2: jmp 0x4f5ad9
        __asm _emit 0xeb
        __asm _emit 0xb2
        xor eax, eax
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
