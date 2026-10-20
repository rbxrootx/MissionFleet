// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873B5E .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_58873b5e_58873B5E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
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
        push edi
        push dword ptr [ebp + 8]
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 59 41 FE FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 1ch]
        test ebx, ebx
        ; Exact mapped bytes 75 06: jne 0x58873b8b
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 18h]
        mov ebx, dword ptr [eax + 8]
        xor edi, edi
        xor eax, eax
        push edi
        push edi
        push dword ptr [ebp + 14h]
        inc eax
        cmp dword ptr [ebp + 20h], edi
        push dword ptr [ebp + 10h]
        push 9
        pop ecx
        cmovne eax, ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 87 BF FF FF: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov dword ptr [ebp - 0ch], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x58873c38
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, eax
        mov dword ptr [ebp - 8], eax
        lea ecx, [eax + 8]
        cmp eax, ecx
        sbb eax, eax
        and eax, ecx
        ; Exact mapped bytes 74 69: je 0x58873c2f
        __asm _emit 0x74
        __asm _emit 0x69
        cmp eax, 400h
        ; Exact mapped bytes 77 13: ja 0x58873be0
        __asm _emit 0x77
        __asm _emit 0x13
        ; Exact mapped bytes E8 0E EA FB FF: call 0x588325e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, esp
        test esi, esi
        ; Exact mapped bytes 74 59: je 0x58873c31
        __asm _emit 0x74
        __asm _emit 0x59
        mov dword ptr [esi], 0cccch
        ; Exact mapped bytes EB 13: jmp 0x58873bf3
        __asm _emit 0xeb
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 EA 92 FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 44: je 0x58873c31
        __asm _emit 0x74
        __asm _emit 0x44
        mov dword ptr [esi], 0ddddh
        add esi, 8
        test esi, esi
        ; Exact mapped bytes 74 37: je 0x58873c31
        __asm _emit 0x74
        __asm _emit 0x37
        push dword ptr [ebp - 8]
        push edi
        push esi
        ; Exact mapped bytes E8 0C 92 FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        push dword ptr [ebp - 0ch]
        push esi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push 1
        push ebx
        ; Exact mapped bytes E8 19 BF FF FF: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x58873c31
        __asm _emit 0x74
        __asm _emit 0x14
        push dword ptr [ebp + 18h]
        push eax
        push esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 A0 43 89 58: call dword ptr [0x588943a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58873c31
        __asm _emit 0xeb
        __asm _emit 0x02
        mov esi, edi
        push esi
        ; Exact mapped bytes E8 AF D3 FB FF: call 0x58830fe6
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        pop ecx
        cmp byte ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0A: je 0x58873c48
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 1ch]
        and dword ptr [eax + 350h], 0fffffffdh
        mov eax, edi
        lea esp, [ebp - 28h]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F6 D3 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
