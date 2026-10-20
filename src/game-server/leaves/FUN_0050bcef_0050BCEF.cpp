// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050BCEF .. +0x1F5 bytes.
extern "C" __declspec(naked) void FUN_0050bcef_0050BCEF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ec45h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x50bd29
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 AA 01 00 00: jmp 0x50bed3
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D6 51 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 20h
        ; Exact mapped bytes E8 49 52 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x50bd8f
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 24h]
        add eax, 1ch
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F0 1C FE FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2E 52 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x50bd8d
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0f003h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 11 EE FE FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50bd87
        __asm _emit 0x75
        __asm _emit 0x14
        push 165h
        push 5cba5ch
        ; Exact mapped bytes E8 7E 8C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50bd87
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x50bd62
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes EB 46: jmp 0x50bdd5
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 24h]
        add edx, 20h
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A8 1C FE FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 00 E9 5D 00 00: cmp dword ptr [0x5de900], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x50bdd5
        __asm _emit 0x74
        __asm _emit 0x2e
        push 104h
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3F 22 FE FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 20h
        ; Exact mapped bytes E8 E5 51 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B4 41 FF FF: call 0x4fff7f
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5E 23 FE FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2A 51 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C1 51 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 0f103h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 87 FE 00 00: call 0x51bc7f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f103h
        push 3
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A3 51 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 74 1A 00 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 0E: je 0x50be24
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 28h], 6
        ; Exact mapped bytes 74 32: je 0x50be4e
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [ebp - 28h], 7
        ; Exact mapped bytes 74 67: je 0x50be89
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes EB 67: jmp 0x50be8b
        __asm _emit 0xeb
        __asm _emit 0x67
        mov dword ptr [ebp - 18h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 15 1A FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 06 1A FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x50bed3
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 A4 00 00 00: call dword ptr [edx + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x50be87
        __asm _emit 0x75
        __asm _emit 0x27
        mov dword ptr [ebp - 1ch], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D9 19 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CA 19 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 4C: jmp 0x50bed3
        __asm _emit 0xeb
        __asm _emit 0x4c
        ; Exact mapped bytes EB 25: jmp 0x50beae
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes EB 23: jmp 0x50beae
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x50bea8
        __asm _emit 0x74
        __asm _emit 0x14
        push 184h
        push 5cba5ch
        ; Exact mapped bytes E8 5D 8B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50bea8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x50be8b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 20h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8B 19 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7C 19 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
