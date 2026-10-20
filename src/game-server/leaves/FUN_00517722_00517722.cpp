// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517722 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_00517722_00517722() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 417h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x517761
        __asm _emit 0x75
        __asm _emit 0x14
        push 235h
        push 5c8c2ch
        ; Exact mapped bytes E8 A4 D2 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517761
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C7: jne 0x51772e
        __asm _emit 0x75
        __asm _emit 0xc7
        mov byte ptr [ebp - 0ah], 0
        mov byte ptr [ebp - 9], 0
        mov edx, dword ptr [ebp + 0ch]
        mov al, byte ptr [edx + 8]
        xor al, 4
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx + 8], al
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 0ah], 0
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax + 0bh], 0
        push 14h
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 D6 8B F9 FF: call 0x4b0370
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x5178c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 51 76 FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 10000000h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0B 77 FD FF: call 0x4eeecc
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 416h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5177f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 245h
        push 5c8c2ch
        ; Exact mapped bytes E8 13 D2 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5177f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x5177c1
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 415h
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51782b
        __asm _emit 0x75
        __asm _emit 0x14
        push 246h
        push 5c8c2ch
        ; Exact mapped bytes E8 DA D1 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51782b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C7: jne 0x5177f8
        __asm _emit 0x75
        __asm _emit 0xc7
        push 0
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 10000000h
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 85 76 FD FF: call 0x4eeecc
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 9]
        mov ecx, dword ptr [ebp - 0bh]
        and ecx, 0ffh
        xor eax, ecx
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x51787a
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 9]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x517886
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 0C: je 0x517886
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CB 4C 02 00: call 0x53c54f
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x5178c0
        __asm _emit 0xeb
        __asm _emit 0x3a
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 C3 E4 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 41dh
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5178c0
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B3 E6 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DD 4C 02 00: call 0x53c59d
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
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
