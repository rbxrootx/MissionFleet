// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415429 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_00415429_00415429() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 24h]
        mov ecx, dword ptr [esi + 28h]
        lea edx, [eax + 4]
        cmp edx, ecx
        ; Exact mapped bytes 76 0D: jbe 0x415446
        __asm _emit 0x76
        __asm _emit 0x0d
        sub eax, ecx
        mov ecx, esi
        add eax, 4
        push eax
        ; Exact mapped bytes E8 B4 F3 01 00: call 0x4347fa
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24h]
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [eax]
        mov dword ptr [ecx], eax
        add dword ptr [esi + 24h], 4
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
