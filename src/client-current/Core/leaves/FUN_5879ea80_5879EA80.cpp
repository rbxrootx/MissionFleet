// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EA80 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_5879ea80_5879EA80() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        mov eax, dword ptr [ebx + 0d0h]
        test eax, eax
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5879eb1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebx + 0cch]
        lea eax, [eax + eax*4]
        lea eax, [esi + eax*4]
        cmp esi, eax
        ; Exact mapped bytes 73 7A: jae 0x5879eb1e
        __asm _emit 0x73
        __asm _emit 0x7a
        push edi
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        test byte ptr [esi + 10h], al
        ; Exact mapped bytes 74 4B: je 0x5879eb04
        __asm _emit 0x74
        __asm _emit 0x4b
        push esi
        push edi
        ; Exact mapped bytes E8 70 18 00 00: call 0x587a0330
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp eax, 1
        ; Exact mapped bytes 74 3C: je 0x5879eb04
        __asm _emit 0x74
        __asm _emit 0x3c
        test byte ptr [esi + 3], 20h
        ; Exact mapped bytes 75 12: jne 0x5879eae0
        __asm _emit 0x75
        __asm _emit 0x12
        cmp eax, 3
        ; Exact mapped bytes 74 0D: je 0x5879eae0
        __asm _emit 0x74
        __asm _emit 0x0d
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x5879eb04
        __asm _emit 0x75
        __asm _emit 0x2d
        cmp dword ptr [edi + 26ch], 3
        ; Exact mapped bytes 75 24: jne 0x5879eb04
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [esi + 0ch], 0
        ; Exact mapped bytes 75 0E: jne 0x5879eaf4
        __asm _emit 0x75
        __asm _emit 0x0e
        push 588b74d0h
        push edi
        ; Exact mapped bytes E8 3F 09 00 00: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push dword ptr [esi + 0ch]
        push dword ptr [esi + 8]
        push esi
        push edi
        ; Exact mapped bytes E8 4F 51 00 00: call 0x587a3c50
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebx + 0d0h]
        add esi, 14h
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [ebx + 0cch]
        lea eax, [eax + ecx*4]
        cmp esi, eax
        ; Exact mapped bytes 72 93: jb 0x5879eab0
        __asm _emit 0x72
        __asm _emit 0x93
        pop edi
        pop esi
        pop ebx
        ret
    }
}
