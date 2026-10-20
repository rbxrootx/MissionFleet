// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F8B0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_0040f8b0_0040F8B0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push edi
        cmp edx, -1
        mov edi, ecx
        ; Exact mapped bytes 74 60: je 0x40f91c
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, edx
        and eax, 0ffffh
        push esi
        xor ecx, ecx
        lea esi, [edi + eax*4 + 0c30h]
        mov eax, dword ptr [edi + eax*4 + 0c30h]
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x40f901
        __asm _emit 0x74
        __asm _emit 0x29
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 74 0B: je 0x40f8e7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, eax
        mov eax, dword ptr [eax + 8]
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x40f8d8
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes EB 1A: jmp 0x40f901
        __asm _emit 0xeb
        __asm _emit 0x1a
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x40f8f2
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi], ecx
        ; Exact mapped bytes EB 06: jmp 0x40f8f8
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        push eax
        ; Exact mapped bytes E8 17 E0 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [edi + 0bb4h]
        pop esi
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x40f913
        __asm _emit 0x74
        __asm _emit 0x07
        dec eax
        mov dword ptr [edi + 0bb4h], eax
        mov eax, 1
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
