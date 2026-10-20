// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6260 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_587c6260() {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0ch]
        xor edx, edx
        push -1
        add eax, 18h
        push edx
        mov dword ptr [esi + 18h], 0fh
        mov dword ptr [esi + 14h], edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 10h], edx
        mov byte ptr [esi + 4], dl
        ; Exact mapped bytes E8 97 EC F6 FF: call 0x58734f20
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, esi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
