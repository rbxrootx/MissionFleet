// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043B647 .. +0x329 bytes.
extern "C" __declspec(naked) void FUN_0043b647_0043B647() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a51eh
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
        sub esp, 0ech
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0f8h]
        mov ecx, 3bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0f8h], ecx
        mov dword ptr [ebp - 0e8h], 0
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 71 58 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x58
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0e4h]
        push eax
        lea ecx, [ebp - 0e0h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 C9 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 12 1F 00 00: call 0x43d5d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0d0h
        push 0
        lea edx, [ebp - 0dch]
        push edx
        ; Exact mapped bytes E8 9F DC 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 0f0h]
        push eax
        ; Exact mapped bytes E8 B7 3C 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0dch]
        ; Exact mapped bytes E8 C2 5F 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        lea edx, [ebp - 0c0h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D4 D0 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 93 58 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x58
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea eax, [ebp - 0a8h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B2 D0 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 2d0h]
        mov esi, esp
        push ecx
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7E D0 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x00
        mov al, byte ptr [ebp + 10h]
        mov byte ptr [ebp - 14h], al
        mov cl, byte ptr [ebp + 14h]
        mov byte ptr [ebp - 13h], cl
        mov dl, byte ptr [ebp + 18h]
        mov byte ptr [ebp - 12h], dl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        mov byte ptr [ebp - 11h], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        mov byte ptr [ebp - 10h], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        mov byte ptr [ebp - 0fh], dl
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 2B 5B FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7D: je 0x43b87b
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 5B FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1a8h]
        add eax, 1
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 EE 5A FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [edx + 1a8h], eax
        push 0
        push 0d0h
        lea ecx, [ebp - 0dch]
        push ecx
        push 0
        push 3
        push 80018003h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 BA 5A FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 C1 B9 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], 1
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        push ecx
        mov dl, byte ptr [ebp + 18h]
        push edx
        mov al, byte ptr [ebp + 14h]
        push eax
        mov cl, byte ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 2d0h]
        push edx
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 9B 56 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x56
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, 5d73b0h
        ; Exact mapped bytes E8 75 0B 02 00: call 0x45c498
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0e8h], 1
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 0f4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 01 1F 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0f4h]
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
        add esp, 0f8h
        cmp ebp, esp
        ; Exact mapped bytes E8 76 CE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xce
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
