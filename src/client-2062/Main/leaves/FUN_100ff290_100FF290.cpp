// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF290 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_100ff290_100FF290() {
    __asm {
        push -1
        push 10174738h
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
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 14h]
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push edi
        push edi
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 20h], esi
        ; Exact mapped bytes E8 E6 F6 FF FF: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esi + 5ch], ecx
        mov ecx, esi
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esi], 10176734h
        mov dword ptr [esi + 0f8h], eax
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], 7fffffffh
        mov dword ptr [esi + 60h], edi
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 0ech], 1
        mov dword ptr [esi + 0f0h], edi
        mov dword ptr [esi + 0f4h], edi
        mov dword ptr [esi + 0e8h], edi
        ; Exact mapped bytes E8 C5 04 00 00: call 0x100ff7e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x04
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
