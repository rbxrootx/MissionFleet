// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CFE50 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_587cfe50() {
    __asm {
        push -1
        push 58981b08h
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
        push 58a24a9ch
        mov dword ptr [esp + 0ch], 58a24a9ch
        ; Exact mapped bytes FF 15 CC C0 98 58: call dword ptr [0x5898c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D FC 47 A2 58: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 3e8h
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes E8 03 0F 0F 00: call 0x588c0da0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, dword ptr [esp + 1ch]
        mov ecx, esi
        ; Exact mapped bytes E8 88 ED FF FF: call 0x587cec30
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0ac0h], 64h
        ; Exact mapped bytes 8B 0D FC 47 A2 58: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 12ch
        ; Exact mapped bytes E8 DE 0E 0F 00: call 0x588c0da0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        push 58a24a9ch
        ; Exact mapped bytes FF 15 C8 C0 98 58: call dword ptr [0x5898c0c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        xor eax, eax
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
