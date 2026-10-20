// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004351FA .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_004351fa_004351FA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 7ch], 0
        ; Exact mapped bytes 74 36: je 0x43523f
        __asm _emit 0x74
        __asm _emit 0x36
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 15 00 00: call 0x4367c3
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 53: je 0x43526a
        __asm _emit 0x74
        __asm _emit 0x53
        push edi
        lea eax, [ebp + 10h]
        push 4
        push eax
        push 4
        push 0
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes FF 15 08 C0 43 00: call dword ptr [0x43c008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        mov edi, eax
        ; Exact mapped bytes FF 15 00 C0 43 00: call dword ptr [0x43c000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        test edi, edi
        sete al
        pop edi
        ; Exact mapped bytes EB 2B: jmp 0x43526a
        __asm _emit 0xeb
        __asm _emit 0x2b
        push dword ptr [ebp + 10h]
        lea eax, [ebp - 10h]
        push 43e4a4h
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 10h]
        push dword ptr [esi + 90h]
        push eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 CC C1 43 00: call dword ptr [0x43c1cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
