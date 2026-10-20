// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58735590 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_58735590() {
    __asm {
        push -1
        push 5897dc68h
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
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 0ch], esi
        mov edi, dword ptr [esp + 20h]
        push edi
        ; Exact mapped bytes E8 BB 76 24 00: call 0x5897cc7e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x76
        __asm _emit 0x24
        __asm _emit 0x00
        xor edx, edx
        push -1
        lea ecx, [esi + 0ch]
        mov dword ptr [esi], 5898ca9ch
        lea eax, [edi + 0ch]
        push edx
        mov dword ptr [ecx + 18h], 0fh
        mov dword ptr [ecx + 14h], edx
        push eax
        mov dword ptr [esp + 24h], edx
        mov byte ptr [ecx + 4], dl
        ; Exact mapped bytes E8 35 F9 FF FF: call 0x58734f20
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        mov ecx, dword ptr [esp + 10h]
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
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
