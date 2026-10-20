// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CCCC0 .. +0x1F9 bytes.
extern "C" __declspec(naked) void FUN_587cccc0() {
    __asm {
        push -1
        push 58981982h
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
        mov dword ptr [esp + 14h], edi
        mov dword ptr [edi], 5899b2c4h
        mov eax, dword ptr [edi + 4]
        xor ebx, ebx
        mov dword ptr [esp + 20h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x587ccd0b
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 1E 01 1B 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [edi + 8]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x587ccd1b
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 0E 01 1B 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [edi + 28h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x587ccd2d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 28h], ebx
        lea esi, [edi + 38h]
        mov ebp, 2
        mov ecx, dword ptr [esi - 8]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x587ccd47
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 8], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x587ccd57
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebx
        mov ecx, dword ptr [esi + 8]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x587ccd69
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 8], ebx
        mov ecx, dword ptr [esi + 10h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x587ccd7b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 10h], ebx
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 B2: jne 0x587ccd35
        __asm _emit 0x75
        __asm _emit 0xb2
        mov ecx, dword ptr [edi + 50h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x587ccd95
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 50h], ebx
        mov ecx, dword ptr [edi + 54h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x587ccda7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 54h], ebx
        mov ecx, dword ptr [edi + 58h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x587ccdb9
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 58h], ebx
        mov ecx, dword ptr [edi + 5ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x587ccdcb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 5ch], ebx
        mov ecx, dword ptr [edi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x587ccddd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 60h], ebx
        mov esi, dword ptr [edi + 68h]
        cmp esi, ebx
        ; Exact mapped bytes 74 11: je 0x587ccdf5
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, esi
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esi + 8]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp esi, ebx
        ; Exact mapped bytes 75 EF: jne 0x587ccde4
        __asm _emit 0x75
        __asm _emit 0xef
        mov dword ptr [edi + 6ch], ebx
        mov dword ptr [edi + 68h], ebx
        mov dword ptr [edi + 70h], ebx
        mov esi, dword ptr [edi + 78h]
        cmp esi, ebx
        ; Exact mapped bytes 74 11: je 0x587cce16
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, esi
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esi + 8]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp esi, ebx
        ; Exact mapped bytes 75 EF: jne 0x587cce05
        __asm _emit 0x75
        __asm _emit 0xef
        mov dword ptr [edi + 7ch], ebx
        mov dword ptr [edi + 78h], ebx
        mov dword ptr [edi + 80h], ebx
        mov esi, dword ptr [edi + 88h]
        cmp esi, ebx
        ; Exact mapped bytes 74 15: je 0x587cce41
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, esi
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esi + 8]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp esi, ebx
        ; Exact mapped bytes 75 EF: jne 0x587cce30
        __asm _emit 0x75
        __asm _emit 0xef
        mov dword ptr [edi + 8ch], ebx
        mov dword ptr [edi + 88h], ebx
        mov dword ptr [edi + 90h], ebx
        mov esi, dword ptr [edi + 98h]
        cmp esi, ebx
        ; Exact mapped bytes 74 14: je 0x587cce71
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, esi
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        mov esi, dword ptr [esi + 8]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp esi, ebx
        ; Exact mapped bytes 75 EF: jne 0x587cce60
        __asm _emit 0x75
        __asm _emit 0xef
        mov dword ptr [edi + 9ch], ebx
        mov dword ptr [edi + 98h], ebx
        mov dword ptr [edi + 0a0h], ebx
        mov dword ptr [edi + 94h], 5899b2bch
        mov dword ptr [edi + 84h], 5899b2b4h
        mov dword ptr [edi + 74h], 5899b2ach
        mov dword ptr [edi + 64h], 5899b2a4h
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
