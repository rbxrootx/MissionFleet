// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468000 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_00468000_00468000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x468013
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x468120
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 20h
        mov eax, dword ptr [ebp + 8]
        sub eax, 20h
        push eax
        ; Exact mapped bytes E8 8D FF FF FF: call 0x467fb0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x468031
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x468120
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 89 68 00 03: cmp dword ptr [0x688998], 3
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 64: jne 0x46809e
        __asm _emit 0x75
        __asm _emit 0x64
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        push ecx
        ; Exact mapped bytes E8 CA AD 00 00: call 0x472e10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x46806a
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        sub edx, 20h
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 0E AE 00 00: call 0x472e70
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x468120
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 38 72 68 00: mov ecx, dword ptr [0x687238]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x468084
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x468120
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sub edx, 20h
        push edx
        push 0
        ; Exact mapped bytes A1 88 89 68 00: mov eax, dword ptr [0x688988]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 BC B8 68 00: call dword ptr [0x68b8bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x468120
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 89 68 00 02: cmp dword ptr [0x688998], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 63: jne 0x46810a
        __asm _emit 0x75
        __asm _emit 0x63
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 20h
        push eax
        ; Exact mapped bytes E8 75 CD 00 00: call 0x474e30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 16: je 0x4680dd
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x4680d9
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 47: jmp 0x468120
        __asm _emit 0xeb
        __asm _emit 0x47
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x468120
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes A1 38 72 68 00: mov eax, dword ptr [0x687238]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4680f2
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 2E: jmp 0x468120
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        push ecx
        push 0
        ; Exact mapped bytes 8B 15 88 89 68 00: mov edx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 BC B8 68 00: call dword ptr [0x68b8bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x468120
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        sub eax, 20h
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 88 89 68 00: mov ecx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 BC B8 68 00: call dword ptr [0x68b8bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
