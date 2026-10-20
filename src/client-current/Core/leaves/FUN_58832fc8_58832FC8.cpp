// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832FC8 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_58832fc8_58832FC8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
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
        xor esi, esi
        mov dword ptr [ebp - 24h], 0ch
        lea eax, [ebp - 18h]
        inc esi
        push esi
        xor ebx, ebx
        mov dword ptr [ebp - 20h], eax
        push eax
        mov dword ptr [ebp - 1ch], ebx
        mov edi, ebx
        ; Exact mapped bytes FF 15 60 40 89 58: call dword ptr [0x58894060]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x58833015
        __asm _emit 0x74
        __asm _emit 0x17
        push ebx
        push ebx
        push esi
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
        lea ecx, [ebp - 24h]
        cmove ecx, edi
        mov edi, ecx
        push 588f0014h
        ; Exact mapped bytes E8 34 93 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        push edi
        ; Exact mapped bytes FF 15 EC 43 89 58: call dword ptr [0x588943ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x58833046
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 0b7h
        push edi
        cmovne esi, ebx
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
        ; Exact mapped bytes E8 FD DF FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
