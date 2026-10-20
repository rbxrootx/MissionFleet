// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CEE40 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_584cee40_584CEE40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f230h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 128h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], 0
        push 104h
        push 0
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 88 DF 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xdf
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        push 104h
        lea ecx, [ebp - 114h]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 E4 42 89 58: call dword ptr [0x588942e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp - 114h]
        push edx
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 1F AC FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push -1
        push 58898864h
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 06 0E 00 00: call 0x584cfcd0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        cmp dword ptr [ebp - 130h], -1
        ; Exact mapped bytes 74 13: je 0x584ceeec
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 130h]
        push eax
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 85 0D 00 00: call 0x584cfc70
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 63 FF FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 134h]
        or edx, 1
        mov dword ptr [ebp - 134h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 14 AE FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 1C 21 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x21
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
