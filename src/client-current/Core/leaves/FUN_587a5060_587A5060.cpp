// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5060 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_587a5060_587A5060() {
    __asm {
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 10h], eax
        push ebx
        mov ebx, dword ptr [esp + 28h]
        push esi
        mov esi, dword ptr [esp + 20h]
        cmp ebx, 2
        ; Exact mapped bytes 7C 0E: jl 0x587a508b
        __asm _emit 0x7c
        __asm _emit 0x0e
        push 588b8f8ch
        push esi
        ; Exact mapped bytes E8 A8 A3 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push dword ptr [esp + 24h]
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes E8 77 B9 FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esp + 30h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 69 B9 FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov byte ptr [esp + 14h], bl
        test esi, esi
        ; Exact mapped bytes 74 66: je 0x587a5118
        __asm _emit 0x74
        __asm _emit 0x66
        push 9
        push 6f464673h
        push esi
        ; Exact mapped bytes E8 A1 EC FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 9
        lea eax, [esp + 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 F4 17 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        lea eax, [esp + 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 D7 A4 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 2ch], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 2dh], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 2eh], al
        lea eax, [esp + 2ch]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 3bh], cl
        ; Exact mapped bytes E8 AB 17 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        mov ecx, dword ptr [esp + 18h]
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 2B BF 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbf
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}
