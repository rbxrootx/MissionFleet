// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C2F5 .. +0x291 bytes.
extern "C" __declspec(naked) void FUN_0043c2f5_0043C2F5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a596h
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
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 C3 4B 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x4b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 108h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 BC 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 100h]
        ; Exact mapped bytes E8 C4 12 00 00: call 0x43d630
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f4h
        push 0
        lea edx, [ebp - 100h]
        push edx
        ; Exact mapped bytes E8 F1 CF 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 1D 4C 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea eax, [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3C C4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 114h]
        push ecx
        ; Exact mapped bytes E8 E7 2F 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 100h]
        ; Exact mapped bytes E8 F2 52 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        push eax
        lea ecx, [ebp - 0e4h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 04 C4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bech]
        mov esi, esp
        push edx
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CA C3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 328h
        mov esi, esp
        push ecx
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AD C3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc3
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        sub eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 C4 4E FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7D: je 0x43c4e2
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 B0 4E FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1ach]
        add edx, 1
        mov dword ptr [ebp - 110h], edx
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 87 4E FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + 1ach], edx
        push 0
        push 0f4h
        lea eax, [ebp - 100h]
        push eax
        push 0
        push 1
        push 80018004h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 4E FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 5A AD 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], 1
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 328h
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bech]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 18h]
        push ecx
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 86 4A 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        push eax
        mov ecx, 5d3b48h
        ; Exact mapped bytes E8 6E 6B 01 00: call 0x4530a7
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], 1
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 118h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 EB 12 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x12
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
        ; Exact mapped bytes E8 60 C2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc2
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
