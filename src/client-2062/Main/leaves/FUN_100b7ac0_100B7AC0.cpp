// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B7AC0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_100b7ac0_100B7AC0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esi + 0a0h]
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 47 7C 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov esi, dword ptr [esi + 0a0h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b7af1
        __asm _emit 0x74
        __asm _emit 0x08
        or byte ptr [esi + 24h], 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
