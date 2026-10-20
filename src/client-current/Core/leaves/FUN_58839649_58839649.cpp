// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839649 .. +0x1DC bytes.
extern "C" __declspec(naked) void FUN_58839649_58839649() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 540h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, 104h
        lea eax, [ebp - 538h]
        push esi
        push eax
        push 0
        xor bl, bl
        ; Exact mapped bytes FF 15 04 42 89 58: call dword ptr [0x58894204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push esi
        lea eax, [ebp - 22ch]
        push eax
        lea eax, [ebp - 538h]
        push eax
        ; Exact mapped bytes E8 03 FC 01 00: call 0x58859290
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        lea eax, [ebp - 538h]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 22ch]
        push 5ch
        push eax
        ; Exact mapped bytes E8 AA E6 01 00: call 0x58857d59
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x588396b7
        __asm _emit 0x74
        __asm _emit 0x02
        mov byte ptr [eax], bl
        lea eax, [ebp - 53ch]
        push eax
        push 3
        push 0
        push 588f1ac0h
        ; Exact mapped bytes E8 87 2C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 80000001h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 32 01 00 00: jne 0x58839813
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [ebp - 540h], esi
        push ecx
        push ecx
        push ecx
        push ecx
        lea eax, [ebp - 540h]
        push eax
        lea eax, [ebp - 128h]
        push eax
        push ecx
        push dword ptr [ebp - 53ch]
        ; Exact mapped bytes FF 15 30 40 89 58: call dword ptr [0x58894030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        xor ecx, ecx
        lea esi, [ecx + 1]
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x588397fc
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x588397d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 128h]
        push eax
        lea eax, [ebp - 330h]
        push 104h
        push eax
        ; Exact mapped bytes E8 5E E0 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 330h]
        push 5ch
        push eax
        ; Exact mapped bytes E8 19 E6 01 00: call 0x58857d59
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x5883974a
        __asm _emit 0x74
        __asm _emit 0x03
        mov byte ptr [eax], 0
        lea eax, [ebp - 22ch]
        push eax
        lea eax, [ebp - 330h]
        push eax
        ; Exact mapped bytes E8 47 CC 02 00: call 0x588663a4
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 6D: jne 0x588397d0
        __asm _emit 0x75
        __asm _emit 0x6d
        lea eax, [ebp - 540h]
        push eax
        lea eax, [ebp - 24h]
        push eax
        push 0
        push 0
        lea eax, [ebp - 128h]
        push eax
        push dword ptr [ebp - 53ch]
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x588397d0
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 39 05 EC 83 96 58: cmp dword ptr [0x589683ec], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 21: je 0x588397b2
        __asm _emit 0x74
        __asm _emit 0x21
        lea eax, [ebp - 24h]
        push eax
        push 588f1b08h
        ; Exact mapped bytes E8 B4 2B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 DB 08 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 128h]
        push eax
        push dword ptr [ebp - 53ch]
        ; Exact mapped bytes FF 15 48 40 89 58: call dword ptr [0x58894048]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        movzx ebx, bl
        push 1
        pop eax
        cmove ebx, eax
        xor eax, eax
        mov dword ptr [ebp - 540h], 104h
        push eax
        push eax
        push eax
        push eax
        lea eax, [ebp - 540h]
        push eax
        lea eax, [ebp - 128h]
        push eax
        push esi
        push dword ptr [ebp - 53ch]
        ; Exact mapped bytes FF 15 30 40 89 58: call dword ptr [0x58894030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        inc esi
        cmp eax, 103h
        ; Exact mapped bytes 0F 85 0B FF FF FF: jne 0x58839712
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 53ch]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov al, bl
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 2F 78 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
