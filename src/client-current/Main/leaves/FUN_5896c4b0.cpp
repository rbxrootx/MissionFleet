// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896C4B0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_5896c4b0() {
    __asm {
        push -1
        push 5898ac58h
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
        mov dword ptr [esi], 589a2e34h
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes E8 94 FA FF FF: call 0x5896bf80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2ch]
        ; Exact mapped bytes 8B 3D 84 C1 98 58: mov edi, dword ptr [0x5898c184]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5896c515
        __asm _emit 0x74
        __asm _emit 0x16
        push -1
        push eax
        ; Exact mapped bytes FF 15 28 C1 98 58: call dword ptr [0x5898c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 28h]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 28h], 0
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 1C B6 F9 FF: call 0x58907b40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb6
        __asm _emit 0xf9
        __asm _emit 0xff
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
        ret
    }
}
