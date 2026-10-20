// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104A80 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_10104a80_10104A80() {
    __asm {
        push -1
        push 10174978h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 4
        mov dword ptr [esp + 0ch], esi
        ; Exact mapped bytes E8 7B 32 06 00: call 0x10167d20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x32
        __asm _emit 0x06
        __asm _emit 0x00
        xor edi, edi
        mov ecx, esi
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esi], 10176890h
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 1ch], edi
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], edi
        ; Exact mapped bytes E8 00 03 00 00: call 0x10104dd0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x10104ae0
        __asm _emit 0x74
        __asm _emit 0x08
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 03 00 00: call 0x10104ea0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
