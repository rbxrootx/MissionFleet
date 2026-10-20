// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004862B0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_004862b0_004862B0() {
    __asm {
        sub esp, 10h
        push ebx
        push esi
        push edi
        push -10h
        mov edi, dword ptr [esp + 24h]
        push edi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [esp + 0ch]
        push 1
        push 1
        push ecx
        ; Exact mapped bytes FF 15 10 BD 68 00: call dword ptr [0x68bd10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D 9C BE 68 00: mov ebx, dword ptr [0x68be9c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0x68
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
        ; Exact mapped bytes 74 04: je 0x48630b
        __asm _emit 0x74
        __asm _emit 0x04
        inc dword ptr [esp + 14h]
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes FF 15 F0 BD 68 00: call dword ptr [0x68bdf0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
    }
}
