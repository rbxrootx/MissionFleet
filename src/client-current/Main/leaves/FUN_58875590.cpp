// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875590 .. +0x278 bytes.
extern "C" __declspec(naked) void FUN_58875590() {
    __asm {
        push -1
        push 58986498h
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
        lea eax, [esp + 14h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, ecx
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [ebx], 5899ef80h
        mov dword ptr [esp + 1ch], 0
        lea esi, [ebx + 5ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x588755e4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x588755d0
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 64h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x58875608
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x588755f4
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 6ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x5887562c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x58875618
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 74h]
        mov edi, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x58875654
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x58875640
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 7ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x58875678
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x58875664
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 84h]
        mov edi, 2
        ; Exact mapped bytes EB 03: jmp 0x58875690
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x588756a4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x58875690
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 8ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x588756cb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x588756b7
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 94h]
        mov edi, 2
        mov edi, edi
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x588756f4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x588756e0
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 9ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x5887571b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x58875707
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 0a4h]
        mov edi, 2
        mov edi, edi
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x58875744
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x58875730
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 0ach]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x5887576b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x58875757
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 0b4h]
        mov edi, 2
        mov edi, edi
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x58875794
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x58875780
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 0bch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x588757bb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x588757a7
        __asm _emit 0x75
        __asm _emit 0xe4
        lea esi, [ebx + 50h]
        mov edi, 3
        ; Exact mapped bytes EB 03: jmp 0x588757d0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x588757e4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E4: jne 0x588757d0
        __asm _emit 0x75
        __asm _emit 0xe4
        mov ecx, ebx
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 E5 DB 08 00: call 0x589033e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
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
    }
}
