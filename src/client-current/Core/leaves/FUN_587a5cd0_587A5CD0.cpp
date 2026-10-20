// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5CD0 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_587a5cd0_587A5CD0() {
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
        mov edx, dword ptr [esp + 1ch]
        push ebx
        push esi
        mov esi, dword ptr [esp + 20h]
        mov bl, byte ptr [edx + 2]
        lea eax, [ebx - 1]
        cmp al, 0bh
        ; Exact mapped bytes 0F 87 D0 00 00 00: ja 0x587a5dc6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edx + 3]
        dec al
        cmp al, 1eh
        ; Exact mapped bytes 0F 87 C3 00 00 00: ja 0x587a5dc6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov bh, byte ptr [edx + 4]
        cmp bh, 17h
        ; Exact mapped bytes 0F 87 B7 00 00 00: ja 0x587a5dc6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edx + 6], 3ch
        ; Exact mapped bytes 0F 87 AD 00 00 00: ja 0x587a5dc6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [edx]
        mov eax, ecx
        mov byte ptr [esp + 11h], cl
        shr eax, 8
        mov byte ptr [esp + 10h], al
        mov al, byte ptr [edx + 3]
        mov byte ptr [esp + 13h], al
        movzx eax, byte ptr [edx + 5]
        mov byte ptr [esp + 15h], al
        mov al, byte ptr [edx + 6]
        mov byte ptr [esp + 12h], bl
        mov byte ptr [esp + 14h], bh
        mov byte ptr [esp + 16h], al
        test esi, esi
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x587a5dd4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        push 74494d45h
        push esi
        ; Exact mapped bytes E8 04 E0 FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push 7
        lea eax, [esp + 20h]
        push eax
        push esi
        ; Exact mapped bytes E8 57 0B 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        lea eax, [esp + 2ch]
        push eax
        push esi
        ; Exact mapped bytes E8 3A 98 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 30h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 31h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 32h], al
        lea eax, [esp + 30h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 3fh], cl
        ; Exact mapped bytes E8 0E 0B 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 10h]
        xor ecx, esp
        ; Exact mapped bytes E8 8E B2 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 14h
        ret
        push 588b9044h
        push esi
        ; Exact mapped bytes E8 5F 96 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [esp + 18h]
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 6F B2 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}
