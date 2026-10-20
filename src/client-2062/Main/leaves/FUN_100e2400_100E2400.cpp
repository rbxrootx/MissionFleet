// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E2400 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_100e2400_100E2400() {
    __asm {
        mov eax, dword ptr [esp + 18h]
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
        ; Exact mapped bytes E8 88 C5 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi], 10176534h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
