// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100188F0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_100188f0_100188F0() {
    __asm {
        push -1
        push 1016d5abh
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
        push ecx
        push esi
        mov esi, ecx
        push 20h
        ; Exact mapped bytes E8 90 3E 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x3e
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 0E: je 0x10018931
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + 18h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 81 AC 0E 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10018933
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 180h], eax
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
