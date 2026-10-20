// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101035B0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_101035b0_101035B0() {
    __asm {
        push -1
        push 10174918h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 1
        mov dword ptr [esp + 0ch], esi
        ; Exact mapped bytes E8 4B 47 06 00: call 0x10167d20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        xor edi, edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esi], 101767e4h
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 1ch], edi
        ; Exact mapped bytes E8 67 02 00 00: call 0x10103860
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x10103603
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 1ch], edi
        mov ecx, dword ptr [esp + 0ch]
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
