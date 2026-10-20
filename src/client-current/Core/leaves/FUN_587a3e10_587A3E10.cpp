// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3E10 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_587a3e10_587A3E10() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 7C: je 0x587a3e95
        __asm _emit 0x74
        __asm _emit 0x7c
        push edi
        mov edi, dword ptr [esp + 18h]
        cmp edi, 7fffffffh
        ; Exact mapped bytes 77 71: ja 0x587a3e97
        __asm _emit 0x77
        __asm _emit 0x71
        push ebx
        push edi
        push dword ptr [esp + 18h]
        push esi
        ; Exact mapped bytes E8 2E FF FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 24h]
        add esp, 0ch
        test ebx, ebx
        ; Exact mapped bytes 74 17: je 0x587a3e54
        __asm _emit 0x74
        __asm _emit 0x17
        test edi, edi
        ; Exact mapped bytes 74 13: je 0x587a3e54
        __asm _emit 0x74
        __asm _emit 0x13
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 77 2A 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 5F B7 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 10h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 11h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 12h], al
        lea eax, [esp + 10h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 1fh], cl
        ; Exact mapped bytes E8 30 2A 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebx
        pop edi
        pop esi
        ret
        push 588b89ach
        push esi
        ; Exact mapped bytes E8 DE AF FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
