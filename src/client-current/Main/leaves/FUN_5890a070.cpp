// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890A070 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_5890a070() {
    __asm {
        push -1
        push 5898aa48h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 589a2a98h
        mov eax, dword ptr [esi + 1ch]
        xor edi, edi
        mov dword ptr [esp + 18h], edi
        cmp eax, edi
        ; Exact mapped bytes 74 66: je 0x5890a112
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [esi + 2ch]
        mov ecx, dword ptr [eax]
        push edx
        push eax
        mov eax, dword ptr [ecx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 2ch]
        cmp eax, edi
        ; Exact mapped bytes 74 0B: je 0x5890a0ca
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 2ch], edi
        mov eax, dword ptr [esi + 28h]
        cmp eax, edi
        ; Exact mapped bytes 74 0B: je 0x5890a0dc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 28h], edi
        mov eax, dword ptr [esi + 24h]
        cmp eax, edi
        ; Exact mapped bytes 74 0B: je 0x5890a0ee
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 24h], edi
        mov eax, dword ptr [esi + 20h]
        cmp eax, edi
        ; Exact mapped bytes 74 0B: je 0x5890a100
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 20h], edi
        mov eax, dword ptr [esi + 1ch]
        cmp eax, edi
        ; Exact mapped bytes 74 0B: je 0x5890a112
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1ch], edi
        mov eax, dword ptr [esi + 18h]
        cmp eax, edi
        ; Exact mapped bytes 74 12: je 0x5890a12b
        __asm _emit 0x74
        __asm _emit 0x12
        push edi
        push eax
        ; Exact mapped bytes FF 15 28 C1 98 58: call dword ptr [0x5898c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 18h]
        push eax
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 F6 29 06 00: call 0x5896cb30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
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
        add esp, 10h
        ret
    }
}
