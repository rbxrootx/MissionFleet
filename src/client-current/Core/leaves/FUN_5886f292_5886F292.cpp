// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F292 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_5886f292_5886F292() {
    __asm {
        push 0ch
        push 588ed570h
        ; Exact mapped bytes E8 C2 34 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        and dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 70 49 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes A3 14 9C 96 58: mov dword ptr [0x58969c14], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        push 1
        push 5886f270h
        ; Exact mapped bytes FF 15 A0 41 89 58: call dword ptr [0x588941a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes 83 25 14 9C 96 58 00: and dword ptr [0x58969c14], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x14
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 17 00 00 00: call 0x5886f2f9
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
