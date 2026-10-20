// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587457D0 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_587457d0_587457D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 FF FF FF: call 0x587456f0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x587457e7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 45: jmp 0x5874582c
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 FA FF FF: call 0x58745250
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x587457f7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 35: jmp 0x5874582c
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 FD FF FF: call 0x587455a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58745807
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 25: jmp 0x5874582c
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 FC FF FF: call 0x587454c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58745817
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x5874582c
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 A8 D6 FF: call 0x584b00e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa8
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58745827
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5874582c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
