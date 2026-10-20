// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883CAF9 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_5883caf9_5883CAF9() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        test esi, esi
        ; Exact mapped bytes 74 75: je 0x5883cb7b
        __asm _emit 0x74
        __asm _emit 0x75
        mov ebx, dword ptr [ebp + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 74 6E: je 0x5883cb7b
        __asm _emit 0x74
        __asm _emit 0x6e
        push ebx
        ; Exact mapped bytes E8 6D 46 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x5883cb7b
        __asm _emit 0x74
        __asm _emit 0x63
        push esi
        ; Exact mapped bytes E8 D2 9E 02 00: call 0x588669f0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 CC 4D 02 00: call 0x588618f0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        push ebx
        mov edi, eax
        ; Exact mapped bytes E8 C4 9E 02 00: call 0x588669f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 BE 4D 02 00: call 0x588618f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 10h
        mov ebx, eax
        test edi, edi
        ; Exact mapped bytes 74 2E: je 0x5883cb69
        __asm _emit 0x74
        __asm _emit 0x2e
        test ebx, ebx
        ; Exact mapped bytes 74 2A: je 0x5883cb69
        __asm _emit 0x74
        __asm _emit 0x2a
        push ebx
        push edi
        ; Exact mapped bytes E8 EA 1E 01 00: call 0x5884ea30
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5883cb56
        __asm _emit 0x74
        __asm _emit 0x07
        sub esi, edi
        add eax, esi
        mov dword ptr [ebp + 8], eax
        push edi
        ; Exact mapped bytes E8 A4 CA 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 9E CA 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 14: jmp 0x5883cb7d
        __asm _emit 0xeb
        __asm _emit 0x14
        push edi
        ; Exact mapped bytes E8 91 CA 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 8B CA 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x5883cb7d
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
