// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DC1B0 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_588dc1b0() {
    __asm {
        push -1
        push 589894abh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov eax, dword ptr [edi + 60b0h]
        and eax, 0ff0000h
        cmp eax, 400000h
        ; Exact mapped bytes 0F 8D 03 01 00 00: jge 0x588dc2f0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 1438h]
        mov edx, dword ptr [edi + 398h]
        xor ecx, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        sub edx, ecx
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x588dc2f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 10490h]
        add eax, dword ptr [ecx + 10488h]
        mov ecx, 5
        cdq
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x588dc2f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 6078h]
        xor edx, 0aaaaaaaah
        cmp edx, 1
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x588dc2f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 6084h]
        xor eax, 0aaaaaaaah
        cmp eax, edx
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x588dc2f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 68h
        ; Exact mapped bytes E8 F0 09 0A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        xor ebp, ebp
        mov dword ptr [esp + 20h], ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 6C: je 0x588dc2db
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 17h
        mov esi, dword ptr [edi + 8]
        mov edi, dword ptr [edi + 4]
        ; Exact mapped bytes 7E 14: jle 0x588dc297
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0C: je 0x588dc297
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ebp, dword ptr [eax + 190h]
        add ebp, 5c0h
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, dword ptr [ecx + 10524h]
        push 2328h
        ; Exact mapped bytes E8 89 09 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        sub esi, edx
        add esi, 5
        push esi
        ; Exact mapped bytes E8 76 09 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        cdq
        mov ecx, 14h
        idiv ecx
        mov ecx, dword ptr [esp + 1ch]
        sub edi, edx
        add edi, 0ah
        push edi
        push ebp
        push ebx
        ; Exact mapped bytes E8 67 CD EA FF: call 0x58789040
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xcd
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588dc2dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 2
        push -1
        mov ecx, eax
        mov dword ptr [esp + 28h], 0ffffffffh
        ; Exact mapped bytes E8 50 CC EA FF: call 0x58788f40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
