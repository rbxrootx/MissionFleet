// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858FE9 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_58858fe9_58858FE9() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 124h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x58859025
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes E8 50 94 00 00: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [eax], 0
        ; Exact mapped bytes E8 5D 94 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 8E 7F FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x588590be
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 AF 6F 01 00: call 0x5886ffda
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5885903f
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 D7 93 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB DE: jmp 0x5885901d
        __asm _emit 0xeb
        __asm _emit 0xde
        and dword ptr [ebp - 114h], 0
        lea eax, [ebp - 10ch]
        mov dword ptr [ebp - 124h], eax
        mov ecx, 105h
        mov dword ptr [ebp - 11ch], eax
        lea eax, [ebp - 124h]
        push eax
        mov dword ptr [ebp - 120h], ecx
        mov dword ptr [ebp - 118h], ecx
        mov byte ptr [ebp - 110h], 0
        ; Exact mapped bytes E8 78 FE FF FF: call 0x58858ef4
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58859097
        __asm _emit 0x74
        __asm _emit 0x16
        cmp byte ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 93: je 0x5885901d
        __asm _emit 0x74
        __asm _emit 0x93
        push dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 7B 3B 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB A5: jmp 0x5885903c
        __asm _emit 0xeb
        __asm _emit 0xa5
        push esi
        push dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 27 00 00 00: call 0x588590ca
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 110h], 0
        mov esi, eax
        pop ecx
        ; Exact mapped bytes 74 0C: je 0x588590bb
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 56 3B 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 88 7F FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
