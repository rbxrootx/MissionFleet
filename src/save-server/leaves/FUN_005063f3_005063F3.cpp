// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005063F3 .. +0x17D bytes.
extern "C" __declspec(naked) void FUN_005063f3_005063F3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 70 F4 00 00: call 0x51587a
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x5064f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 68h]
        mov eax, dword ptr [edx + 68h]
        and eax, 0f000h
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x5064f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 90h], 0e81bh
        ; Exact mapped bytes 72 0F: jb 0x506446
        __asm _emit 0x72
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 90h], 0e81eh
        ; Exact mapped bytes 76 20: jbe 0x506466
        __asm _emit 0x76
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 14: je 0x506466
        __asm _emit 0x74
        __asm _emit 0x14
        push 177h
        push 677edch
        ; Exact mapped bytes E8 DF 28 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506466
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BC: jne 0x506428
        __asm _emit 0x75
        __asm _emit 0xbc
        mov edx, dword ptr [ebp - 20h]
        add edx, 94h
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 74 24: je 0x5064c3
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 89 E2 00 00: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0A 15 FE FF: call 0x4e79cd
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 E8 8D 01 00: call 0x51f2c5
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 6ch]
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
        ; Exact mapped bytes EB 74: jmp 0x506569
        __asm _emit 0xeb
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0a8h]
        mov edx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7C 06: jl 0x506516
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 2F: jge 0x506545
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 94h
        ; Exact mapped bytes E8 EA BD 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 5B 65 02 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 12 57 02 00: call 0x52bc57
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 0A 8F 01 00: call 0x51f473
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8f
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
