// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10084330 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_10084330_10084330() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 800h
        test eax, eax
        push esi
        mov esi, dword ptr [esp + 80ch]
        push edi
        mov edi, ecx
        ; Exact mapped bytes 77 04: ja 0x1008434d
        __asm _emit 0x77
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 76 6B: jbe 0x100843b8
        __asm _emit 0x76
        __asm _emit 0x6b
        ; Exact mapped bytes 3B 05 3C D1 1A 10: cmp eax, dword ptr [0x101ad13c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 75 63: jne 0x100843b8
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 3B 35 40 D1 1A 10: cmp esi, dword ptr [0x101ad140]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 75 5B: jne 0x100843b8
        __asm _emit 0x75
        __asm _emit 0x5b
        mov eax, dword ptr [esp + 818h]
        cmp eax, 800h
        ; Exact mapped bytes 72 14: jb 0x1008437f
        __asm _emit 0x72
        __asm _emit 0x14
        mov eax, dword ptr [esp + 814h]
        push 800h
        lea ecx, [esp + 0ch]
        push eax
        push ecx
        ; Exact mapped bytes EB 0F: jmp 0x1008438e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [esp + 814h]
        inc eax
        push eax
        lea eax, [esp + 0ch]
        push edx
        push eax
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 8]
        test esi, esi
        push ecx
        ; Exact mapped bytes 74 08: je 0x100843a5
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [edi + 88h]
        ; Exact mapped bytes EB 06: jmp 0x100843ab
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [edi + 0a8h]
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        add esp, 800h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
