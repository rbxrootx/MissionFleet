// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873CB40 .. +0x1B6 bytes.
extern "C" __declspec(naked) void FUN_5873cb40_5873CB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1f4h]
        ; Exact mapped bytes E8 50 8C D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8c
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov al, byte ptr [ebp - 0ch]
        and al, 0fh
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 9ah]
        and dl, 0f0h
        or dl, al
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 9ah], dl
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1f4h]
        ; Exact mapped bytes E8 1A 8C D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8c
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        sub eax, 1
        and al, 7fh
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 99h]
        and dl, 80h
        or dl, al
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 99h], dl
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1f4h]
        ; Exact mapped bytes E8 E2 8B D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0aeh], al
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 1f4h]
        ; Exact mapped bytes E8 C2 8B D5 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0afh], al
        ; Exact mapped bytes C7 05 88 5E 96 58 00 00 00 00: mov dword ptr [0x58965e88], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0ech]
        cmp ecx, 6
        ; Exact mapped bytes 74 0F: je 0x5873cc1f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0ech]
        cmp eax, 4
        ; Exact mapped bytes 75 30: jne 0x5873cc4f
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 244h]
        ; Exact mapped bytes E8 93 7D D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 75 09: jne 0x5873cc3f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x5873cc46
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 15 88 5E 96 58: mov dword ptr [0x58965e88], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A1 88 5E 96 58: mov eax, dword ptr [0x58965e88]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        and eax, 1
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        and edx, 0ffffffefh
        or edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], edx
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9eh]
        mov eax, dword ptr [edx*4 + 588b47f0h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9eh]
        mov eax, dword ptr [ecx*4 + 588b47f0h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [ecx + eax*4 + 17ch]
        mov eax, dword ptr [edx + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5873ccb6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3C: jmp 0x5873ccf2
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0ech]
        cmp edx, 3
        ; Exact mapped bytes 75 20: jne 0x5873cce5
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 17ch]
        ; Exact mapped bytes E8 C4 FB FF FF: call 0x5873c8a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 13 00 00: call 0x5873e0e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
