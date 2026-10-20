// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834062 .. +0xF7 bytes.
extern "C" __declspec(naked) void FUN_58834062_58834062() {
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
        xor ebx, ebx
        mov dword ptr [ebp - 28h], 0ch
        push eax
        mov dword ptr [ebp - 24h], eax
        mov edi, ebx
        mov dword ptr [ebp - 20h], ebx
        ; Exact mapped bytes FF 15 60 40 89 58: call dword ptr [0x58894060]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588340b1
        __asm _emit 0x74
        __asm _emit 0x18
        push ebx
        push ebx
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
        cmove ecx, edi
        mov edi, ecx
        push 588f111ch
        ; Exact mapped bytes E8 98 82 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes 8B 1D EC 43 89 58: mov ebx, dword ptr [0x588943ec]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 40: jne 0x5883410d
        __asm _emit 0x75
        __asm _emit 0x40
        push 588f1130h
        ; Exact mapped bytes E8 7C 82 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 2A: jne 0x5883410d
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
        push 588f113ch
        ; Exact mapped bytes E8 5B 82 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        mov eax, dword ptr [ebp - 1ch]
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 84 5F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x58834146
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 0b7h
        ; Exact mapped bytes 75 09: jne 0x58834123
        __asm _emit 0x75
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes EB E6: jmp 0x58834109
        __asm _emit 0xeb
        __asm _emit 0xe6
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 13: je 0x5883413c
        __asm _emit 0x74
        __asm _emit 0x13
        push dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 102h
        ; Exact mapped bytes 75 09: jne 0x58834143
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes EB DE: jmp 0x5883411a
        __asm _emit 0xeb
        __asm _emit 0xde
        push esi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        inc eax
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 FD CE FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
