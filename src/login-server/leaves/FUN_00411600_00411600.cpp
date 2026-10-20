// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411600 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00411600_00411600() {
    __asm {
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 14h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 1ch]
        push eax
        mov eax, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 18h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 43 FB FF FF: call 0x411170
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi], 43d45ch
        mov dword ptr [esi + 104h], 3
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
