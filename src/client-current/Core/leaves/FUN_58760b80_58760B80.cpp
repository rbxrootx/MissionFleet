// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58760B80 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_58760b80_58760B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ecch], 0
        ; Exact mapped bytes 74 24: je 0x58760bb9
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 7E 1E: jle 0x58760bb9
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D8 AD D2 FF: call 0x5848b990
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xad
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 5D D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5d
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x58760c53
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 12b4h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9C 74 D2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x74
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58760bf6
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 20h]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8B 6E D2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 12b4h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 83 75 D2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x75
        __asm _emit 0xd2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 BA 6D D2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x6d
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 36: je 0x58760c53
        __asm _emit 0x74
        __asm _emit 0x36
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 1B 6E D2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 25: jne 0x58760c51
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        add ecx, 12b4h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 62 93 D5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x93
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x58760c53
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 94: jmp 0x58760be7
        __asm _emit 0xeb
        __asm _emit 0x94
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
