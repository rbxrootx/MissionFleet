// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 366 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589036A0 .. +0x16E bytes.
extern "C" __declspec(naked) void FUN_589036a0_segment_00() {
    __asm {
        sub esp, 10h
        push ebx
        push edi
        mov edi, dword ptr [esp + 24h]
        mov ebx, ecx
        test edi, edi
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x58903806
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax]
        lea edx, [esp + 24h]
        push edx
        push eax
        mov eax, dword ptr [ecx + 44h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x58903806
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        push ebp
        mov ebp, dword ptr [esp + 30h]
        push esi
        push ebp
        push ecx
        ; Exact mapped bytes FF 15 4C C0 98 58: call dword ptr [0x5898c04c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [ebx + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x589036f4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [esp + 2ch]
        push eax
        push edx
        ; Exact mapped bytes FF 15 74 C0 98 58: call dword ptr [0x5898c074]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 50 C0 98 58: call dword ptr [0x5898c050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax + 8]
        mov esi, dword ptr [esp + 28h]
        mov dword ptr [esp + 10h], edx
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [esi + 4]
        cmp edx, ecx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 7D 04: jge 0x58903732
        __asm _emit 0x7d
        __asm _emit 0x04
        mov dword ptr [esp + 14h], ecx
        mov edx, dword ptr [ebx + 8]
        add ecx, edx
        cmp eax, ecx
        ; Exact mapped bytes 7E 04: jle 0x5890373f
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 1ch], ecx
        test ebp, ebp
        ; Exact mapped bytes 74 36: je 0x58903779
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 54 C0 98 58: call dword ptr [0x5898c054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        push edi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi]
        push eax
        mov eax, dword ptr [esi + 4]
        push edi
        lea edx, [esp + 1ch]
        push edx
        mov edx, dword ptr [esp + 3ch]
        push 6
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF 15 58 C0 98 58: call dword ptr [0x5898c058]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 77: jmp 0x589037f0
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, dword ptr [esp + 2ch]
        push 1
        push eax
        ; Exact mapped bytes FF 15 5C C0 98 58: call dword ptr [0x5898c05c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esp + 38h]
        ; Exact mapped bytes 8B 1D 54 C0 98 58: mov ebx, dword ptr [0x5898c054]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D 58 C0 98 58: mov ebp, dword ptr [0x5898c058]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x58
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x589037c4
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 0
        push edi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi]
        push eax
        mov eax, dword ptr [esi + 4]
        push edi
        lea edx, [esp + 1ch]
        push edx
        mov edx, dword ptr [esp + 3ch]
        push 4
        inc eax
        push eax
        inc ecx
        push ecx
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 0
        push edi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi]
        push eax
        mov eax, dword ptr [esi + 4]
        push edi
        lea edx, [esp + 1ch]
        push edx
        mov edx, dword ptr [esp + 3ch]
        push 4
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esp + 24h]
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [eax]
        push edx
        push eax
        mov eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        pop ebp
        pop edi
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
