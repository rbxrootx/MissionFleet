// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523C53 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_00523c53_00523C53() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 06: je 0x523c68
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 08: jne 0x523c70
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x523d1e
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C1 93 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        push 584cf8h
        ; Exact mapped bytes E8 7A 74 FD FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x523d1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 584cc8h
        ; Exact mapped bytes E8 5C 74 FD FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x523cc1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 09: jmp 0x523cca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x523cdc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        ; Exact mapped bytes E8 FA E8 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 2F: jge 0x523d1b
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 01 01 00: call 0x533e0b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 68h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 08: jne 0x523d0e
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes EB 10: jmp 0x523d1e
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB B8: jmp 0x523cd3
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
