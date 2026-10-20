// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409FDB .. +0x26D bytes.
extern "C" __declspec(naked) void FUN_00409fdb_00409FDB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 20ch]
        mov ecx, 83h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 20ch], ecx
        lea eax, [ebp - 208h]
        push eax
        ; Exact mapped bytes E8 8B 53 0C 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7F 76 12 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 AD 04 00 00: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20ch]
        mov dword ptr [ecx + 45ch], 8010000h
        mov edx, dword ptr [ebp - 20ch]
        mov dword ptr [edx + 460h], 10000h
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 25 77 12 00: call 0x531770
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x77
        __asm _emit 0x12
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 02 77 12 00: call 0x531758
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x77
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 E1 76 12 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C0 76 12 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 9C 76 12 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 76 76 12 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 ED 76 12 00: call 0x531770
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CC 76 12 00: call 0x531758
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AB 76 12 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8A 76 12 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 66 76 12 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 40 76 12 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x76
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        push 5a0b08h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 38h
        cmp esi, esp
        ; Exact mapped bytes E8 13 E7 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 5a0b44h
        lea edx, [ebp - 204h]
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
        ; Exact mapped bytes E8 F1 E6 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        push 30h
        push 0
        mov eax, dword ptr [ebp - 20ch]
        add eax, 8
        push eax
        ; Exact mapped bytes E8 6E F2 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 A7 6E 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AB E6 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 78 6E 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 32 03 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 03 03 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D D0 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 2D 03 00 00: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        mov edx, dword ptr [ebp - 20ch]
        add edx, 8
        push edx
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 09 6E 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0D E6 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 2
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 DA 6D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 94 02 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        add ecx, 38h
        ; Exact mapped bytes E8 65 02 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        mov edx, dword ptr [ecx + 45ch]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF CF 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xcf
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 20ch
        cmp ebp, esp
        ; Exact mapped bytes E8 9E E5 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe5
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
