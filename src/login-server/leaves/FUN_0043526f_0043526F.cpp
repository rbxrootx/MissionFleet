// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043526F .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_0043526f_0043526F() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes FF 15 28 C4 43 00: call dword ptr [0x43c428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 4C C5 43 00: mov esi, dword ptr [0x43c54c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        xor ebp, ebp
        mov ebx, 365h
        cmp edi, ebp
        ; Exact mapped bytes 74 16: je 0x4352a7
        __asm _emit 0x74
        __asm _emit 0x16
        push ebp
        push ebp
        push ebx
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 70: jne 0x43530b
        __asm _emit 0x75
        __asm _emit 0x70
        push edi
        ; Exact mapped bytes E8 5A B5 FF FF: call 0x4307fb
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        cmp edi, ebp
        ; Exact mapped bytes 75 EA: jne 0x435291
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes FF 15 0C C4 43 00: call dword ptr [0x43c40c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        cmp edi, ebp
        ; Exact mapped bytes 74 12: je 0x4352c5
        __asm _emit 0x74
        __asm _emit 0x12
        push ebp
        push ebp
        push ebx
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 4E: jne 0x43530b
        __asm _emit 0x75
        __asm _emit 0x4e
        push edi
        ; Exact mapped bytes E8 38 B5 FF FF: call 0x4307fb
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E8: jmp 0x4352ad
        __asm _emit 0xeb
        __asm _emit 0xe8
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes E8 72 B5 FF FF: call 0x430840
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebp
        ; Exact mapped bytes 75 04: jne 0x4352d6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x4352d9
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [eax + 1ch]
        push eax
        ; Exact mapped bytes FF 15 0C C5 43 00: call dword ptr [0x43c50c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        push ebp
        cmp edi, ebp
        ; Exact mapped bytes 74 11: je 0x4352f8
        __asm _emit 0x74
        __asm _emit 0x11
        push ebp
        push ebx
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x43530b
        __asm _emit 0x75
        __asm _emit 0x1b
        push edi
        ; Exact mapped bytes E8 05 B5 FF FF: call 0x4307fb
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E8: jmp 0x4352e0
        __asm _emit 0xeb
        __asm _emit 0xe8
        mov eax, dword ptr [esp + 14h]
        push 0e147h
        push 111h
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
