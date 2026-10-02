// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588646D0 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_588646d0() {
    __asm {
        push 0ch
        push 588ed2e0h
        ; Exact mapped bytes E8 84 E0 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        and dword ptr [ebp - 1ch], 0
        push 0
        ; Exact mapped bytes E8 35 F5 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes FF 35 8C 97 96 58: push dword ptr [0x5896978c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x8c
        __asm _emit 0x97
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 31 FF FF: call 0x5885786c
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov esi, eax
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 15 00 00 00: call 0x5886471e
        __asm _emit 0xe8
        __asm _emit 0x15
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
        ret
    }
}
