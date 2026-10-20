// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884FD4D .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_5884fd4d_5884FD4D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        cmp dword ptr [ebx], 80000003h
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x5884fe7a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes E8 BC F8 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        cmp dword ptr [eax + 8], edi
        ; Exact mapped bytes 74 46: je 0x5884fdb7
        __asm _emit 0x74
        __asm _emit 0x46
        push edi
        ; Exact mapped bytes FF 15 A4 43 89 58: call dword ptr [0x588943a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes E8 A7 F8 FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 8], esi
        ; Exact mapped bytes 74 33: je 0x5884fdb7
        __asm _emit 0x74
        __asm _emit 0x33
        cmp dword ptr [ebx], 0e0434f4dh
        ; Exact mapped bytes 74 2B: je 0x5884fdb7
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebx], 0e0434352h
        ; Exact mapped bytes 74 23: je 0x5884fdb7
        __asm _emit 0x74
        __asm _emit 0x23
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 8D D2 FF FF: call 0x5884d039
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x5884fe78
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], edi
        cmp dword ptr [eax + 0ch], edi
        ; Exact mapped bytes 0F 86 B4 00 00 00: jbe 0x5884fe7d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 20h]
        push eax
        push dword ptr [ebp + 14h]
        lea eax, [ebp - 14h]
        push dword ptr [ebp + 1ch]
        push eax
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 8A D1 FF FF: call 0x5884cf6a
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        add esp, 18h
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], edx
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x5884fe78
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, edx, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [eax]
        lea edi, [ebp - 38h]
        push 5
        mov esi, dword ptr [eax + 10h]
        mov eax, dword ptr [ebp + 1ch]
        add esi, ecx
        pop ecx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 7F 4E: jg 0x5884fe63
        __asm _emit 0x7f
        __asm _emit 0x4e
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7F 49: jg 0x5884fe63
        __asm _emit 0x7f
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 28h]
        shl ecx, 4
        add eax, -10h
        add eax, ecx
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5884fe35
        __asm _emit 0x74
        __asm _emit 0x06
        cmp byte ptr [ecx + 8], 0
        ; Exact mapped bytes 75 2E: jne 0x5884fe63
        __asm _emit 0x75
        __asm _emit 0x2e
        test byte ptr [eax], 40h
        ; Exact mapped bytes 75 29: jne 0x5884fe63
        __asm _emit 0x75
        __asm _emit 0x29
        push 0
        push 1
        push dword ptr [ebp + 24h]
        lea ecx, [ebp - 38h]
        push dword ptr [ebp + 20h]
        push ecx
        push 0
        push eax
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 CC FA FF FF: call 0x5884f929
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add esp, 30h
        mov ecx, dword ptr [ebp - 8]
        inc edx
        mov eax, dword ptr [ebp - 0ch]
        add ecx, 14h
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 8], ecx
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 72 86: jb 0x5884fdfe
        __asm _emit 0x72
        __asm _emit 0x86
        pop edi
        pop esi
        pop ebx
        leave
        ret
        ; Exact mapped bytes E8 8E 28 01 00: call 0x58862710
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
