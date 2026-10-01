// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875B000 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_5875b000() {
    __asm {
        push -1
        push 589899ebh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        xor eax, eax
        mov dword ptr [esi], 5898d820h
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 18h], eax
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 20h], eax
        push 98h
        mov dword ptr [esi + 2ch], eax
        ; Exact mapped bytes E8 FD 1B 22 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1b
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 14h], 0
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5875b074
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 1000h
        mov ecx, eax
        ; Exact mapped bytes E8 6E B0 16 00: call 0x588c60e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb0
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5875b076
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 30h], eax
        mov eax, esi
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        add esp, 10h
        ret
    }
}
