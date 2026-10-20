// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D14A0 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_004d14a0_004D14A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x4d1552
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 14: je 0x4d14d5
        __asm _emit 0x74
        __asm _emit 0x14
        push 4edh
        push 671a64h
        ; Exact mapped bytes E8 70 78 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d14d5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4d14b8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, 686d24h
        ; Exact mapped bytes E8 4B C1 06 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 50h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 11: jne 0x4d1507
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 17 B0 00 00: call 0x4dc519
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x4d1512
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7B A2 05 00: call 0x52b78a
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 DF FE FF FF: call 0x4d1401
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 11: je 0x4d153c
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes EB 14: jmp 0x4d1550
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 671d0ch
        ; Exact mapped bytes E8 C8 F0 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 2A: jmp 0x4d157c
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DE AC 05 00: call 0x52c241
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 10: je 0x4d157c
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC 24 00 00: call 0x4d3a62
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4d157c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x4d1584
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E E2 FF FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
