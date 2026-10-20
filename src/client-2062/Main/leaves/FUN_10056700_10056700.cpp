// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10056700 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_10056700_10056700() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 84h
        push ebp
        mov ebp, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 95 16 01 00 00: mov dx, word ptr [ebp + 0x116]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B CA: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 74 13: je 0x1005672f
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x100567c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FA 01: cmp dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x100567c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 120h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x100567c5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0fffffffeh
        push ebx
        push esi
        sub ecx, eax
        push edi
        lea edi, [eax + 2]
        lea esi, [ebp + 218h]
        lea ebx, [eax + 12h]
        mov dword ptr [esp + 10h], ecx
        cmp byte ptr [edi], 0
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 74 47: je 0x100567a5
        __asm _emit 0x74
        __asm _emit 0x47
        or byte ptr [eax + 24h], 0fh
        push ebx
        lea eax, [esp + 18h]
        push 1017f54ch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 3E B0 FB FF: call 0x100117c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 60h]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x1005679a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 5ch]
        xor edx, edx
        mov dl, byte ptr [edi]
        push edx
        ; Exact mapped bytes E8 88 8F 0A 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8f
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x100567ab
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100567ab
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 120h]
        add esi, 4
        add ebx, 10h
        inc edi
        add eax, edi
        cmp eax, ecx
        ; Exact mapped bytes 7C 95: jl 0x10056757
        __asm _emit 0x7c
        __asm _emit 0x95
        pop edi
        pop esi
        pop ebx
        pop ebp
        add esp, 84h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
