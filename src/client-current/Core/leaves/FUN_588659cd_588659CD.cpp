// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588659CD .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_588659cd_588659CD() {
    __asm {
        push 0ch
        push 588ed330h
        ; Exact mapped bytes E8 87 CD FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        and dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 35 E2 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 34 00 00 00: call 0x58865a28
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 17 00 00 00: call 0x58865a1c
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
