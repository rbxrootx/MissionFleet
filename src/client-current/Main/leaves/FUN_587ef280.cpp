// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EF280 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_587ef280() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push 14h
        cmp dword ptr [esi + 8], edi
        ; Exact mapped bytes 75 4E: jne 0x587ef2db
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes E8 BC D9 18 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        cmp eax, edi
        ; Exact mapped bytes 74 2B: je 0x587ef2c4
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [esp + 0ch]
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax + 10h], edi
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax], 5899bd90h
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [eax + 10h], edx
        inc dword ptr [esi + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        xor eax, eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [eax + 10h], edx
        inc dword ptr [esi + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E8 6E D9 18 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        cmp eax, edi
        ; Exact mapped bytes 74 18: je 0x587ef2ff
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [eax], 5899bd90h
        mov dword ptr [eax + 10h], edi
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 8], edi
        mov dword ptr [eax + 4], edi
        ; Exact mapped bytes EB 02: jmp 0x587ef301
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 8]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 8], eax
        mov dword ptr [eax + 10h], ecx
        inc dword ptr [esi + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
