// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045861D .. +0x207 bytes.
extern "C" __declspec(naked) void FUN_0045861d_0045861D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b94bh
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
        lea edi, [ebp - 34h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 5d7d0ch
        ; Exact mapped bytes E8 CF 13 05 00: call 0x4a9a30
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], 0
        push 0
        ; Exact mapped bytes E8 3E 16 05 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 1F 3B 05 00: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        push 2ch
        ; Exact mapped bytes E8 32 4D 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0D: je 0x4586ae
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C7 4E 00 00: call 0x45d570
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x4586b5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 76ch
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 14h], edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E8 87 0D 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        push edx
        push 5b8c14h
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 14 62 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x62
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5b8c2ch
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 18h
        ; Exact mapped bytes E8 B5 4F 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 47 88 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 18h
        ; Exact mapped bytes E8 D1 4F 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D 00 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 34 4C 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 28h], edx
        mov esi, esp
        push 5d7d0ch
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2A 00 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 16 00 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], edx
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 41 50 00 00: call 0x45d820
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 ED FF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 3F 00 00: call 0x45c760
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 42 50 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 C0 FF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
