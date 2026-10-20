// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437BD2 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_00437bd2_00437BD2() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 52 9D FF FF: call 0x43192c
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 8]
        mov dword ptr [esi + 34h], 43f304h
        mov dword ptr [esi + 1ch], eax
        mov eax, dword ptr [esp + 10h]
        and dword ptr [esi + 20h], 0
        and dword ptr [esi + 28h], 0
        mov dword ptr [esi + 2ch], eax
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [esi + 24h], eax
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [esi + 30h], eax
        mov dword ptr [esi], 43f2a0h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
