// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409712 .. +0x223 bytes.
extern "C" __declspec(naked) void FUN_00409712_00409712() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 12ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 12ch]
        mov ecx, 4bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 12ch], ecx
        mov byte ptr [ebp - 24h], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x40974d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 1eh
        ; Exact mapped bytes 7D 1B: jge 0x40976e
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F BE 51 66: movsx edx, byte ptr [ecx + 0x66]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x66
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x40976c
        __asm _emit 0x75
        __asm _emit 0x08
        mov al, byte ptr [ebp - 28h]
        mov byte ptr [ebp - 24h], al
        ; Exact mapped bytes EB 02: jmp 0x40976e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x409744
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 24h]
        and ecx, 0ffh
        cmp ecx, 3
        ; Exact mapped bytes 0F 8C A0 01 00 00: jl 0x409920
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        and edx, 0ffh
        cmp edx, 1dh
        ; Exact mapped bytes 0F 8F 8E 01 00 00: jg 0x409920
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 12ch]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 2F FC 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        cmp eax, 9
        ; Exact mapped bytes 0F 82 73 01 00 00: jb 0x409920
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        add edx, 66h
        push edx
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 56 F8 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 24h]
        and ecx, 0ffh
        mov byte ptr [ebp + ecx - 20h], 0
        mov esi, esp
        push 5a0a10h
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 ED EF 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x409850
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 75 20: jne 0x409823
        __asm _emit 0x75
        __asm _emit 0x20
        mov esi, esp
        push 5a0a20h
        lea ecx, [ebp - 128h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 BF EF 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x40984e
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 908h], 2
        mov esi, esp
        push 5a0a38h
        lea eax, [ebp - 128h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 92 EF 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x409897
        __asm _emit 0xeb
        __asm _emit 0x47
        mov esi, esp
        push 5a0a54h
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 78 EF 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x409897
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 908h], 0
        mov esi, esp
        push 5a0a5ch
        lea eax, [ebp - 128h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 49 EF 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 15 77 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes E8 13 FB 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 ED 76 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 A7 0B 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 78 0B 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 D9 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 12ch
        cmp ebp, esp
        ; Exact mapped bytes E8 B1 EE 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
