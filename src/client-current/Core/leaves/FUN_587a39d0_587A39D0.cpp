// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A39D0 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_587a39d0_587A39D0() {
    __asm {
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 24h], eax
        push esi
        mov esi, dword ptr [esp + 34h]
        lea eax, [esp + 8]
        push edi
        mov edi, dword ptr [esp + 34h]
        push dword ptr [esi + 18h]
        push eax
        ; Exact mapped bytes E8 1B D0 FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 1ch]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 0E D0 FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi]
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes E8 02 D0 FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 4]
        lea eax, [esp + 34h]
        push eax
        ; Exact mapped bytes E8 F5 CF FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 8]
        lea eax, [esp + 40h]
        push eax
        ; Exact mapped bytes E8 E8 CF FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 0ch]
        lea eax, [esp + 4ch]
        push eax
        ; Exact mapped bytes E8 DB CF FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 10h]
        lea eax, [esp + 58h]
        push eax
        ; Exact mapped bytes E8 CE CF FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 14h]
        lea eax, [esp + 64h]
        push eax
        ; Exact mapped bytes E8 C1 CF FF FF: call 0x587a0a10
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 40h
        test edi, edi
        ; Exact mapped bytes 74 66: je 0x587a3abc
        __asm _emit 0x74
        __asm _emit 0x66
        push 20h
        push 6348524dh
        push edi
        ; Exact mapped bytes E8 FD 02 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        lea eax, [esp + 1ch]
        push eax
        push edi
        ; Exact mapped bytes E8 50 2E 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        lea eax, [esp + 28h]
        push eax
        push edi
        ; Exact mapped bytes E8 33 BB FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 13ch]
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
        push edi
        mov dword ptr [edi + 2dch], 82h
        mov byte ptr [esp + 3bh], cl
        ; Exact mapped bytes E8 07 2E 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        mov ecx, dword ptr [esp + 2ch]
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 87 D5 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd5
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 28h
        ret
    }
}
