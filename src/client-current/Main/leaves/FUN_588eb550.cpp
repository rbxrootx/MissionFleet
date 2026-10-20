// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EB550 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_588eb550() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        push esi
        push eax
        mov eax, dword ptr [esp + 10h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [esp + 10h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BD 94 E4 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x94
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi], 589a14ech
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
