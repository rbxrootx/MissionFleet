// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10108FB0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_10108fb0_10108FB0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 74 70: je 0x1010902a
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x10108fde
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [esi + 50h]
        mov edi, dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 54h]
        add edi, edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [eax + 4], edi
        add edx, ecx
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 29: je 0x1010900e
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ecx + 34h]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10109002
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x10109009
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x10108fec
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x1010902a
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esi + 50h]
        mov edi, dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 54h]
        sub edi, edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [eax + 4], edi
        neg ecx
        add edx, ecx
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
