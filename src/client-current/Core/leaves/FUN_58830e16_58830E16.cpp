// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830E16 .. +0x1D0 bytes.
extern "C" __declspec(naked) void FUN_58830e16_58830E16() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
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
        mov esi, dword ptr [ebp + 14h]
        push edi
        test esi, esi
        ; Exact mapped bytes 7E 14: jle 0x58830e44
        __asm _emit 0x7e
        __asm _emit 0x14
        push esi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 17 38 03 00: call 0x58864650
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        cmp eax, esi
        pop ecx
        lea esi, [eax + 1]
        ; Exact mapped bytes 7C 02: jl 0x58830e44
        __asm _emit 0x7c
        __asm _emit 0x02
        mov esi, eax
        push 0
        push 0
        push esi
        push dword ptr [ebp + 10h]
        xor eax, eax
        push 9
        inc eax
        cmp dword ptr [ebp + 24h], 0
        pop ecx
        cmovne eax, ecx
        push eax
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        mov dword ptr [ebp - 10h], edi
        test edi, edi
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x58830fd4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + edi]
        lea ecx, [eax + 8]
        cmp eax, ecx
        sbb eax, eax
        and eax, ecx
        ; Exact mapped bytes 0F 84 3F 01 00 00: je 0x58830fc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 400h
        ; Exact mapped bytes 77 13: ja 0x58830e9c
        __asm _emit 0x77
        __asm _emit 0x13
        ; Exact mapped bytes E8 52 17 00 00: call 0x588325e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, esp
        test ebx, ebx
        ; Exact mapped bytes 74 1E: je 0x58830eb2
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebx], 0cccch
        ; Exact mapped bytes EB 13: jmp 0x58830eaf
        __asm _emit 0xeb
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 6E 87 02 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ebx, eax
        pop ecx
        test ebx, ebx
        ; Exact mapped bytes 74 09: je 0x58830eb2
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebx], 0ddddh
        add ebx, 8
        mov dword ptr [ebp - 0ch], ebx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x58830fc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push esi
        push dword ptr [ebp + 10h]
        push 1
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x58830fc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push edi
        push ebx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 A8 43 89 58: call dword ptr [0x588943a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x58830fc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 400h
        test dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 74 30: je 0x58830f2f
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x58830fca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8F B8 00 00 00: jg 0x58830fca
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push eax
        push dword ptr [ebp + 18h]
        push edi
        push ebx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 A8 43 89 58: call dword ptr [0x588943a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x58830fca
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + esi]
        lea ecx, [eax + 8]
        cmp eax, ecx
        sbb eax, eax
        and eax, ecx
        ; Exact mapped bytes 74 73: je 0x58830fb0
        __asm _emit 0x74
        __asm _emit 0x73
        cmp eax, edx
        ; Exact mapped bytes 77 13: ja 0x58830f54
        __asm _emit 0x77
        __asm _emit 0x13
        ; Exact mapped bytes E8 9A 16 00 00: call 0x588325e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, esp
        test edi, edi
        ; Exact mapped bytes 74 1E: je 0x58830f6a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [edi], 0cccch
        ; Exact mapped bytes EB 13: jmp 0x58830f67
        __asm _emit 0xeb
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 B6 86 02 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 09: je 0x58830f6a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [edi], 0ddddh
        add edi, 8
        mov dword ptr [ebp - 8], edi
        test edi, edi
        ; Exact mapped bytes 74 46: je 0x58830fb7
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 0
        push 0
        push esi
        push edi
        push dword ptr [ebp - 10h]
        push ebx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 A8 43 89 58: call dword ptr [0x588943a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x58830fb7
        __asm _emit 0x74
        __asm _emit 0x2a
        xor eax, eax
        push eax
        push eax
        cmp dword ptr [ebp + 1ch], eax
        ; Exact mapped bytes 75 04: jne 0x58830f9a
        __asm _emit 0x75
        __asm _emit 0x04
        push eax
        push eax
        ; Exact mapped bytes EB 06: jmp 0x58830fa0
        __asm _emit 0xeb
        __asm _emit 0x06
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push esi
        push edi
        push eax
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes EB 07: jmp 0x58830fb7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 3E FE FF FF: call 0x58830dfd
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x58830fca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        xor esi, esi
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 2B FE FF FF: call 0x58830dfd
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        lea esp, [ebp - 1ch]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6C 00 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
