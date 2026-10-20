// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58872E51 .. +0x1C4 bytes.
extern "C" __declspec(naked) void FUN_58872e51_58872E51() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push -1
        push 5887dc30h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 8]
        xor esi, esi
        mov ecx, dword ptr [ebp + 10h]
        test ebx, ebx
        ; Exact mapped bytes 74 0D: je 0x58872e94
        __asm _emit 0x74
        __asm _emit 0x0d
        xor eax, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 74 01 00 00: je 0x58873005
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 75 24: jne 0x58872ebf
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 14h]
        push eax
        push esi
        push esi
        push esi
        push esi
        push esi
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        ; Exact mapped bytes E8 7A E0 FD FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x58873005
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 14h]
        cmp byte ptr [edi + 14h], 0
        ; Exact mapped bytes 75 0D: jne 0x58872ed5
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, edi
        ; Exact mapped bytes E8 D1 2F FE FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edi + 0ch]
        cmp dword ptr [eax + 8], 0fde9h
        ; Exact mapped bytes 75 20: jne 0x58872f01
        __asm _emit 0x75
        __asm _emit 0x20
        push edi
        lea eax, [ebp - 18h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push eax
        push ecx
        lea eax, [ebp + 0ch]
        ; Exact mapped bytes 66 0F 13 45 E8: movlpd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xe8
        push eax
        push ebx
        ; Exact mapped bytes E8 F3 B1 FF FF: call 0x5886e0ec
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x58873005
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0a8h]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x58872fc7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x58872f33
        __asm _emit 0x75
        __asm _emit 0x20
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x58872f2c
        __asm _emit 0x74
        __asm _emit 0x15
        movzx eax, byte ptr [esi + edx]
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        cmp byte ptr [esi + edx], 0
        ; Exact mapped bytes 74 08: je 0x58872f2c
        __asm _emit 0x74
        __asm _emit 0x08
        inc esi
        add ebx, 2
        cmp esi, ecx
        ; Exact mapped bytes 72 EB: jb 0x58872f17
        __asm _emit 0x72
        __asm _emit 0xeb
        mov eax, esi
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x58873005
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        push ecx
        push ebx
        push -1
        push edx
        push 9
        push dword ptr [eax + 8]
        ; Exact mapped bytes E8 EA CB FF FF: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x58873004
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 7ah
        ; Exact mapped bytes 74 15: je 0x58872f70
        __asm _emit 0x74
        __asm _emit 0x15
        mov byte ptr [edi + 1ch], 1
        xor eax, eax
        mov dword ptr [edi + 18h], 2ah
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x58872eb7
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov ecx, edx
        mov eax, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes EB 27: jmp 0x58872fa3
        __asm _emit 0xeb
        __asm _emit 0x27
        dec ecx
        mov dword ptr [ebp - 14h], ecx
        mov cl, byte ptr [eax]
        test cl, cl
        ; Exact mapped bytes 74 22: je 0x58872fa8
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [edi + 0ch]
        movzx ecx, cl
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 66 39 34 48: cmp word ptr [eax + ecx*2], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x34
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 06: jge 0x58872f9d
        __asm _emit 0x7d
        __asm _emit 0x06
        inc eax
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 BE: je 0x58872f5b
        __asm _emit 0x74
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp - 14h]
        inc eax
        test ecx, ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 D4: jne 0x58872f7c
        __asm _emit 0x75
        __asm _emit 0xd4
        sub eax, dword ptr [ebp + 0ch]
        push edx
        push ebx
        push eax
        push dword ptr [ebp + 0ch]
        mov eax, dword ptr [edi + 0ch]
        push 1
        push dword ptr [eax + 8]
        ; Exact mapped bytes E8 71 CB FF FF: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x58873005
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes EB 94: jmp 0x58872f5b
        __asm _emit 0xeb
        __asm _emit 0x94
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x58872fdb
        __asm _emit 0x75
        __asm _emit 0x10
        lea eax, [edx + 1]
        mov cl, byte ptr [edx]
        inc edx
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58872fce
        __asm _emit 0x75
        __asm _emit 0xf9
        sub edx, eax
        mov eax, edx
        ; Exact mapped bytes EB 2A: jmp 0x58873005
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [edi + 0ch]
        push esi
        push esi
        push -1
        push edx
        push 9
        push dword ptr [eax + 8]
        ; Exact mapped bytes E8 42 CB FF FF: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x58873004
        __asm _emit 0x75
        __asm _emit 0x10
        mov byte ptr [edi + 1ch], 1
        mov dword ptr [edi + 18h], 2ah
        ; Exact mapped bytes E9 B3 FE FF FF: jmp 0x58872eb7
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
