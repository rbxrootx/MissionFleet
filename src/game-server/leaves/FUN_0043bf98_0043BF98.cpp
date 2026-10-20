// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043BF98 .. +0x1B5 bytes.
extern "C" __declspec(naked) void FUN_0043bf98_0043BF98() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a56dh
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
        sub esp, 0c8h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0d4h]
        mov ecx, 32h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0d4h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2D 4F 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0c0h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 BF 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 82 50 01 00 00: movsx eax, byte ptr [edx + 0x150]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x43c026
        __asm _emit 0x75
        __asm _emit 0x24
        mov dword ptr [ebp - 0c4h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 31 18 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x43c12e
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0bch]
        ; Exact mapped bytes E8 2F 9E FD FF: call 0x415e60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0ach
        push 0
        lea ecx, [ebp - 0bch]
        push ecx
        ; Exact mapped bytes E8 2C D3 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 0c8h]
        push edx
        ; Exact mapped bytes E8 44 33 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0bch]
        ; Exact mapped bytes E8 4F 56 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x56
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        lea ecx, [ebp - 0a0h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 62 C7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 24 4F 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea edx, [ebp - 88h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 C7 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A 52 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x52
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 50: je 0x43c10f
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0ach
        lea edx, [ebp - 0bch]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 80018007h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 3D 52 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x52
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 44 B1 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 45 17 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0cch]
        ; Exact mapped bytes EB 1F: jmp 0x43c12e
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov dword ptr [ebp - 0d0h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 24 17 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d0h]
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
        add esp, 0d4h
        cmp ebp, esp
        ; Exact mapped bytes E8 99 C6 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
