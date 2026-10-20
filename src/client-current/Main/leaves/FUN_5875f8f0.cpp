// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875F8F0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5875f8f0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 90h]
        mov edx, dword ptr [esi + 100h]
        xor eax, eax
        inc ecx
        push ecx
        push eax
        push edx
        mov dword ptr [esi + 0fch], eax
        mov dword ptr [esi + 0f8h], eax
        mov dword ptr [esi + 0f4h], eax
        mov dword ptr [esi + 0f0h], eax
        ; Exact mapped bytes E8 1F D3 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd3
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        add esp, 0ch
        pop esi
        ret
    }
}
