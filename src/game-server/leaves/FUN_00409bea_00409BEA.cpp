// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409BEA .. +0x2A9 bytes.
extern "C" __declspec(naked) void FUN_00409bea_00409BEA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 218h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 218h]
        mov ecx, 86h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 218h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 0F 85 B8 01 00 00: jne 0x409dd7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x409c35
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0ch
        ; Exact mapped bytes 7D 1B: jge 0x409c56
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 218h]
        add edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 63: movsx eax, byte ptr [edx + 0x63]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x63
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x409c54
        __asm _emit 0x75
        __asm _emit 0x08
        mov cl, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], cl
        ; Exact mapped bytes EB 02: jmp 0x409c56
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x409c2c
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        cmp edx, 0ch
        ; Exact mapped bytes 0F 8F 6A 01 00 00: jg 0x409dd2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 218h]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 59 F7 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        cmp eax, 7
        ; Exact mapped bytes 0F 82 4F 01 00 00: jb 0x409dd2
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp - 218h]
        add edx, 63h
        push edx
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 80 F3 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        mov byte ptr [ebp + ecx - 14h], 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [edx + 168h]
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 6D F9 09 00: call 0x4a9630
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi + 1ch]
        add ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 C4 89 07 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 36 F9 09 00: call 0x4a9630
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov esi, esp
        push eax
        push 5a0abch
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 C4 EA 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        mov eax, dword ptr [ebp - 218h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 218h]
        add ecx, 38h
        ; Exact mapped bytes E8 90 72 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 114h]
        push ecx
        ; Exact mapped bytes E8 8E F6 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea edx, [ebp - 114h]
        push edx
        mov ecx, dword ptr [ebp - 218h]
        add ecx, 38h
        ; Exact mapped bytes E8 68 72 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 218h]
        add ecx, 38h
        ; Exact mapped bytes E8 22 07 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 218h]
        add ecx, 38h
        ; Exact mapped bytes E8 F3 06 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 45ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D D4 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 D4 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x409e7e
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a0ad8h
        lea ecx, [ebp - 214h]
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
        ; Exact mapped bytes E8 EB E9 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        mov edx, dword ptr [ebp - 218h]
        add edx, 8
        push edx
        mov ecx, dword ptr [ebp - 218h]
        add ecx, 38h
        ; Exact mapped bytes E8 B7 71 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 214h]
        push eax
        ; Exact mapped bytes E8 B5 F5 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea ecx, [ebp - 214h]
        push ecx
        mov ecx, dword ptr [ebp - 218h]
        add ecx, 38h
        ; Exact mapped bytes E8 8F 71 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 218h]
        add ecx, 38h
        ; Exact mapped bytes E8 49 06 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 218h]
        add ecx, 38h
        ; Exact mapped bytes E8 1A 06 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 218h]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 45ch]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B4 D3 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 218h
        cmp ebp, esp
        ; Exact mapped bytes E8 53 E9 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe9
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
