// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042A57A .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_0042a57a_0042A57A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x42a67f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x42a67f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x42a660
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 20h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 1
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 38 C1 68 00: call dword ptr [0x68c138]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F8 A7 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 4C: jne 0x42a649
        __asm _emit 0x75
        __asm _emit 0x4c
        mov esi, esp
        ; Exact mapped bytes FF 15 8C C1 68 00: call dword ptr [0x68c18c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E4 A7 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 3e5h
        ; Exact mapped bytes 75 02: jne 0x42a61a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 46: jmp 0x42a660
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp - 10h], 2747h
        ; Exact mapped bytes 74 09: je 0x42a62c
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 274ah
        ; Exact mapped bytes 75 04: jne 0x42a630
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x42a681
        __asm _emit 0xeb
        __asm _emit 0x51
        cmp dword ptr [ebp - 10h], 2733h
        ; Exact mapped bytes 74 10: je 0x42a649
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D2 13 00 00: call 0x42ba17
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 38: jmp 0x42a681
        __asm _emit 0xeb
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x42a5c1
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 0F: je 0x42a678
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes E8 C8 1C 00 00: call 0x42c340
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x42a681
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 64 A7 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
