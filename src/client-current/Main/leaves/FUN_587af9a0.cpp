// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AF9A0 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_587af9a0() {
    __asm {
        push -1
        push 5898947bh
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
        mov edi, ecx
        push 0f4241h
        ; Exact mapped bytes E8 31 FB FF FF: call 0x587af500
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 448h
        ; Exact mapped bytes E8 75 D2 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd2
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        xor esi, esi
        mov dword ptr [esp + 18h], esi
        cmp eax, esi
        ; Exact mapped bytes 74 15: je 0x587af9ff
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esp + 20h]
        push esi
        push ecx
        push 0f4241h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B3 DA FF FF: call 0x587ad4b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        lea edx, [esp + 20h]
        push edx
        lea ecx, [edi + 4]
        mov dword ptr [esp + 1ch], 0ffffffffh
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 B8 5A FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 20h]
        push eax
        lea ecx, [edi + 1ch]
        ; Exact mapped bytes E8 AB 5A FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x5a
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
