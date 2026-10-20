// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588686DA .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_588686da_588686DA() {
    __asm {
        push 0ch
        push 588ed3d0h
        ; Exact mapped bytes E8 7A A0 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        and dword ptr [ebp - 1ch], 0
        push 6
        ; Exact mapped bytes E8 2B B5 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 F6 FF FF: call 0x58867db4
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov esi, eax
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 15 00 00 00: call 0x58868725
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
