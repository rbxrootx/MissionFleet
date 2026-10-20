// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798590 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_58798590_58798590() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588915edh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        mov dword ptr [ebp - 10h], 0
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [esi], 0
        mov ebx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 1
        cmp dword ptr [ebx], 0
        ; Exact mapped bytes 74 61: je 0x5879863d
        __asm _emit 0x74
        __asm _emit 0x61
        push 48h
        ; Exact mapped bytes E8 21 8A 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [ebp + 0ch], edi
        mov dword ptr [ebp - 4], 1
        test edi, edi
        ; Exact mapped bytes 74 18: je 0x5879860e
        __asm _emit 0x74
        __asm _emit 0x18
        push 584a9d30h
        push 584a9a20h
        push 3
        push 18h
        push dword ptr [ebx]
        push edi
        ; Exact mapped bytes E8 75 9B 09 00: call 0x58832181
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58798610
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebx, dword ptr [esi]
        mov byte ptr [ebp - 4], 0
        mov dword ptr [esi], edi
        test ebx, ebx
        ; Exact mapped bytes 74 21: je 0x5879863d
        __asm _emit 0x74
        __asm _emit 0x21
        push 584a9d30h
        push 3
        push 18h
        push ebx
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes E8 C7 96 09 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        push 48h
        push ebx
        ; Exact mapped bytes E8 FA 89 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov eax, esi
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
        ret
    }
}
