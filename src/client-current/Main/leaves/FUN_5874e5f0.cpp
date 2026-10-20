// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874E5F0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_5874e5f0() {
    __asm {
        push -1
        push 5897e4f8h
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
        mov dword ptr [esi], 5898d41ch
        mov ecx, dword ptr [esi + 1e8h]
        mov dword ptr [esp + 14h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5874e642
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1e8h], 0
        mov ecx, dword ptr [esi + 1ech]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5874e65e
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1ech], 0
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 63 BF FF FF: call 0x5874a5d0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
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
