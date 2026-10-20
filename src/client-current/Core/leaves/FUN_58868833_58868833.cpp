// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868833 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58868833_58868833() {
    __asm {
        push 8
        push 588ed470h
        ; Exact mapped bytes E8 21 9F FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 D3 B3 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        push dword ptr [eax]
        ; Exact mapped bytes E8 B5 02 00 00: call 0x58868b11
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 12 00 00 00: call 0x5886887c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
