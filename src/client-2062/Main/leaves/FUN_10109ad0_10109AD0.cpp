// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10109AD0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_10109ad0_10109AD0() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 14h]
        push eax
        mov eax, dword ptr [esp + 10h]
        push ecx
        mov ecx, dword ptr [esp + 10h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 6D 95 FF FF: call 0x10103060
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 5
        mov dword ptr [esi], 10176ad8h
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi + 60h], 2
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
