// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879AC30 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_5879ac30_5879AC30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891bf0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, ecx
        mov edi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebx + 8]
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ebx + 8], edx
        mov dword ptr [edi + 8], eax
        mov esi, dword ptr [ebx + 4]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [ebx]
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [ebx], eax
        mov dword ptr [ebx + 4], ecx
        mov dword ptr [edi], edx
        mov dword ptr [edi + 4], esi
        mov eax, dword ptr [ebx + 0ch]
        mov dword ptr [ebx + 0ch], 0
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [edi + 0ch], 0
        mov esi, dword ptr [ebx + 0ch]
        mov dword ptr [ebx + 0ch], eax
        test esi, esi
        ; Exact mapped bytes 74 28: je 0x5879acc3
        __asm _emit 0x74
        __asm _emit 0x28
        push 584a9d30h
        push 3
        push 18h
        push esi
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 48 70 09 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        push 48h
        push esi
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 74 63 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov esi, dword ptr [edi + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edi + 0ch], eax
        test esi, esi
        ; Exact mapped bytes 74 21: je 0x5879acf1
        __asm _emit 0x74
        __asm _emit 0x21
        push 584a9d30h
        push 3
        push 18h
        push esi
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E8 13 70 09 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        push 48h
        push esi
        ; Exact mapped bytes E8 46 63 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebx + 10h]
        mov eax, dword ptr [edi + 10h]
        mov dword ptr [ebx + 10h], eax
        mov eax, dword ptr [edi + 14h]
        mov dword ptr [edi + 10h], ecx
        mov ecx, dword ptr [ebx + 14h]
        mov dword ptr [ebx + 14h], eax
        mov dword ptr [edi + 14h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
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
