// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846A27 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_58846a27_58846A27() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892d18h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 50h
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CD 14 C4 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x14
        __asm _emit 0xc4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        add eax, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 30h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 34h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 09: jmp 0x58846ab7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 74 02: je 0x58846ac1
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB ED: jmp 0x58846aae
        __asm _emit 0xeb
        __asm _emit 0xed
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        add eax, 4
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax], ecx
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
        mov esp, ebp
        pop ebp
        ret
    }
}
