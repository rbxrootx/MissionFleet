// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D5FB0 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_100d5fb0_100D5FB0() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 10h], ebp
        lea edi, [ecx + 7ch]
        lea esi, [ecx + 0f4h]
        mov dword ptr [esp + 14h], 6
        mov ebx, 1
        mov eax, dword ptr [esi - 18h]
        test eax, eax
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x100d610d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [eax + 24h]
        mov ebp, dword ptr [eax + 4]
        and cl, bl
        cmp cl, bl
        ; Exact mapped bytes 75 06: jne 0x100d5ff6
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi - 48h]
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 75 04: jne 0x100d6002
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        cmp dword ptr [esi], ebx
        ; Exact mapped bytes 75 26: jne 0x100d602c
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 11h
        ; Exact mapped bytes 7E 0F: jle 0x100d6023
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d6023
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 44h]
        ; Exact mapped bytes EB 02: jmp 0x100d6025
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        cmp eax, 0ah
        ; Exact mapped bytes 77 15: ja 0x100d6048
        __asm _emit 0x77
        __asm _emit 0x15
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [esi - 48h]
        lea eax, [edx + eax - 7]
        push eax
        push ebp
        ; Exact mapped bytes E8 8A 8C 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 73: jmp 0x100d60bb
        __asm _emit 0xeb
        __asm _emit 0x73
        cmp eax, 10h
        ; Exact mapped bytes 77 16: ja 0x100d6063
        __asm _emit 0x77
        __asm _emit 0x16
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [esi - 48h]
        sub edx, eax
        add edx, 0eh
        push edx
        push ebp
        ; Exact mapped bytes E8 6F 8C 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 58: jmp 0x100d60bb
        __asm _emit 0xeb
        __asm _emit 0x58
        cmp eax, 14h
        ; Exact mapped bytes 77 15: ja 0x100d607d
        __asm _emit 0x77
        __asm _emit 0x15
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [esi - 48h]
        lea eax, [edx + eax - 13h]
        push eax
        push ebp
        ; Exact mapped bytes E8 55 8C 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 3E: jmp 0x100d60bb
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp eax, 18h
        ; Exact mapped bytes 77 16: ja 0x100d6098
        __asm _emit 0x77
        __asm _emit 0x16
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [esi - 48h]
        sub edx, eax
        add edx, 17h
        push edx
        push ebp
        ; Exact mapped bytes E8 3A 8C 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x100d60bb
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp eax, 19h
        ; Exact mapped bytes 75 11: jne 0x100d60ae
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [esi - 48h]
        push ebp
        ; Exact mapped bytes E8 24 8C 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x100d60bb
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov dword ptr [esi - 18h], 0
        mov dword ptr [esi], 0
        mov eax, dword ptr [esi]
        cmp eax, 19h
        ; Exact mapped bytes 77 03: ja 0x100d60c5
        __asm _emit 0x77
        __asm _emit 0x03
        inc eax
        mov dword ptr [esi], eax
        mov ebp, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 14h]
        add esi, 4
        add edi, 8
        dec eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 85 F9 FE FF FF: jne 0x100d5fd7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 18h]
        mov ecx, 6
        lea eax, [edx + 7ch]
        mov esi, dword ptr [eax]
        add eax, 8
        mov ebx, dword ptr [esi + 64h]
        add ebp, ebx
        dec ecx
        ; Exact mapped bytes 75 F3: jne 0x100d60ea
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [edx + 74h]
        cmp ebp, dword ptr [ecx + 64h]
        ; Exact mapped bytes 74 06: je 0x100d6105
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 1B 96 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 75 04: jne 0x100d6116
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi - 48h]
        mov dl, byte ptr [eax + 24h]
        and dl, bl
        cmp dl, bl
        ; Exact mapped bytes 75 A7: jne 0x100d60c9
        __asm _emit 0x75
        __asm _emit 0xa7
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 9F: jmp 0x100d60c9
        __asm _emit 0xeb
        __asm _emit 0x9f
    }
}
