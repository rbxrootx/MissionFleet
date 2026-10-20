// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F800 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_0040f800_0040F800() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push 10h
        push eax
        mov ecx, dword ptr [esi + 58h]
        push ecx
        ; Exact mapped bytes FF 15 C0 C5 43 00: call dword ptr [0x43c5c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x40f82d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        push 0
        push 4499c8h
        ; Exact mapped bytes E8 F0 54 02 00: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1ch]
        mov eax, dword ptr [esi + 58h]
        push 8
        push 464h
        push edx
        push eax
        ; Exact mapped bytes FF 15 B4 C5 43 00: call dword ptr [0x43c5b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x40f85b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        push 0
        push 4499b0h
        ; Exact mapped bytes E8 C2 54 02 00: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        push 7fffffffh
        push ecx
        ; Exact mapped bytes FF 15 BC C5 43 00: call dword ptr [0x43c5bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x40f883
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        push 0
        push 4499a0h
        ; Exact mapped bytes E8 9A 54 02 00: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
