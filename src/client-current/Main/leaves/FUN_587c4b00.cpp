// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4B00 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_587c4b00() {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub esp, 10h
        push esi
        mov esi, ecx
        lea ecx, [esp + 4]
        push ecx
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi], 5899adc8h
        ; Exact mapped bytes E8 29 CB 1A 00: call 0x58971646
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xcb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 8], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 10h], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esi + 14h], eax
        add esp, 4
        mov eax, esi
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
