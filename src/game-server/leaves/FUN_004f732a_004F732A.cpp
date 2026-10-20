// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F732A .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_004f732a_004F732A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f734d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0de8h
        push 5c5574h
        ; Exact mapped bytes E8 B8 D6 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f734d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f7333
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5c59c4h
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 5c59d4h
        ; Exact mapped bytes FF 15 28 24 5E 00: call dword ptr [0x5e2428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 04: jne 0x4f7379
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 79: jmp 0x4f73f2
        __asm _emit 0xeb
        __asm _emit 0x79
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        push 5c59e4h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1D: jne 0x4f73bc
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        and edx, 3fc0h
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 0D: jne 0x4f73ba
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes FF 15 3C 1E 5E 00: call dword ptr [0x5e1e3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 3fc0h
        ; Exact mapped bytes EB 29: jmp 0x4f73e5
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4f73e5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 12: jne 0x4f73e5
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes FF 15 3C 1E 5E 00: call dword ptr [0x5e1e3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        or edx, 3fc0h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 88 23 5E 00: call dword ptr [0x5e2388]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
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
