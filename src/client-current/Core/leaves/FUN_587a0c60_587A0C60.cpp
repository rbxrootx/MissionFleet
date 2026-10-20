// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0C60 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_587a0c60_587A0C60() {
    __asm {
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x587a0d2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esp + 0ch]
        test edi, edi
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x587a0d2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov dl, byte ptr [esp + 24h]
        mov cl, byte ptr [esp + 20h]
        mov ch, byte ptr [esp + 18h]
        push ebx
        mov bl, byte ptr [esp + 20h]
        mov dword ptr [edi], eax
        mov al, byte ptr [esp + 2ch]
        push esi
        mov esi, dword ptr [esp + 1ch]
        mov byte ptr [edi + 1bh], al
        movzx eax, al
        push eax
        movzx eax, dl
        push eax
        movzx eax, cl
        push eax
        movzx eax, bl
        push eax
        movzx eax, ch
        push eax
        mov byte ptr [edi + 19h], bl
        mov ebx, dword ptr [esp + 2ch]
        push esi
        push ebx
        push dword ptr [esp + 2ch]
        mov dword ptr [edi + 4], esi
        mov byte ptr [edi + 18h], ch
        mov byte ptr [edi + 1ah], dl
        mov byte ptr [edi + 1ch], cl
        ; Exact mapped bytes E8 53 E9 FF FF: call 0x5879f620
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ah, byte ptr [edi + 19h]
        add esp, 20h
        cmp ah, 3
        ; Exact mapped bytes 75 08: jne 0x587a0ce0
        __asm _emit 0x75
        __asm _emit 0x08
        mov byte ptr [edi + 1dh], 1
        mov al, 1
        ; Exact mapped bytes EB 1A: jmp 0x587a0cfa
        __asm _emit 0xeb
        __asm _emit 0x1a
        lea esi, [edi + 1dh]
        mov al, 3
        test ah, 2
        ; Exact mapped bytes 75 02: jne 0x587a0cec
        __asm _emit 0x75
        __asm _emit 0x02
        mov al, 1
        mov dl, al
        mov byte ptr [esi], dl
        test ah, 4
        ; Exact mapped bytes 74 05: je 0x587a0cfa
        __asm _emit 0x74
        __asm _emit 0x05
        inc al
        mov byte ptr [edi + 1dh], al
        movzx ecx, byte ptr [edi + 18h]
        movzx eax, al
        imul ecx, eax
        mov byte ptr [edi + 1eh], cl
        movzx eax, cl
        cmp cl, 8
        ; Exact mapped bytes 72 0D: jb 0x587a0d1c
        __asm _emit 0x72
        __asm _emit 0x0d
        shr eax, 3
        imul eax, ebx
        pop esi
        pop ebx
        mov dword ptr [edi + 0ch], eax
        pop edi
        ret
        imul eax, ebx
        pop esi
        pop ebx
        add eax, 7
        shr eax, 3
        mov dword ptr [edi + 0ch], eax
        pop edi
        ret
    }
}
