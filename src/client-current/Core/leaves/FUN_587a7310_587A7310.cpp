// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A7310 .. +0x1A4 bytes.
extern "C" __declspec(naked) void FUN_587a7310_587A7310() {
    __asm {
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 20h], eax
        push ebp
        mov ebp, dword ptr [esp + 30h]
        lea eax, [esp + 14h]
        push esi
        push edi
        mov edi, dword ptr [esp + 34h]
        push 0dh
        push eax
        push edi
        or dword ptr [edi + 74h], 1
        ; Exact mapped bytes E8 B6 FF FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0dh
        lea eax, [esp + 2ch]
        push eax
        push edi
        ; Exact mapped bytes E8 69 82 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push edi
        ; Exact mapped bytes E8 DF 25 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        movzx esi, byte ptr [esp + 40h]
        add esp, 24h
        movzx eax, byte ptr [esp + 1dh]
        shl esi, 8
        add esi, eax
        movzx eax, byte ptr [esp + 1eh]
        shl esi, 8
        add esi, eax
        movzx eax, byte ptr [esp + 1fh]
        shl esi, 8
        add esi, eax
        cmp esi, 7fffffffh
        ; Exact mapped bytes 0F 87 26 01 00 00: ja 0x587a74a9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esp + 20h]
        movzx eax, byte ptr [esp + 21h]
        shl edx, 8
        add edx, eax
        movzx eax, byte ptr [esp + 22h]
        shl edx, 8
        add edx, eax
        movzx eax, byte ptr [esp + 23h]
        shl edx, 8
        add edx, eax
        cmp edx, 7fffffffh
        ; Exact mapped bytes 0F 87 F7 00 00 00: ja 0x587a74a9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esp + 25h]
        movzx ecx, byte ptr [esp + 26h]
        mov dword ptr [esp + 10h], eax
        movzx eax, byte ptr [esp + 28h]
        mov dword ptr [esp + 18h], eax
        mov byte ptr [edi + 150h], al
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esp + 0ch], ecx
        movzx ecx, byte ptr [esp + 27h]
        mov byte ptr [edi + 153h], al
        push ebx
        movzx ebx, byte ptr [esp + 28h]
        movzx eax, al
        mov dword ptr [esp + 18h], ecx
        mov byte ptr [edi + 288h], cl
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [edi + 104h], esi
        mov dword ptr [edi + 108h], edx
        mov byte ptr [edi + 154h], bl
        mov byte ptr [edi + 2a4h], cl
        cmp eax, 6
        ; Exact mapped bytes 77 28: ja 0x587a743e
        __asm _emit 0x77
        __asm _emit 0x28
        ; Exact mapped bytes FF 24 85 B4 74 7A 58: jmp dword ptr [eax*4 + 0x587a74b4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x74
        __asm _emit 0x7a
        __asm _emit 0x58
        mov byte ptr [edi + 157h], 3
        mov al, 3
        ; Exact mapped bytes EB 1F: jmp 0x587a7447
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov byte ptr [edi + 157h], 2
        mov al, 2
        ; Exact mapped bytes EB 14: jmp 0x587a7447
        __asm _emit 0xeb
        __asm _emit 0x14
        mov byte ptr [edi + 157h], 4
        mov al, 4
        ; Exact mapped bytes EB 09: jmp 0x587a7447
        __asm _emit 0xeb
        __asm _emit 0x09
        mov byte ptr [edi + 157h], 1
        mov al, 1
        movzx eax, al
        mov ecx, ebx
        imul ecx, eax
        mov byte ptr [edi + 156h], cl
        movzx eax, cl
        cmp cl, 8
        ; Exact mapped bytes 72 08: jb 0x587a7465
        __asm _emit 0x72
        __asm _emit 0x08
        shr eax, 3
        imul eax, esi
        ; Exact mapped bytes EB 09: jmp 0x587a746e
        __asm _emit 0xeb
        __asm _emit 0x09
        imul eax, esi
        add eax, 7
        shr eax, 3
        push dword ptr [esp + 18h]
        mov dword ptr [edi + 114h], eax
        push dword ptr [esp + 14h]
        push dword ptr [esp + 24h]
        push dword ptr [esp + 20h]
        push ebx
        push edx
        push esi
        push ebp
        push edi
        ; Exact mapped bytes E8 D2 97 FF FF: call 0x587a0c60
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 54h]
        add esp, 24h
        mov eax, 3
        pop ebx
        pop edi
        pop esi
        pop ebp
        xor ecx, esp
        ; Exact mapped bytes E8 AB 9B 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 24h
        ret
        push 588b9698h
        push edi
        ; Exact mapped bytes E8 CC 79 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
