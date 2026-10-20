// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004092DD .. +0x2C9 bytes.
extern "C" __declspec(naked) void FUN_004092dd_004092DD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 544h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 544h]
        mov ecx, 151h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 544h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 0F 85 D8 01 00 00: jne 0x4094ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x409328
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 18h
        ; Exact mapped bytes 7D 1B: jge 0x409349
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 544h]
        add edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 62: movsx eax, byte ptr [edx + 0x62]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x62
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x409347
        __asm _emit 0x75
        __asm _emit 0x08
        mov cl, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], cl
        ; Exact mapped bytes EB 02: jmp 0x409349
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x40931f
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        cmp edx, 3
        ; Exact mapped bytes 0F 8C 8A 01 00 00: jl 0x4094e5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        cmp eax, 17h
        ; Exact mapped bytes 0F 8F 79 01 00 00: jg 0x4094e5
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 544h]
        add ecx, 5ch
        push ecx
        ; Exact mapped bytes E8 55 00 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        cmp eax, 9
        ; Exact mapped bytes 0F 82 5E 01 00 00: jb 0x4094e5
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp - 544h]
        add eax, 62h
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 7C FC 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        mov byte ptr [ebp + edx - 20h], 0
        mov byte ptr [ebp - 9], 0
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 544h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 E1 5C 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x4094e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 10 10 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x4094e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 00 10 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D9 AB FF FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x4094e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 538h], 7fh
        mov dword ptr [ebp - 53ch], 0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 540h], eax
        lea ecx, [ebp - 538h]
        push ecx
        lea edx, [ebp - 53ch]
        push edx
        lea eax, [ebp - 540h]
        push eax
        ; Exact mapped bytes E8 81 A3 FF FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x4094e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 190h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 94 0F 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0d74h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 56 0E 00 00: call 0x40a2c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x4094e5
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 8B 94 0A E4 6B 01 00: mov dx, word ptr [edx + ecx + 0x16be4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0xe4
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 D4 FB FF FF: mov word ptr [ebp - 0x42c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 428h], 1
        mov dword ptr [ebp - 430h], 80020700h
        mov byte ptr [ebp - 424h], 4fh
        sub esp, 410h
        mov ecx, 104h
        lea esi, [ebp - 434h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 190h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 19 0F 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0d74h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 FB 0D 00 00: call 0x40a2e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x409591
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a09e0h
        lea eax, [ebp - 534h]
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
        ; Exact mapped bytes E8 D8 F2 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp - 544h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 544h]
        add ecx, 38h
        ; Exact mapped bytes E8 A4 7A 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 534h]
        push edx
        ; Exact mapped bytes E8 A2 FE 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 534h]
        push eax
        mov ecx, dword ptr [ebp - 544h]
        add ecx, 38h
        ; Exact mapped bytes E8 7C 7A 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 544h]
        add ecx, 38h
        ; Exact mapped bytes E8 36 0F 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 544h]
        add ecx, 38h
        ; Exact mapped bytes E8 07 0F 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 544h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 544h]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 DC 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 544h
        cmp ebp, esp
        ; Exact mapped bytes E8 40 F2 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf2
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
