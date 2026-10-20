// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588583BA .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_588583ba_588583BA() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 254h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x588583fa
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes E8 90 A0 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 C1 8B FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 58 8C FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
        cmp eax, -1
        ; Exact mapped bytes 74 DB: je 0x588583da
        __asm _emit 0x74
        __asm _emit 0xdb
        test esi, esi
        ; Exact mapped bytes 74 D7: je 0x588583da
        __asm _emit 0x74
        __asm _emit 0xd7
        lea ecx, [ebp - 254h]
        push ecx
        push eax
        ; Exact mapped bytes FF 15 EC 41 89 58: call dword ptr [0x588941ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x58858454
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push 2
        pop esi
        sub eax, esi
        ; Exact mapped bytes 74 29: je 0x5885844b
        __asm _emit 0x74
        __asm _emit 0x29
        sub eax, 1
        ; Exact mapped bytes 74 24: je 0x5885844b
        __asm _emit 0x74
        __asm _emit 0x24
        sub eax, 5
        ; Exact mapped bytes 74 12: je 0x5885843e
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, 0ah
        ; Exact mapped bytes 74 1A: je 0x5885844b
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes E8 39 A0 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes EB AC: jmp 0x588583ea
        __asm _emit 0xeb
        __asm _emit 0xac
        ; Exact mapped bytes E8 2C A0 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 0ch
        ; Exact mapped bytes EB 9F: jmp 0x588583ea
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes E8 1F A0 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        ; Exact mapped bytes EB 96: jmp 0x588583ea
        __asm _emit 0xeb
        __asm _emit 0x96
        mov eax, dword ptr [ebp - 254h]
        xor ecx, ecx
        cmp eax, 80h
        cmove eax, ecx
        mov dword ptr [esi], eax
        lea eax, [ebp - 250h]
        push eax
        ; Exact mapped bytes E8 60 00 00 00: call 0x588584d2
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 8], eax
        lea eax, [ebp - 248h]
        push eax
        mov dword ptr [esi + 0ch], edx
        ; Exact mapped bytes E8 4E 00 00 00: call 0x588584d2
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 10h], eax
        lea eax, [ebp - 240h]
        push eax
        mov dword ptr [esi + 14h], edx
        ; Exact mapped bytes E8 3C 00 00 00: call 0x588584d2
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 18h], eax
        mov eax, dword ptr [ebp - 234h]
        mov dword ptr [esi + 20h], eax
        lea eax, [ebp - 228h]
        push eax
        lea eax, [esi + 24h]
        mov dword ptr [esi + 1ch], edx
        push 104h
        push eax
        ; Exact mapped bytes E8 C6 EA 00 00: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 0F 84 28 FF FF FF: je 0x588583ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 08 8B FF FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
