// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886DB0C .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_5886db0c_5886DB0C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr [ebp + 10h]
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        push edi
        test ebx, ebx
        ; Exact mapped bytes 75 15: jne 0x5886db35
        __asm _emit 0x75
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5886db35
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x5886db2e
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [eax], 0
        xor eax, eax
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x5886dbd4
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 74 03: je 0x5886db3f
        __asm _emit 0x74
        __asm _emit 0x03
        or dword ptr [edi], 0ffffffffh
        mov esi, dword ptr [ebp + 18h]
        cmp eax, 7fffffffh
        ; Exact mapped bytes 76 07: jbe 0x5886db50
        __asm _emit 0x76
        __asm _emit 0x07
        push 16h
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x5886dc51
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x5886db60
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, esi
        ; Exact mapped bytes E8 43 83 FE FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [esi + 0ch]
        mov edx, dword ptr [ecx + 8]
        cmp edx, 0fde9h
        ; Exact mapped bytes 75 31: jne 0x5886db9f
        __asm _emit 0x75
        __asm _emit 0x31
        push esi
        lea eax, [ebp - 8]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push eax
        movzx eax, word ptr [ebp + 14h]
        push eax
        push ebx
        ; Exact mapped bytes 66 0F 13 45 F8: movlpd qword ptr [ebp - 8], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 91 D5 00 00: call 0x5887b117
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test edi, edi
        ; Exact mapped bytes 74 02: je 0x5886db8f
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [edi], eax
        cmp eax, 4
        ; Exact mapped bytes 7E 9A: jle 0x5886db2e
        __asm _emit 0x7e
        __asm _emit 0x9a
        cmp byte ptr [esi + 1ch], 0
        ; Exact mapped bytes 74 94: je 0x5886db2e
        __asm _emit 0x74
        __asm _emit 0x94
        mov eax, dword ptr [esi + 18h]
        ; Exact mapped bytes EB 35: jmp 0x5886dbd4
        __asm _emit 0xeb
        __asm _emit 0x35
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 75 4E: jne 0x5886dbf6
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 66 8B 4D 14: mov cx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        mov edx, 0ffh
        ; Exact mapped bytes 66 3B CA: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 76 23: jbe 0x5886dbd9
        __asm _emit 0x76
        __asm _emit 0x23
        test ebx, ebx
        ; Exact mapped bytes 74 10: je 0x5886dbca
        __asm _emit 0x74
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5886dbca
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        push 0
        push ebx
        ; Exact mapped bytes E8 49 F2 FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        push 2ah
        pop eax
        mov dword ptr [esi + 18h], eax
        mov byte ptr [esi + 1ch], 1
        pop edi
        pop esi
        pop ebx
        leave
        ret
        test ebx, ebx
        ; Exact mapped bytes 74 06: je 0x5886dbe3
        __asm _emit 0x74
        __asm _emit 0x06
        test eax, eax
        ; Exact mapped bytes 74 6E: je 0x5886dc4f
        __asm _emit 0x74
        __asm _emit 0x6e
        mov byte ptr [ebx], cl
        test edi, edi
        ; Exact mapped bytes 0F 84 43 FF FF FF: je 0x5886db2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi], 1
        ; Exact mapped bytes E9 38 FF FF FF: jmp 0x5886db2e
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 4], 0
        lea ecx, [ebp - 4]
        push ecx
        push 0
        push eax
        push ebx
        push 1
        lea eax, [ebp + 14h]
        push eax
        push 0
        push edx
        ; Exact mapped bytes E8 D9 1F 00 00: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5886dc2c
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 AD: jne 0x5886dbca
        __asm _emit 0x75
        __asm _emit 0xad
        test edi, edi
        ; Exact mapped bytes 0F 84 09 FF FF FF: je 0x5886db2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi], eax
        ; Exact mapped bytes E9 02 FF FF FF: jmp 0x5886db2e
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 7ah
        ; Exact mapped bytes 75 93: jne 0x5886dbca
        __asm _emit 0x75
        __asm _emit 0x93
        test ebx, ebx
        ; Exact mapped bytes 74 14: je 0x5886dc4f
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 76 0E: jbe 0x5886dc4f
        __asm _emit 0x76
        __asm _emit 0x0e
        push dword ptr [ebp + 10h]
        push 0
        push ebx
        ; Exact mapped bytes E8 C4 F1 FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        push 22h
        pop edi
        xor eax, eax
        mov dword ptr [esi + 18h], edi
        push esi
        push eax
        push eax
        push eax
        push eax
        push eax
        mov byte ptr [esi + 1ch], 1
        ; Exact mapped bytes E8 C8 32 FE FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 18h
        mov eax, edi
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x5886dbd4
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
