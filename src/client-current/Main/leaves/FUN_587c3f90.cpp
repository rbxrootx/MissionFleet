// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3F90 .. +0x1C8 bytes.
extern "C" __declspec(naked) void FUN_587c3f90() {
    __asm {
        sub esp, 90h
        push ebx
        mov ebx, dword ptr [esp + 98h]
        push esi
        push edi
        mov edi, dword ptr [esp + 0a4h]
        xor esi, esi
        push edi
        lea eax, [esp + 24h]
        mov dword ptr [esp + 18h], ecx
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 20h], esi
        mov dword ptr [esp + 24h], esi
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes E8 FA 5A 14 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5a
        __asm _emit 0x14
        __asm _emit 0x00
        cmp dword ptr [eax + 3ch], esi
        ; Exact mapped bytes 0F 8E 78 01 00 00: jle 0x587c4147
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        lea ecx, [esp + 28h]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 E3 5A 14 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5a
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, esi
        and edx, 1
        mov ebp, edx
        imul ebp, dword ptr [eax + 50h]
        push edi
        lea eax, [esp + 28h]
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes E8 C3 5A 14 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5a
        __asm _emit 0x14
        __asm _emit 0x00
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 0F 8E 10 01 00 00: jle 0x587c4117
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea ecx, [esp + 28h]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 AC 5A 14 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5a
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [eax + 38h]
        imul eax, esi
        add eax, dword ptr [esp + 10h]
        push edi
        lea esi, [eax + eax*4]
        add esi, esi
        mov ecx, ebx
        add esi, esi
        ; Exact mapped bytes E8 E3 5A 14 00: call 0x58909b10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5a
        __asm _emit 0x14
        __asm _emit 0x00
        mov ebx, dword ptr [eax + esi]
        cmp ebx, -1
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587c40dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 51eb851fh
        imul ebx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        imul ecx, ecx, 64h
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov esi, ebx
        push eax
        sub esi, ecx
        ; Exact mapped bytes 8B 0D 24 46 A2 58: mov ecx, dword ptr [0x58a24624]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 E1 BC FE FF: call 0x587afd50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x587c40dd
        __asm _emit 0x74
        __asm _emit 0x6a
        cmp dword ptr [eax + 160h], esi
        ; Exact mapped bytes 7E 62: jle 0x587c40dd
        __asm _emit 0x7e
        __asm _emit 0x62
        test esi, esi
        ; Exact mapped bytes 7C 5E: jl 0x587c40dd
        __asm _emit 0x7c
        __asm _emit 0x5e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x587c40dd
        __asm _emit 0x74
        __asm _emit 0x54
        shl esi, 6
        add esi, eax
        test esi, esi
        ; Exact mapped bytes 74 4B: je 0x587c40dd
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 18h]
        push eax
        mov eax, dword ptr [esp + 0b0h]
        push ebp
        push esi
        push ebx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, eax
        mov eax, dword ptr [esp + 0b0h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 22 EC 13 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0b4h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 53 EC 13 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 18h]
        push esi
        push edx
        push ebp
        ; Exact mapped bytes E8 93 99 14 00: call 0x5890da70
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x99
        __asm _emit 0x14
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        mov ebx, dword ptr [esp + 0a4h]
        push edi
        lea eax, [esp + 28h]
        inc esi
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes E8 C6 59 14 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x59
        __asm _emit 0x14
        __asm _emit 0x00
        add ebp, dword ptr [eax + 40h]
        push edi
        lea ecx, [esp + 28h]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 B6 59 14 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x59
        __asm _emit 0x14
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 38h]
        mov esi, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F 8C F0 FE FF FF: jl 0x587c4007
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        lea edx, [esp + 28h]
        inc esi
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E8 97 59 14 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x59
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [eax + 44h]
        add dword ptr [esp + 20h], eax
        push edi
        lea ecx, [esp + 28h]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 83 59 14 00: call 0x58909ac0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x59
        __asm _emit 0x14
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 8C 8A FE FF FF: jl 0x587c3fd0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 90h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
