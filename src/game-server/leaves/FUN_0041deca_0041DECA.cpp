// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DECA .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_0041deca_0041DECA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579f91h
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
        sub esp, 0a8h
        push edi
        push ecx
        lea edi, [ebp - 0b4h]
        mov ecx, 2ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0b0h], ecx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 9ch], eax
        push 1f7h
        push 5a1404h
        push 24h
        ; Exact mapped bytes E8 16 F1 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ach], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 20: je 0x41df56
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 9ch]
        imul ecx, ecx, 84h
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 42 2F FF FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41df60
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 0a8h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0a4h], eax
        mov dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x41df9a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a0h]
        add ecx, 1
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        cmp edx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 73 5A: jae 0x41e002
        __asm _emit 0x73
        __asm _emit 0x5a
        push 8
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 BB B3 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        push 8
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ebp + 18h]
        lea eax, [edx + ecx*8]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 50 B0 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 66 FA FF FF: call 0x41da4f
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 84h
        lea ecx, [ebp - 98h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 C6 2F FF FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 89: jmp 0x41df8b
        __asm _emit 0xeb
        __asm _emit 0x89
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3C: je 0x41e044
        __asm _emit 0x74
        __asm _emit 0x3c
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 7B C4 FE FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 4F C4 FE FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC 91 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x41e042
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 08: jmp 0x41e04a
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 04: jmp 0x41e048
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x41e04a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
        add esp, 0b4h
        cmp ebp, esp
        ; Exact mapped bytes E8 7E A7 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
