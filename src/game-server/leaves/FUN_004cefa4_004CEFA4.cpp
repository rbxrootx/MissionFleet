// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEFA4 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_004cefa4_004CEFA4() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x4cefda
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 94 0E 00 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4cefda
        __asm _emit 0x75
        __asm _emit 0x14
        push 3aah
        push 5c4c5ch
        ; Exact mapped bytes E8 2B 5A 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cefda
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4cefaa
        __asm _emit 0x75
        __asm _emit 0xca
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x4cf010
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 5E 0E 00 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4cf010
        __asm _emit 0x75
        __asm _emit 0x14
        push 3ach
        push 5c4c5ch
        ; Exact mapped bytes E8 F5 59 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf010
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4cefe0
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 12: jmp 0x4cf02a
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        mov dword ptr [ebp + 10h], eax
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x4cf048
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 00 EA 01 00: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB D0: jmp 0x4cf018
        __asm _emit 0xeb
        __asm _emit 0xd0
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
