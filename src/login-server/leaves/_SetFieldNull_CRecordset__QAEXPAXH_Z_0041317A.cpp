// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041317A .. +0x5F bytes.
extern "C" __declspec(naked) void _SetFieldNull_CRecordset__QAEXPAXH_Z_0041317A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        cmp dword ptr [ebp + 8], 0
        push esi
        mov esi, ecx
        ; Exact mapped bytes 74 22: je 0x4131ab
        __asm _emit 0x74
        __asm _emit 0x22
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 1A 00 00: call 0x414c11
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 78 17: js 0x4131ab
        __asm _emit 0x78
        __asm _emit 0x17
        cmp dword ptr [ebp + 0ch], 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes 74 07: je 0x4131a4
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 BD 1B 00 00: call 0x414d5f
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x4131d4
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes E8 C8 1B 00 00: call 0x414d71
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x4131d4
        __asm _emit 0xeb
        __asm _emit 0x29
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 76 23: jbe 0x4131d4
        __asm _emit 0x76
        __asm _emit 0x23
        push dword ptr [ebp + 8]
        lea ecx, [ebp - 38h]
        push esi
        push 0bh
        ; Exact mapped bytes E8 B0 22 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and dword ptr [ebp - 2ch], 0
        lea ecx, [ebp - 38h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
