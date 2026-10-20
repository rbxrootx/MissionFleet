// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588721EF .. +0x1ED bytes.
extern "C" __declspec(naked) void FUN_588721ef_588721EF() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
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
        mov edi, dword ptr [ebp + 18h]
        test edi, edi
        ; Exact mapped bytes 7E 14: jle 0x5887221e
        __asm _emit 0x7e
        __asm _emit 0x14
        push edi
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 3D 24 FF FF: call 0x58864650
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        cmp eax, edi
        pop ecx
        lea edi, [eax + 1]
        ; Exact mapped bytes 7C 02: jl 0x5887221e
        __asm _emit 0x7c
        __asm _emit 0x02
        mov edi, eax
        mov ebx, dword ptr [ebp + 24h]
        test ebx, ebx
        ; Exact mapped bytes 75 0B: jne 0x58872230
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax]
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ebp + 24h], ebx
        push 0
        push 0
        push edi
        push dword ptr [ebp + 14h]
        xor eax, eax
        inc eax
        cmp dword ptr [ebp + 28h], 0
        push 9
        pop ecx
        cmovne eax, ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 E3 D8 FF FF: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov dword ptr [ebp - 8], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x588723ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, eax
        lea ecx, [eax + 8]
        cmp eax, ecx
        sbb eax, eax
        and eax, ecx
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x588723bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 400h
        ; Exact mapped bytes 77 17: ja 0x58872289
        __asm _emit 0x77
        __asm _emit 0x17
        ; Exact mapped bytes E8 69 03 FC FF: call 0x588325e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, esp
        test esi, esi
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x588723bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], 0cccch
        ; Exact mapped bytes EB 17: jmp 0x588722a0
        __asm _emit 0xeb
        __asm _emit 0x17
        push eax
        ; Exact mapped bytes E8 41 AC FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 0F 84 25 01 00 00: je 0x588723bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], 0ddddh
        add esi, 8
        test esi, esi
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x588723bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 8]
        push esi
        push edi
        push dword ptr [ebp + 14h]
        push 1
        push ebx
        ; Exact mapped bytes E8 74 D8 FF FF: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x588723bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 8]
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push edi
        push esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D9 D5 FF FF: call 0x5886f8b6
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x588723bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 400h
        test dword ptr [ebp + 10h], edx
        ; Exact mapped bytes 74 38: je 0x58872329
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp + 20h]
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x588723c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 0F 8F BB 00 00 00: jg 0x588723bf
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        push ecx
        push ecx
        push ecx
        push eax
        push dword ptr [ebp + 1ch]
        push edi
        push esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9C D5 FF FF: call 0x5886f8b6
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x588723c1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x588723bf
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + ebx]
        lea ecx, [eax + 8]
        cmp eax, ecx
        sbb eax, eax
        and eax, ecx
        ; Exact mapped bytes 74 7B: je 0x588723b2
        __asm _emit 0x74
        __asm _emit 0x7b
        cmp eax, edx
        ; Exact mapped bytes 77 13: ja 0x5887234e
        __asm _emit 0x77
        __asm _emit 0x13
        ; Exact mapped bytes E8 A0 02 FC FF: call 0x588325e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, esp
        test edi, edi
        ; Exact mapped bytes 74 6E: je 0x588723b4
        __asm _emit 0x74
        __asm _emit 0x6e
        mov dword ptr [edi], 0cccch
        ; Exact mapped bytes EB 13: jmp 0x58872361
        __asm _emit 0xeb
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 7C AB FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 59: je 0x588723b4
        __asm _emit 0x74
        __asm _emit 0x59
        mov dword ptr [edi], 0ddddh
        add edi, 8
        test edi, edi
        ; Exact mapped bytes 74 4C: je 0x588723b4
        __asm _emit 0x74
        __asm _emit 0x4c
        xor eax, eax
        push eax
        push eax
        push eax
        push ebx
        push edi
        push dword ptr [ebp - 8]
        push esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 38 D5 FF FF: call 0x5886f8b6
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x588723b4
        __asm _emit 0x74
        __asm _emit 0x32
        xor eax, eax
        push eax
        push eax
        cmp dword ptr [ebp + 20h], eax
        ; Exact mapped bytes 75 1F: jne 0x588723aa
        __asm _emit 0x75
        __asm _emit 0x1f
        push eax
        push eax
        push ebx
        push edi
        push eax
        push dword ptr [ebp + 24h]
        ; Exact mapped bytes E8 51 D8 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        add esp, 20h
        test ebx, ebx
        ; Exact mapped bytes 74 13: je 0x588723b4
        __asm _emit 0x74
        __asm _emit 0x13
        push edi
        ; Exact mapped bytes E8 3F EC FB FF: call 0x58830fe6
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 17: jmp 0x588723c1
        __asm _emit 0xeb
        __asm _emit 0x17
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        ; Exact mapped bytes EB DB: jmp 0x5887238d
        __asm _emit 0xeb
        __asm _emit 0xdb
        xor edi, edi
        push edi
        ; Exact mapped bytes E8 2C EC FB FF: call 0x58830fe6
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 02: jmp 0x588723bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        xor ebx, ebx
        push esi
        ; Exact mapped bytes E8 1F EC FB FF: call 0x58830fe6
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        pop ecx
        mov eax, ebx
        lea esp, [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 76 EC FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
