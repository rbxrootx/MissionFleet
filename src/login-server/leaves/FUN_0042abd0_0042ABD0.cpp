// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042ABD0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_0042abd0_0042ABD0() {
    __asm {
        sub esp, 10h
        push ebx
        push esi
        push edi
        push -10h
        mov edi, dword ptr [esp + 24h]
        push edi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes FF 15 90 C4 43 00: call dword ptr [0x43c490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [esp + 0ch]
        push 1
        push 1
        push ecx
        ; Exact mapped bytes FF 15 70 C3 43 00: call dword ptr [0x43c370]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D 14 C4 43 00: mov ebx, dword ptr [0x43c414]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x14
        __asm _emit 0xc4
        __asm _emit 0x43
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
        ; Exact mapped bytes 74 04: je 0x42ac2b
        __asm _emit 0x74
        __asm _emit 0x04
        inc dword ptr [esp + 14h]
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes FF 15 D8 C3 43 00: call dword ptr [0x43c3d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
    }
}
