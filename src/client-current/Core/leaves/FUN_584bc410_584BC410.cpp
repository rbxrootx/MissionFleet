// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BC410 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_584bc410_584BC410() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 FC FF FF: call 0x584bc0c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 20: jbe 0x584bc444
        __asm _emit 0x76
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 FF FF FF: call 0x584bc350
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x584bc437
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 0A BC FC FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D E6 FF FF: call 0x584baaa0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe6
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
