// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004034FB .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_004034fb_004034FB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579892h
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
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        shr dl, 5
        and dl, 1
        and edx, 0ffh
        cmp edx, 1
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x403634
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 81 52 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, dword ptr [eax + 0d8ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 32c8h
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x403634
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 1F BB 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x40362d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 65 D9 12 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1E 4A 08 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 46 D9 12 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 150h
        push ecx
        push 5a02f8h
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 77 B3 0C 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 14h
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 28h], esp
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 83 9E 0E 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        push 9
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 62 14 05 00: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 33 A2 0E 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 24 A2 0E 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes EB 09: jmp 0x403636
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x403636
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 94 51 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x51
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
