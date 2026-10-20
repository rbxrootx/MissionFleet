// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478600 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_00478600_00478600() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c009h
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
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 18h], 0cccccccch
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 04 0A 05 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 24 EC FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 03 EC FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 05 EC FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 E5 EB FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 3B 05 54 CB 5D 00: cmp eax, dword ptr [0x5dcb54]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x4786a4
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 CF EB FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 14 FE FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 03 FE FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F5 FD FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 36 FC FF FF: call 0x478300
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0F: jne 0x4786e0
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 27 FC FF FF: call 0x478300
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 58: jmp 0x478738
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C7 FD FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 6C EB FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 1E: jne 0x47871c
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A9 FD FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 4E EB FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1C: jmp 0x478738
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8B FD FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 40 EB FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 1F EB FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 5E FD FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B7 09 05 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x05
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
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 62 00 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
