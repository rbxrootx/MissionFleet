// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5740 .. +0x1F3 bytes.
extern "C" __declspec(naked) void FUN_587a5740_587A5740() {
    __asm {
        sub esp, 68h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 64h], eax
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 78h]
        xor ebx, ebx
        cmp byte ptr [ebp + 4], 8
        push esi
        lea esi, [ebp + 4]
        setne bl
        mov eax, dword ptr [ebp + 0ch]
        push edi
        mov edi, dword ptr [esp + 7ch]
        lea ebx, [ebx*4 + 6]
        imul eax, ebx
        mov dword ptr [esp + 14h], eax
        lea eax, [esp + 24h]
        push eax
        push dword ptr [ebp]
        push edi
        ; Exact mapped bytes E8 BB B3 FF FF: call 0x587a0b40
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [esp + 10h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x587a5928
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        add ecx, 2
        add eax, ecx
        push eax
        push 73504c54h
        push edi
        ; Exact mapped bytes E8 B7 E5 FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 1ch]
        add esp, 0ch
        inc eax
        test edi, edi
        ; Exact mapped bytes 74 43: je 0x587a57f8
        __asm _emit 0x74
        __asm _emit 0x43
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x587a57db
        __asm _emit 0x74
        __asm _emit 0x22
        push eax
        lea eax, [esp + 28h]
        push eax
        push edi
        ; Exact mapped bytes E8 FB 10 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        inc eax
        push eax
        lea eax, [esp + 34h]
        push eax
        push edi
        ; Exact mapped bytes E8 DA 9D FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes EB 04: jmp 0x587a57df
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 74 19: je 0x587a57f8
        __asm _emit 0x74
        __asm _emit 0x19
        test esi, esi
        ; Exact mapped bytes 74 15: je 0x587a57f8
        __asm _emit 0x74
        __asm _emit 0x15
        push 1
        push esi
        push edi
        ; Exact mapped bytes E8 D4 10 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push esi
        push edi
        ; Exact mapped bytes E8 BB 9D FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov eax, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 8]
        lea eax, [eax + eax*4]
        lea eax, [esi + eax*2]
        cmp esi, eax
        ; Exact mapped bytes 0F 83 C6 00 00 00: jae 0x587a58d2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        cmp byte ptr [ebp + 4], 8
        ; Exact mapped bytes 75 32: jne 0x587a5848
        __asm _emit 0x75
        __asm _emit 0x32
        movzx eax, byte ptr [esi]
        mov byte ptr [esp + 18h], al
        movzx eax, byte ptr [esi + 2]
        mov byte ptr [esp + 19h], al
        movzx eax, byte ptr [esi + 4]
        mov byte ptr [esp + 1ah], al
        movzx eax, byte ptr [esi + 6]
        mov byte ptr [esp + 1bh], al
        movzx ecx, word ptr [esi + 8]
        mov eax, ecx
        mov byte ptr [esp + 1dh], cl
        shr eax, 8
        mov byte ptr [esp + 1ch], al
        ; Exact mapped bytes EB 54: jmp 0x587a589c
        __asm _emit 0xeb
        __asm _emit 0x54
        movzx ecx, word ptr [esi]
        mov eax, ecx
        mov byte ptr [esp + 19h], cl
        shr eax, 8
        mov byte ptr [esp + 18h], al
        movzx ecx, word ptr [esi + 2]
        mov eax, ecx
        mov byte ptr [esp + 1bh], cl
        shr eax, 8
        mov byte ptr [esp + 1ah], al
        movzx ecx, word ptr [esi + 4]
        mov eax, ecx
        mov byte ptr [esp + 1dh], cl
        shr eax, 8
        mov byte ptr [esp + 1ch], al
        movzx ecx, word ptr [esi + 6]
        mov eax, ecx
        mov byte ptr [esp + 1fh], cl
        shr eax, 8
        mov byte ptr [esp + 1eh], al
        movzx ecx, word ptr [esi + 8]
        mov eax, ecx
        mov byte ptr [esp + 21h], cl
        shr eax, 8
        mov byte ptr [esp + 20h], al
        test edi, edi
        ; Exact mapped bytes 74 1B: je 0x587a58bb
        __asm _emit 0x74
        __asm _emit 0x1b
        push ebx
        lea eax, [esp + 1ch]
        push eax
        push edi
        ; Exact mapped bytes E8 14 10 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea eax, [esp + 28h]
        push eax
        push edi
        ; Exact mapped bytes E8 F8 9C FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov eax, dword ptr [ebp + 0ch]
        add esi, 0ah
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [ebp + 8]
        lea eax, [eax + ecx*2]
        cmp esi, eax
        ; Exact mapped bytes 0F 82 3E FF FF FF: jb 0x587a5810
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 74 3F: je 0x587a5915
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [edi + 13ch]
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
        push edi
        mov dword ptr [edi + 2dch], 82h
        mov byte ptr [esp + 1fh], cl
        ; Exact mapped bytes E8 AE 0F 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [esp + 74h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 2C B7 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 68h
        ret
        push 588b8ce4h
        push edi
        ; Exact mapped bytes E8 4D 95 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
