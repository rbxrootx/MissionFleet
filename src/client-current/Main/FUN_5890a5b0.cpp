// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890A5B0 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_5890a5b0() {
    __asm {
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1ch]
        push esi
        push 0
        push eax
        mov eax, dword ptr [esp + 24h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 2ch]
        push ecx
        mov ecx, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [esp + 24h]
        push eax
        mov eax, dword ptr [esp + 24h]
        push ecx
        mov ecx, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [esp + 24h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 87 0D 00 00: call 0x5890b370
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], 589a2ac4h
        mov eax, esi
        pop esi
        ret 24h
    }
}
