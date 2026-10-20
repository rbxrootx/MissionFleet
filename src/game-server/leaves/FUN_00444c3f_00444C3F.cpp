// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00444C3F .. +0x210 bytes.
extern "C" __declspec(naked) void FUN_00444c3f_00444C3F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57afb0h
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
        sub esp, 448h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 454h]
        mov ecx, 112h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 454h], ecx
        lea ecx, [ebp - 44ch]
        ; Exact mapped bytes E8 83 C2 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 440h]
        ; Exact mapped bytes E8 71 C2 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 444h], 20000h
        mov dword ptr [ebp - 448h], 10000h
        mov esi, esp
        push 5b6788h
        lea eax, [ebp - 43ch]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 14 3B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 5d78d4h
        lea ecx, [ebp - 424h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 F6 3A 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, 0ch
        lea esi, [ebp - 43ch]
        lea edi, [ebp - 40ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea edx, [ebp - 44ch]
        push edx
        push 3f5h
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 7B E4 0A 00: call 0x4f318f
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 440h]
        push eax
        push 3f8h
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 64 E4 0A 00: call 0x4f318f
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 44ch]
        ; Exact mapped bytes E8 2A C2 0E 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E D3 00 00 00: jle 0x444e11
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 44ch]
        ; Exact mapped bytes E8 AD 92 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 7F 46 06 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x46
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        push 0
        lea ecx, [ebp - 44ch]
        ; Exact mapped bytes E8 93 92 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 3dch]
        push ecx
        ; Exact mapped bytes E8 AE 42 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        push 5b678ch
        push 0
        lea ecx, [ebp - 440h]
        ; Exact mapped bytes E8 6F 92 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 49 3A 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x444daa
        __asm _emit 0x74
        __asm _emit 0x0f
        lea ecx, [ebp - 440h]
        ; Exact mapped bytes E8 BA C1 0E 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc1
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 67: jne 0x444e11
        __asm _emit 0x75
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 454h]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 65 C5 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 450h], eax
        cmp dword ptr [ebp - 450h], 0
        ; Exact mapped bytes 74 47: je 0x444e11
        __asm _emit 0x74
        __asm _emit 0x47
        lea ecx, [ebp - 44ch]
        ; Exact mapped bytes E8 8B C1 0E 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc1
        __asm _emit 0x0e
        __asm _emit 0x00
        add eax, 31h
        push eax
        lea eax, [ebp - 40ch]
        push eax
        mov ecx, dword ptr [ebp - 448h]
        push ecx
        mov edx, dword ptr [ebp - 444h]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 F8 4C 04 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 A7 F1 FB FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 450h], eax
        ; Exact mapped bytes EB B0: jmp 0x444dc1
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 440h]
        ; Exact mapped bytes E8 2C 8A 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 44ch]
        ; Exact mapped bytes E8 1A 8A 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8a
        __asm _emit 0x0a
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
        add esp, 454h
        cmp ebp, esp
        ; Exact mapped bytes E8 95 39 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
