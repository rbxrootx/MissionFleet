// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BA0E0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_584ba0e0_584BA0E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 DF FC FF: call 0x584880c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 20: jbe 0x584ba114
        __asm _emit 0x76
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 E0 FC FF: call 0x584881e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x584ba107
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 3A DF FC FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D E4 FF FF: call 0x584b8550
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe4
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
