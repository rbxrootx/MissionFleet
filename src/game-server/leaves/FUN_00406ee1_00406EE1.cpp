// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406EE1 .. +0x289 bytes.
extern "C" __declspec(naked) void FUN_00406ee1_00406EE1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 104h]
        mov ecx, 41h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 104h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 34 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 3F 02 00 00: je 0x407155
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 34 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AB D0 FF FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 502h
        ; Exact mapped bytes 0F 85 25 02 00 00: jne 0x407155
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 34 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C1 A3 FF FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 E8 01 00 00: jne 0x407130
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 34 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 99 D0 FF FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 86 CF 01 00 00: jbe 0x40712e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [eax + 464h]
        cmp dword ptr [ecx + 10h], 39h
        ; Exact mapped bytes 0F 86 B9 01 00 00: jbe 0x40712e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 104h]
        add edx, 63h
        mov esi, esp
        push edx
        push 5a05a0h
        lea eax, [ebp - 100h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 43 18 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 100h]
        push ecx
        ; Exact mapped bytes E8 27 24 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        cmp eax, 10h
        ; Exact mapped bytes 0F 83 54 01 00 00: jae 0x407109
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 100h]
        push edx
        push 5a05a4h
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [eax + 4]
        mov edi, dword ptr [ecx + 40cach]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 16 34 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 0ca8h]
        imul edx, edx, 0ab4h
        lea edi, [edi + edx + 4]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 33 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 0ca9h]
        imul ecx, ecx, 112h
        add edi, ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 33 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DD CF FF FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 1
        shl eax, 4
        lea edx, [edi + eax + 12h]
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
        ; Exact mapped bytes E8 B2 17 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 33 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 0cach
        ; Exact mapped bytes E8 B3 6A 0E 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 62 9F 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 100h]
        push edx
        ; Exact mapped bytes E8 60 23 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 3A 9F 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 F6 33 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 104h]
        add ecx, 38h
        ; Exact mapped bytes E8 C7 33 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 10001h
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ecx + 45ch]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 33 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 26 2A 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 33 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 31 CF FF FF: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA 32 00 00: call 0x40a3d0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x407107
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 46bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 32 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 10 CF FF FF: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 09 C8 FF FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 25: jmp 0x40712e
        __asm _emit 0xeb
        __asm _emit 0x25
        push 0
        push 0
        push 0
        push 10003h
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 01 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x407155
        __asm _emit 0xeb
        __asm _emit 0x25
        push 0
        push 0
        push 0
        push 10002h
        mov edx, dword ptr [ebp - 104h]
        mov eax, dword ptr [edx + 45ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD 00 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 104h
        cmp ebp, esp
        ; Exact mapped bytes E8 7C 16 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
