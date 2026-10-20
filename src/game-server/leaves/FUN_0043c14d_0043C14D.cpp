// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C14D .. +0x1A8 bytes.
extern "C" __declspec(naked) void FUN_0043c14d_0043C14D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a580h
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
        mov dword ptr [ebp - 0c4h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6E 4D 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0c0h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 BE 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbe
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
        ; Exact mapped bytes 75 24: jne 0x43c1e5
        __asm _emit 0x75
        __asm _emit 0x24
        mov dword ptr [ebp - 0c8h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 72 16 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x16
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x43c2d6
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0bch]
        ; Exact mapped bytes E8 70 9C FD FF: call 0x415e60
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0ach
        push 0
        lea ecx, [ebp - 0bch]
        push ecx
        ; Exact mapped bytes E8 6D D1 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd1
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 0cch]
        push edx
        ; Exact mapped bytes E8 85 31 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0bch]
        ; Exact mapped bytes E8 90 54 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x54
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
        ; Exact mapped bytes E8 A3 C5 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 65 4D 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4d
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
        ; Exact mapped bytes E8 84 C5 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc5
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
        ; Exact mapped bytes E8 AB 50 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 37: je 0x43c2b5
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0ach
        lea edx, [ebp - 0bch]
        push edx
        push 0
        push 2
        push 80018000h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 80 50 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 87 AF 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], 1
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 0d0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7C 15 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x15
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
        ; Exact mapped bytes E8 F1 C4 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
