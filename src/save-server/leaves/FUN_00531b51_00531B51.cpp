// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00531B51 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_00531b51_00531B51() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 1D: push 0x1d
        __asm _emit 0x6a
        __asm _emit 0x1d
        ; Exact mapped bytes 68 40 66 63 00: push 0x636640
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x66
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 F9 6C FA FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FA 86 FA FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E8 EE 6C FA FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 40 5C: mov eax, dword ptr [eax + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
