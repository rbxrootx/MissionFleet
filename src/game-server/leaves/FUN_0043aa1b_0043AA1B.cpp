// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043AA1B .. +0x221 bytes.
extern "C" __declspec(naked) void FUN_0043aa1b_0043AA1B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a4b3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 110h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 11ch]
        mov ecx, 44h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 11ch], ecx
        mov dword ptr [ebp - 10ch], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A0 64 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 108h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 D5 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 24 2A 00 00: call 0x43d4b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f4h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 D1 E8 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 E9 48 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 F4 6B 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        push edx
        lea eax, [ebp - 0e8h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 DD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xdd
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C8 64 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea ecx, [ebp - 0d0h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E7 DC 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bech]
        mov esi, esp
        push edx
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AD DC 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 328h
        mov esi, esp
        push ecx
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 DC 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 AA 67 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7D: je 0x43abfc
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 67 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1ach]
        add edx, 1
        mov dword ptr [ebp - 110h], edx
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 6D 67 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + 1ach], edx
        push 0
        push 0f4h
        lea eax, [ebp - 104h]
        push eax
        push 0
        push 4
        push 80018004h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 39 67 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 40 C6 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], 1
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 118h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 35 2C 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 118h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 11ch
        cmp ebp, esp
        ; Exact mapped bytes E8 AA DB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xdb
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
