// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58743FF0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_58743ff0_58743FF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 17 00 00: call 0x587457d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58744007
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 25: jmp 0x5874402c
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 F6 FF FF: call 0x58743670
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58744017
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x5874402c
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 EE FF FF: call 0x58742f10
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58744027
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5874402c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
