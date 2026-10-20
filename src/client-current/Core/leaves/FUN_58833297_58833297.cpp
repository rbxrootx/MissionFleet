// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58833297 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_58833297_58833297() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        push edi
        lea eax, [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        xor esi, esi
        mov dword ptr [ebp - 28h], 0ch
        push eax
        mov dword ptr [ebp - 24h], eax
        mov ebx, esi
        mov dword ptr [ebp - 20h], esi
        ; Exact mapped bytes FF 15 60 40 89 58: call dword ptr [0x58894060]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588332e6
        __asm _emit 0x74
        __asm _emit 0x18
        push esi
        push esi
        push 1
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 5C 40 89 58: call dword ptr [0x5889405c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        lea ecx, [ebp - 28h]
        cmove ecx, ebx
        mov ebx, ecx
        push 588f0e28h
        ; Exact mapped bytes E8 63 90 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        push ebx
        ; Exact mapped bytes FF 15 EC 43 89 58: call dword ptr [0x588943ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 44: jne 0x58833344
        __asm _emit 0x75
        __asm _emit 0x44
        push 588f0e3ch
        ; Exact mapped bytes E8 49 90 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        push ebx
        ; Exact mapped bytes FF 15 EC 43 89 58: call dword ptr [0x588943ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 2A: jne 0x58833344
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 35 FC 41 89 58: mov esi, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        push 588f1160h
        ; Exact mapped bytes E8 24 90 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        mov eax, dword ptr [ebp - 1ch]
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 4D 6D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        ; Exact mapped bytes EB 4D: jmp 0x58833391
        __asm _emit 0xeb
        __asm _emit 0x4d
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 0b7h
        ; Exact mapped bytes 75 2D: jne 0x5883337e
        __asm _emit 0x75
        __asm _emit 0x2d
        push dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 102h
        ; Exact mapped bytes 75 1C: jne 0x5883337e
        __asm _emit 0x75
        __asm _emit 0x1c
        push 588f1184h
        ; Exact mapped bytes E8 E7 8F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 1ch]
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 11 6D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0A: jmp 0x58833388
        __asm _emit 0xeb
        __asm _emit 0x0a
        push edi
        ; Exact mapped bytes FF 15 E8 43 89 58: call dword ptr [0x588943e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        xor esi, esi
        inc esi
        push edi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, esi
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 B2 DC FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
