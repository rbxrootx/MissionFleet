// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004718BA .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_004718ba_004718BA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 18 FA F8 FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 B7 8B F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 DF 4D FA FF: call 0x416703
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        ; Exact mapped bytes EB 0B: jmp 0x47193a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A9 F9 F8 FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x4719cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B2 FD FF FF: call 0x471706
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 5C F6 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 68 96 FD FF: call 0x44afe7
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 44: jne 0x4719c8
        __asm _emit 0x75
        __asm _emit 0x44
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EA FD FF FF: call 0x47177e
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 1C F6 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 77 4D FA FF: call 0x416732
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x47192f
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x4719f3
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 B2 8A F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 4
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 30 76 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 72 8A F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x8a
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 D8 6D 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
