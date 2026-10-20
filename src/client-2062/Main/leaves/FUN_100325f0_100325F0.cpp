// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100325F0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_100325f0_100325F0() {
    __asm {
        push -1
        push 1016e2dbh
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
        ; Exact mapped bytes E8 90 A1 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa1
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 0E: je 0x10032631
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + 18h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D1 62 01 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10032633
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 68h], eax
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
