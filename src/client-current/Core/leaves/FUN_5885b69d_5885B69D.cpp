// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885B69D .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_5885b69d_5885B69D() {
    __asm {
        push 0ch
        push 588ed280h
        ; Exact mapped bytes E8 B7 70 FD FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        and dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 4B E6 FF FF: call 0x58859d02
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F5 24 00 00: call 0x5885dbb9
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 17 00 00 00: call 0x5885b6ec
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
