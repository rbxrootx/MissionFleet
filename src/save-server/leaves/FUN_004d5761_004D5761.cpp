// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5761 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_004d5761_004D5761() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 F1 AE 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4d578f
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ed1h
        push 671a64h
        ; Exact mapped bytes E8 B6 35 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d578f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d576d
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E8 C9 AE 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x4d57a7
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6E: jmp 0x4d5815
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d57c4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ed6h
        push 671a64h
        ; Exact mapped bytes E8 81 35 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d57c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d57a7
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, 686da8h
        ; Exact mapped bytes E8 DC 7E 06 00: call 0x53d6b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 1A: jne 0x4d57f7
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 0F: je 0x4d57f5
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 28: call dword ptr [ecx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x28
        ; Exact mapped bytes EB 20: jmp 0x4d5815
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes EB 1C: jmp 0x4d5813
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 13: je 0x4d5813
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        ; Exact mapped bytes EB 02: jmp 0x4d5815
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
