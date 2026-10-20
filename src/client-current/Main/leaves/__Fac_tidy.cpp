// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897186C .. +0x35 bytes.
extern "C" __declspec(naked) void __Fac_tidy() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push 0
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 84 FE FF FF: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x5897188e
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, eax
        mov eax, dword ptr [eax]
        push 1
        ; Exact mapped bytes A3 AC 85 A2 58: mov dword ptr [0x58a285ac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 FE FF FF: call 0x5897176e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 AC 85 A2 58: mov eax, dword ptr [0x58a285ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 E7: jne 0x5897187e
        __asm _emit 0x75
        __asm _emit 0xe7
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 89 FE FF FF: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        leave
        ret
    }
}
