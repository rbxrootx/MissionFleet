// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10106480 .. +0x1E1 bytes.
extern "C" __declspec(naked) void FUN_10106480_10106480() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 10174a7ch
        push eax
        ; Exact mapped bytes A1 A8 CD 1A 10: mov eax, dword ptr [0x101acda8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        push edi
        test eax, 800000h
        mov esi, ecx
        ; Exact mapped bytes 0F 84 5B 01 00 00: je 0x1010660e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 CD 1A 10: mov eax, dword ptr [0x101acdb4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, 2
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x10106567
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 93 1C 10: mov eax, dword ptr [0x101c9310]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        push 24h
        test ah, 80h
        ; Exact mapped bytes 74 4D: je 0x1010651a
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes E8 CE 62 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x62
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x10106601
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        mov ecx, ebx
        push eax
        mov eax, dword ptr [esp + 28h]
        sub ecx, eax
        mov edx, ebp
        push ecx
        mov ecx, dword ptr [esp + 28h]
        sub edx, ecx
        mov ecx, edi
        push edx
        mov dword ptr [edi], 10176990h
        ; Exact mapped bytes E8 B1 2E 00 00: call 0x101093c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], 1017696ch
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x10106603
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 81 62 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x62
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov dword ptr [esp + 18h], 1
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x10106601
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        mov ecx, ebx
        push eax
        mov eax, dword ptr [esp + 28h]
        sub ecx, eax
        mov edx, ebp
        push ecx
        mov ecx, dword ptr [esp + 28h]
        sub edx, ecx
        mov ecx, edi
        push edx
        mov dword ptr [edi], 10176990h
        ; Exact mapped bytes E8 64 2E 00 00: call 0x101093c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], 10176948h
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x10106603
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 48: jne 0x101065b4
        __asm _emit 0x75
        __asm _emit 0x48
        push 24h
        ; Exact mapped bytes E8 2D 62 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x62
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov dword ptr [esp + 18h], 2
        ; Exact mapped bytes 74 79: je 0x10106601
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [esp + 34h]
        mov ecx, ebx
        push eax
        mov eax, dword ptr [esp + 28h]
        sub ecx, eax
        mov edx, ebp
        push ecx
        mov ecx, dword ptr [esp + 28h]
        sub edx, ecx
        mov ecx, edi
        push edx
        mov dword ptr [edi], 10176990h
        ; Exact mapped bytes E8 14 2E 00 00: call 0x101093c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], 10176924h
        ; Exact mapped bytes EB 4F: jmp 0x10106603
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp eax, 4
        ; Exact mapped bytes 7C 55: jl 0x1010660e
        __asm _emit 0x7c
        __asm _emit 0x55
        push 24h
        ; Exact mapped bytes E8 E0 61 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], edi
        test edi, edi
        mov dword ptr [esp + 18h], 3
        ; Exact mapped bytes 74 2C: je 0x10106601
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 34h]
        mov ecx, ebx
        push eax
        mov eax, dword ptr [esp + 28h]
        sub ecx, eax
        mov edx, ebp
        push ecx
        mov ecx, dword ptr [esp + 28h]
        sub edx, ecx
        mov ecx, edi
        push edx
        mov dword ptr [edi], 10176990h
        ; Exact mapped bytes E8 C7 2D 00 00: call 0x101093c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], 10176900h
        ; Exact mapped bytes EB 02: jmp 0x10106603
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esp + 18h], 0ffffffffh
        mov dword ptr [esi + 50h], edi
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x1010664a
        __asm _emit 0x74
        __asm _emit 0x35
        mov edi, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AA 86 FF FF: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 20h]
        xor eax, eax
        sub ebp, ecx
        mov ecx, dword ptr [esp + 30h]
        sub ebx, edi
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 18h], eax
        mov dword ptr [esi + 1ch], ebp
        mov dword ptr [esi + 20h], ebx
        mov dword ptr [esi + 54h], ecx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x1010664c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
