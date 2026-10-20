// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CB870 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_004cb870_004CB870() {
    __asm {
        sub esp, 10h
        push ebx
        push esi
        push edi
        push -10h
        mov edi, dword ptr [esp + 24h]
        push edi
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esi, eax
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [esp + 0ch]
        push 1
        push 1
        push ecx
        ; Exact mapped bytes FF 15 90 28 5E 00: call dword ptr [0x5e2890]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D 78 27 5E 00: mov ebx, dword ptr [0x5e2778]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea ecx, [esp + 14h]
        push ecx
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test esi, 200000h
        ; Exact mapped bytes 74 04: je 0x4cb8cb
        __asm _emit 0x74
        __asm _emit 0x04
        inc dword ptr [esp + 14h]
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes FF 15 4C 27 5E 00: call dword ptr [0x5e274c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
    }
}
