// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793FF0 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58793ff0() {
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
        ; Exact mapped bytes E8 1D 0A FA FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 54h]
        xor ecx, ecx
        mov dword ptr [esi], 58997cb4h
        cmp eax, ecx
        ; Exact mapped bytes 74 06: je 0x58794028
        __asm _emit 0x74
        __asm _emit 0x06
        movzx eax, word ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x5879402a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        dec eax
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 58h], 1
        mov dword ptr [esi + 5ch], ecx
        mov dword ptr [esi + 64h], ecx
        mov dword ptr [esi + 68h], ecx
        mov eax, esi
        pop esi
        ret 14h
    }
}
