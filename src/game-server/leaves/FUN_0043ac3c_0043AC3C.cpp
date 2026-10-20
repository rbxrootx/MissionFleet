// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043AC3C .. +0x245 bytes.
extern "C" __declspec(naked) void FUN_0043ac3c_0043AC3C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a4c9h
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
        sub esp, 114h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 120h]
        mov ecx, 45h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 120h], ecx
        mov dword ptr [ebp - 110h], 0
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 7C 62 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 10ch]
        push eax
        lea ecx, [ebp - 108h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F D3 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 5D 28 00 00: call 0x43d510
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f8h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 AA E6 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 118h]
        push eax
        ; Exact mapped bytes E8 C2 46 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 CD 69 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x69
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
        ; Exact mapped bytes E8 DF DA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 9E 62 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x62
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
        ; Exact mapped bytes E8 BD DA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xda
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
        ; Exact mapped bytes E8 83 DA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xda
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
        ; Exact mapped bytes E8 66 DA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 14h]
        mov al, byte ptr [ecx + edx + 8ch]
        mov byte ptr [ebp - 10h], al
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 68 65 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7D: je 0x43ae3e
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 65 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1ach]
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 2B 65 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [edx + 1ach], eax
        push 0
        push 0f8h
        lea ecx, [ebp - 104h]
        push ecx
        push 0
        push 5
        push 80018004h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 F7 64 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 FE C3 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 110h], 1
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 11ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 F0 29 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x29
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 11ch]
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
        add esp, 120h
        cmp ebp, esp
        ; Exact mapped bytes E8 65 D9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd9
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
