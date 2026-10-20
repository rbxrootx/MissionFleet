// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B91A .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_5884b91a_5884B91A() {
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
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 5ch], edx
        mov dword ptr [esi + 64h], eax
        mov byte ptr [esi + 60h], dl
        mov dword ptr [esi + 58h], edx
        mov dword ptr [esi + 70h], edx
        mov dword ptr [esi + 54h], edx
        mov dword ptr [esi + 68h], ecx
        mov dword ptr [esi + 6ch], edx
        test eax, eax
        ; Exact mapped bytes 74 71: je 0x5884b9c2
        __asm _emit 0x74
        __asm _emit 0x71
        test ecx, ecx
        ; Exact mapped bytes 74 6D: je 0x5884b9c2
        __asm _emit 0x74
        __asm _emit 0x6d
        lea eax, [ebp - 14h]
        mov dword ptr [esi + 2ch], 80000000h
        push eax
        mov dword ptr [esi + 50h], ecx
        mov byte ptr [esi + 4ch], 1
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 24h]
        push eax
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 14 43 89 58: call dword ptr [0x58894314]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 1ch]
        push eax
        lea eax, [ebp - 18h]
        push eax
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 1C 43 89 58: call dword ptr [0x5889431c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 20h]
        push dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 16 F2 FF FF: call 0x5884abae
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, edx
        mov dword ptr [esi + 30h], eax
        mov dword ptr [esi + 3ch], ecx
        mov dword ptr [esi + 44h], ecx
        movzx ecx, word ptr [ebp - 18h]
        mov dword ptr [esi + 38h], eax
        mov dword ptr [esi + 40h], eax
        movzx eax, word ptr [ebp - 1ch]
        shl ecx, 10h
        or ecx, eax
        mov dword ptr [esi + 34h], edx
        mov dword ptr [esi + 48h], ecx
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5884b9c7
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 10000h
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 7E 56 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
