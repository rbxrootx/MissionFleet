// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586970 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_58586970_58586970() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 01 00 00: call 0x58586aa0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x5858698a
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 B7 16 F0 FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 00 00 00: call 0x585869a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
