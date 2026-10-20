// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E6AE .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_0042e6ae_0042E6AE() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        test eax, eax
        mov esi, ecx
        ; Exact mapped bytes 75 05: jne 0x42e6be
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 9D 6D FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        push dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 4ch], ecx
        mov ecx, esi
        push eax
        push dword ptr [esp + 10h]
        ; Exact mapped bytes E8 04 00 00 00: call 0x42e6d9
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
