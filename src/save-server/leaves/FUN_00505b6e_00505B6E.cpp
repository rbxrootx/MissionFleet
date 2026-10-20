// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00505B6E .. +0x239 bytes.
extern "C" __declspec(naked) void FUN_00505b6e_00505B6E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 51 0B 00 00: call 0x5066d3
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x505c9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 74h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D7 10 00 00: call 0x506c75
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x505bbb
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cdh
        push 677edch
        ; Exact mapped bytes E8 8A 31 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505bbb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x505ba1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 74h]
        and edx, 5000h
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x505bdc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 20h]
        add eax, 38h
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 09: jmp 0x505be5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 28h
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0e81bh
        ; Exact mapped bytes 72 47: jb 0x505c6a
        __asm _emit 0x72
        __asm _emit 0x47
        cmp dword ptr [ebp - 14h], 0e81eh
        ; Exact mapped bytes 77 3E: ja 0x505c6a
        __asm _emit 0x77
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 94h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 94h
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E3 1C FE FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 FF 94 01 00: call 0x51f183
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 6ch]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 6ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x505da0
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 78h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 75 30: jne 0x505cdc
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 78h]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x505cc4
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 18: je 0x505cdc
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 78h]
        and eax, 5000h
        test eax, eax
        ; Exact mapped bytes 74 6C: je 0x505d3f
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 63: je 0x505d3f
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 70h]
        and eax, 40h
        or ah, 20h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0a4h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 48h
        ; Exact mapped bytes E8 12 C6 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0a8h], edx
        mov dword ptr [ecx + 0ach], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ach]
        push edx
        mov eax, dword ptr [ecx + 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 36 97 01 00: call 0x51f473
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x505da0
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 70h]
        and edx, 40h
        or dh, 10h
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0a4h], edx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 58h
        ; Exact mapped bytes E8 AF C5 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0a8h], ecx
        mov dword ptr [eax + 0ach], edx
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        mov edx, dword ptr [eax + 0a8h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 D3 96 01 00: call 0x51f473
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
