// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408F2B .. +0x1BB bytes.
extern "C" __declspec(naked) void FUN_00408f2b_00408F2B() {
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
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x40902a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x408f7d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 18h
        ; Exact mapped bytes 7D 1B: jge 0x408f9e
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 12ch]
        add edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 65: movsx eax, byte ptr [edx + 0x65]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x65
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x408f9c
        __asm _emit 0x75
        __asm _emit 0x08
        mov cl, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], cl
        ; Exact mapped bytes EB 02: jmp 0x408f9e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x408f74
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        cmp edx, 3
        ; Exact mapped bytes 7C 79: jl 0x409025
        __asm _emit 0x7c
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        cmp eax, 17h
        ; Exact mapped bytes 7F 6C: jg 0x409025
        __asm _emit 0x7f
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 5ch
        push ecx
        ; Exact mapped bytes E8 08 04 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        cmp eax, 9
        ; Exact mapped bytes 72 55: jb 0x409025
        __asm _emit 0x72
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp - 12ch]
        add eax, 65h
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 33 00 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        mov byte ptr [ebp + edx - 20h], 0
        mov byte ptr [ebp - 9], 0
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 98 60 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 08: je 0x409025
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 59 E6 03 00: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x4090d1
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a09a4h
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 98 F7 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        mov eax, dword ptr [ebp - 12ch]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 64 7F 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 128h]
        push ecx
        ; Exact mapped bytes E8 62 03 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea edx, [ebp - 128h]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 3C 7F 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 F6 13 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 C7 13 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + 45ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 E1 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe1
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 12ch
        cmp ebp, esp
        ; Exact mapped bytes E8 00 F7 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf7
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
