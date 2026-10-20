// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008A6A0 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_1008a6a0_1008A6A0() {
    __asm {
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 31 F2 00 00: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 48 30: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x30
        ; Exact mapped bytes C6 80 E4 02 00 00 03: mov byte ptr [eax + 0x2e4], 3
        __asm _emit 0xc6
        __asm _emit 0x80
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
