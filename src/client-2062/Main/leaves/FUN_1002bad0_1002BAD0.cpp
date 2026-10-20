// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BAD0 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_1002bad0_1002BAD0() {
    __asm {
        push esi
        mov esi, ecx
        push 0ch
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 4A: jne 0x1002bb26
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes E8 BF 0C 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x1002bb10
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax], 0
        mov dword ptr [eax + 4], 0
        mov dword ptr [eax + 8], ecx
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [esi + 4]
        inc eax
        mov dword ptr [esi + 4], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 8], eax
        mov eax, dword ptr [esi + 4]
        inc eax
        mov dword ptr [esi + 4], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 75 0C 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x1002bb48
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], 0
        mov dword ptr [eax + 4], 0
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 02: jmp 0x1002bb4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0ch]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esi + 0ch]
        mov edx, dword ptr [eax]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esi + 4]
        inc eax
        mov dword ptr [esi + 0ch], ecx
        mov dword ptr [esi + 4], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
