// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022B90 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_10022b90_10022B90() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add ecx, 0ah
        push ecx
        mov ecx, dword ptr [esi + 0c4h]
        push edx
        ; Exact mapped bytes E8 21 C1 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add ecx, 0fh
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push edx
        ; Exact mapped bytes E8 05 C1 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0c8h]
        push edx
        ; Exact mapped bytes E8 EC C0 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        mov ecx, dword ptr [esi + 74h]
        pop esi
        mov dword ptr [eax + 54h], ecx
        ret
    }
}
