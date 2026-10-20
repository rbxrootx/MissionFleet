// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58740A30 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_58740a30_58740A30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 4D 00 00: call 0x587457d0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58740a47
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 25: jmp 0x58740a6c
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 FB FF FF: call 0x587405d0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58740a57
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x58740a6c
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 46 00 00: call 0x58745080
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58740a67
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58740a6c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
