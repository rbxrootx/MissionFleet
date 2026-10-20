// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002C2F0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_1002c2f0_1002C2F0() {
    __asm {
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 24h]
        push eax
        mov eax, dword ptr [esp + 20h]
        push ecx
        mov ecx, dword ptr [esp + 20h]
        push edx
        mov edx, dword ptr [esp + 20h]
        push eax
        mov eax, dword ptr [esp + 20h]
        push ecx
        mov ecx, dword ptr [esp + 20h]
        push edx
        mov edx, dword ptr [esp + 20h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 59 78 0D 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi], 10175770h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
