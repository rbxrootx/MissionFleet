// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867F260 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_5867f260_5867F260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 1B: jl 0x5867f28a
        __asm _emit 0x7c
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2bch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 59 FC FF FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 28: jmp 0x5867f2b2
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2bch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6E 1D 1D 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1d
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2F FC FF FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
