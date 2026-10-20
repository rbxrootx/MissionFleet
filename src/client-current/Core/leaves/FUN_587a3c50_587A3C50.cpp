// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3C50 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_587a3c50_587A3C50() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        movzx edx, byte ptr [ecx]
        movzx eax, byte ptr [ecx + 1]
        shl edx, 8
        or edx, eax
        movzx eax, byte ptr [ecx + 2]
        shl edx, 8
        or edx, eax
        movzx eax, byte ptr [ecx + 3]
        shl edx, 8
        or edx, eax
        test esi, esi
        ; Exact mapped bytes 74 79: je 0x587a3cf4
        __asm _emit 0x74
        __asm _emit 0x79
        push edi
        mov edi, dword ptr [esp + 18h]
        cmp edi, 7fffffffh
        ; Exact mapped bytes 77 6E: ja 0x587a3cf6
        __asm _emit 0x77
        __asm _emit 0x6e
        push ebx
        push edi
        push edx
        push esi
        ; Exact mapped bytes E8 CF 00 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 24h]
        add esp, 0ch
        test ebx, ebx
        ; Exact mapped bytes 74 17: je 0x587a3cb3
        __asm _emit 0x74
        __asm _emit 0x17
        test edi, edi
        ; Exact mapped bytes 74 13: je 0x587a3cb3
        __asm _emit 0x74
        __asm _emit 0x13
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 18 2C 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 00 B9 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 14h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 15h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 16h], al
        lea eax, [esp + 14h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 23h], cl
        ; Exact mapped bytes E8 D1 2B 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebx
        pop edi
        pop esi
        ret
        push 588b89ach
        push esi
        ; Exact mapped bytes E8 7F B1 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
