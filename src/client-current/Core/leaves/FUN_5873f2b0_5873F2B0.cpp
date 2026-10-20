// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873F2B0 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5873f2b0_5873F2B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 65 00 00: call 0x587457d0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5873f2c7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 32: jmp 0x5873f2f9
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 1
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 F8 FF FF: call 0x5873ebb0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5873f2e4
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x5873f2f9
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 65 00 00: call 0x58745830
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5873f2f4
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5873f2f9
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
