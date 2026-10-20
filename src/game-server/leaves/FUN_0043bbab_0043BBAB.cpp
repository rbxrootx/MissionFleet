// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043BBAB .. +0x285 bytes.
extern "C" __declspec(naked) void FUN_0043bbab_0043BBAB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a547h
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
        mov dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 13 53 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC C3 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 14h]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 0F 84 CF 01 00 00: je 0x43bdf3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0e8h]
        ; Exact mapped bytes E8 D1 19 00 00: call 0x43d600
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push 0d0h
        push 0
        lea ecx, [ebp - 0e8h]
        push ecx
        ; Exact mapped bytes E8 2E D7 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd7
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 0f0h]
        push edx
        ; Exact mapped bytes E8 46 37 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0e8h]
        ; Exact mapped bytes E8 51 5A 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x5a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        push ecx
        lea edx, [ebp - 0cch]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 63 CB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 25 53 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea eax, [ebp - 0b4h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 44 CB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 2d0h]
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
        ; Exact mapped bytes E8 17 CB 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        mov byte ptr [ebp - 20h], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        mov byte ptr [ebp - 1eh], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        mov byte ptr [ebp - 1fh], dl
        mov eax, dword ptr [ebp + 14h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        sub eax, ecx
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 66 8B 55 14: mov dx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 55 E6: mov word ptr [ebp - 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe6
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 B0 55 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7A: je 0x43bdf3
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 9C 55 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1a8h]
        add eax, 1
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 73 55 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [edx + 1a8h], eax
        push 0
        push 0d0h
        lea ecx, [ebp - 0e8h]
        push ecx
        push 0
        push 4
        push 80018003h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 3F 55 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 46 B4 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0f4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 41 1A 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1a
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
        ; Exact mapped bytes E8 B6 C9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc9
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
