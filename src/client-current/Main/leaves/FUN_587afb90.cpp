// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFB90 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_587afb90() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push 14h
        cmp dword ptr [esi + 8], edi
        ; Exact mapped bytes 75 40: jne 0x587afbdd
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes E8 AC D0 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd0
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        cmp eax, edi
        ; Exact mapped bytes 74 24: je 0x587afbcd
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [eax + 10h], edi
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax], 58999e18h
        mov dword ptr [eax + 0ch], ecx
        inc dword ptr [esi + 0ch]
        pop edi
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        inc dword ptr [esi + 0ch]
        pop edi
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 6C D0 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        cmp eax, edi
        ; Exact mapped bytes 74 18: je 0x587afc01
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esp + 0ch]
        mov dword ptr [eax], 58999e18h
        mov dword ptr [eax + 10h], edi
        mov dword ptr [eax + 0ch], edx
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 4], edi
        ; Exact mapped bytes EB 02: jmp 0x587afc03
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [ecx + 8], eax
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 8]
        inc dword ptr [esi + 0ch]
        pop edi
        mov dword ptr [esi + 8], ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
