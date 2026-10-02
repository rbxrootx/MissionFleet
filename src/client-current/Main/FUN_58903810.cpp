// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 138 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903810 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_58903810_segment_00() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 24 85 A2 58: mov eax, dword ptr [0x58a28524]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 50h], 0
        push esi
        mov esi, ecx
        ; Exact mapped bytes 74 08: je 0x58903827
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 50h]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x58903829
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [eax]
        lea edx, [esp + 4]
        push edx
        push eax
        mov eax, dword ptr [ecx + 44h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 5B: jne 0x58903895
        __asm _emit 0x75
        __asm _emit 0x5b
        mov ecx, dword ptr [esi + 0ch]
        mov edx, dword ptr [esp + 4]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 74 C0 98 58: call dword ptr [0x5898c074]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 0ch]
        push eax
        mov eax, dword ptr [esp + 8]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF 15 48 C0 98 58: call dword ptr [0x5898c048]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 24 85 A2 58: mov eax, dword ptr [0x58a28524]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 18: je 0x58903886
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [eax + 50h]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 68h]
        push ecx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 68h]
        push ecx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
