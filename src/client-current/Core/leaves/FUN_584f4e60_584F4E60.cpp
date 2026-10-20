// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F4E60 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_584f4e60_584F4E60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 AB FA FF: call 0x5849fa00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xab
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 20: jbe 0x584f4e94
        __asm _emit 0x76
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 AC FA FF: call 0x5849fb40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xac
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x584f4e87
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 BA 31 F9 FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D CB FF FF: call 0x584f19d0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xcb
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
