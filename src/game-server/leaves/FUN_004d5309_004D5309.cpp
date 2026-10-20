// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5309 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_004d5309_004D5309() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cee5h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes 75 14: jne 0x4d534f
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f6h
        push 5c64b4h
        ; Exact mapped bytes E8 B6 F6 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d534f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d532a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 1112h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 04: jne 0x4d537a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 75: jmp 0x4d53ef
        __asm _emit 0xeb
        __asm _emit 0x75
        push 2fdh
        push 5c64b4h
        push 8
        ; Exact mapped bytes E8 D4 7C 01 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x4d53a8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6E 0D 00 00: call 0x4d6111
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4d53af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6B 10 00 00: call 0x4d6439
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d53e6
        __asm _emit 0x75
        __asm _emit 0x14
        push 2feh
        push 5c64b4h
        ; Exact mapped bytes E8 1F F6 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d53e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4d53c2
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
