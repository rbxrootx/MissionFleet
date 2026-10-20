// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588667F0 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_588667f0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        cmp eax, 2
        ; Exact mapped bytes 75 33: jne 0x5886682c
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [esp + 4]
        cmp dword ptr [ecx + 9ch], eax
        ; Exact mapped bytes 75 0C: jne 0x58866811
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [ecx + 98h], eax
        ; Exact mapped bytes 75 48: jne 0x58866861
        __asm _emit 0x75
        __asm _emit 0x48
        cmp dword ptr [ecx + 1f40h], -1
        ; Exact mapped bytes 74 3F: je 0x58866861
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes E8 79 FF FF FF: call 0x588667a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 35: jne 0x58866866
        __asm _emit 0x75
        __asm _emit 0x35
        push esi
        mov esi, dword ptr [esp + 8]
        cmp esi, dword ptr [ecx + 9ch]
        ; Exact mapped bytes 75 22: jne 0x58866860
        __asm _emit 0x75
        __asm _emit 0x22
        push 5899eca4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        push 32h
        push 0c8h
        push esi
        ; Exact mapped bytes E8 60 BE EF FF: call 0x587626c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xbe
        __asm _emit 0xef
        __asm _emit 0xff
        pop esi
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 F6: jne 0x58866861
        __asm _emit 0x75
        __asm _emit 0xf6
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 95 BD EF FF: call 0x58762610
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xbd
        __asm _emit 0xef
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
