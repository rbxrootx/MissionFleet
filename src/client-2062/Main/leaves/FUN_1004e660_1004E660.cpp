// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004E660 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_1004e660_1004E660() {
    __asm {
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 10h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 14h]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 14h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 28 03 0B 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x0b
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esi], 10175b64h
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 5ch], eax
        mov eax, 1
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        mov eax, 3
        mov dword ptr [esi + 68h], eax
        mov dword ptr [esi + 6ch], eax
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esi + 50h], eax
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
