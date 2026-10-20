// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58833157 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_58833157_58833157() {
    __asm {
        push 514h
        mov eax, 58892814h
        ; Exact mapped bytes E8 05 F4 FF FF: call 0x5883256b
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 0ch]
        lea ecx, [ebp - 518h]
        mov edi, dword ptr [ebp + 8]
        xor ebx, ebx
        inc ebx
        mov dword ptr [ebp - 520h], esi
        mov dword ptr [ebp - 51ch], ebx
        ; Exact mapped bytes E8 69 B4 00 00: call 0x5883e5ef
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea ecx, [ebp - 518h]
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 51ch]
        push eax
        push edi
        ; Exact mapped bytes E8 7D B4 00 00: call 0x5883e61b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 41: jne 0x588331e3
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 32: je 0x588331e3
        __asm _emit 0x74
        __asm _emit 0x32
        mov esi, dword ptr [ebp - 118h]
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push esi
        push edi
        push 588f17c4h
        ; Exact mapped bytes E8 89 91 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 B0 6E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 520h]
        add esp, 14h
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 1478h
        push eax
        push 588f17e4h
        ; Exact mapped bytes E8 5B 91 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 3A BB C9 FF: call 0x584ced40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbb
        __asm _emit 0xc9
        __asm _emit 0xff
        lea eax, [ebp - 114h]
        push eax
        push dword ptr [ebp - 51ch]
        push esi
        push edi
        ; Exact mapped bytes E8 85 07 00 00: call 0x5883399f
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        test al, al
        ; Exact mapped bytes 75 27: jne 0x58833248
        __asm _emit 0x75
        __asm _emit 0x27
        push 588f181ch
        ; Exact mapped bytes E8 28 91 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push dword ptr [ebp - 51ch]
        push esi
        push edi
        ; Exact mapped bytes E8 66 07 00 00: call 0x5883399f
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        add esp, 14h
        test al, al
        movzx ecx, cl
        cmovne ecx, ebx
        mov bl, cl
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [ebp - 51ch], eax
        ; Exact mapped bytes 74 31: je 0x58833284
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x58833280
        __asm _emit 0x74
        __asm _emit 0x24
        push eax
        push dword ptr [ebp - 51ch]
        push 588f1850h
        ; Exact mapped bytes E8 E6 90 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 0D 6E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor eax, eax
        mov bl, al
        lea ecx, [ebp - 518h]
        ; Exact mapped bytes E8 8A F6 FF FF: call 0x58832919
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, bl
        ; Exact mapped bytes E8 93 F2 FF FF: call 0x58832529
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ret
    }
}
