// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C61F0 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_587c61f0() {
    __asm {
        push -1
        push 5897dc08h
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
        mov dword ptr [esp + 8], esi
        ; Exact mapped bytes E8 67 6A 1B 00: call 0x5897cc84
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6a
        __asm _emit 0x1b
        __asm _emit 0x00
        xor eax, eax
        lea ecx, [esi + 0ch]
        mov dword ptr [esi], 5899ae70h
        push -1
        mov dword ptr [ecx + 14h], eax
        mov dword ptr [ecx + 18h], 0fh
        push eax
        mov dword ptr [esp + 1ch], eax
        mov byte ptr [ecx + 4], al
        mov eax, dword ptr [esp + 24h]
        push eax
        ; Exact mapped bytes E8 DA EC F6 FF: call 0x58734f20
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
