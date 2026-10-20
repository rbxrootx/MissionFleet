// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BC450 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_584bc450_584BC450() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 FC FF FF: call 0x584bc0f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 20: jbe 0x584bc484
        __asm _emit 0x76
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 FF FF FF: call 0x584bc390
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x584bc477
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 CA BB FC FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D E7 FF FF: call 0x584bab90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe7
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
