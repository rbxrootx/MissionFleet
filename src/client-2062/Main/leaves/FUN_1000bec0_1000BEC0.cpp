// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000BEC0 .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_1000bec0_1000BEC0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub esp, 10h
        cmp eax, 3
        push esi
        ; Exact mapped bytes 0F 87 31 01 00 00: ja 0x1000c002
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 48 C0 00 10: jmp dword ptr [eax*4 + 0x1000c048]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 28h]
        lea eax, [ecx + 1]
        cdq
        sub eax, edx
        mov edx, ecx
        sar eax, 1
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x1000bef3
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        ; Exact mapped bytes 74 0A: je 0x1000beff
        __asm _emit 0x74
        __asm _emit 0x0a
        lea edx, [eax + eax]
        sub ecx, edx
        imul ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x1000bf01
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, eax
        neg eax
        shl eax, 3
        shl ecx, 4
        mov dword ptr [esp + 0ch], eax
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 10h], ecx
        lea ecx, [esp + 4]
        push eax
        lea edx, [esp + 10h]
        push ecx
        push edx
        ; Exact mapped bytes E8 AB 5F 01 00: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x1000c002
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 28h]
        push edi
        mov edi, esi
        and edi, 80000001h
        ; Exact mapped bytes 79 05: jns 0x1000bf41
        __asm _emit 0x79
        __asm _emit 0x05
        dec edi
        or edi, 0fffffffeh
        inc edi
        lea eax, [esi + 1]
        ; Exact mapped bytes 75 02: jne 0x1000bf48
        __asm _emit 0x75
        __asm _emit 0x02
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        test edi, edi
        pop edi
        ; Exact mapped bytes 74 0A: je 0x1000bf5c
        __asm _emit 0x74
        __asm _emit 0x0a
        lea edx, [eax + eax]
        sub esi, edx
        imul esi, eax
        ; Exact mapped bytes EB 02: jmp 0x1000bf5e
        __asm _emit 0xeb
        __asm _emit 0x02
        mov esi, eax
        lea edx, [eax*4]
        sub edx, eax
        lea eax, [esi*4]
        sub eax, esi
        neg eax
        neg edx
        shl eax, 3
        shl edx, 1
        mov dword ptr [esp + 10h], eax
        mov dword ptr [ecx + 4d0h], eax
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 0ch], edx
        lea ecx, [esp + 4]
        push eax
        lea edx, [esp + 10h]
        push ecx
        push edx
        ; Exact mapped bytes E8 35 5F 01 00: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 62: jmp 0x1000c002
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [esp + 28h]
        mov esi, ecx
        and esi, 80000001h
        ; Exact mapped bytes 79 05: jns 0x1000bfb3
        __asm _emit 0x79
        __asm _emit 0x05
        dec esi
        or esi, 0fffffffeh
        inc esi
        lea eax, [ecx + 1]
        ; Exact mapped bytes 75 02: jne 0x1000bfba
        __asm _emit 0x75
        __asm _emit 0x02
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        test esi, esi
        ; Exact mapped bytes 74 0A: je 0x1000bfcd
        __asm _emit 0x74
        __asm _emit 0x0a
        lea edx, [eax + eax]
        sub ecx, edx
        imul ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x1000bfcf
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, eax
        neg eax
        shl eax, 3
        shl ecx, 4
        mov dword ptr [esp + 0ch], eax
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 10h], ecx
        lea ecx, [esp + 4]
        push eax
        lea edx, [esp + 10h]
        push ecx
        push edx
        ; Exact mapped bytes E8 DD 5E 01 00: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0A: jmp 0x1000c002
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp + 8], eax
        mov ecx, dword ptr [esp + 8]
        mov esi, dword ptr [esp + 20h]
        lea eax, [ecx*8]
        sub eax, ecx
        lea eax, [eax + eax*2]
        lea ecx, [ecx + eax*2]
        mov eax, 51eb851fh
        shl ecx, 1
        imul ecx
        sar edx, 5
        mov eax, dword ptr [esp + 24h]
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esp + 4]
        add ecx, esi
        add edx, eax
        mov eax, dword ptr [esp + 18h]
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
