// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005045E0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_005045e0_005045E0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes C7 45 FC 30 E5 5D 00: mov dword ptr [ebp - 4], 0x5de530
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x30
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 68 18 86 59 00: push 0x598618
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x86
        __asm _emit 0x59
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 FC: lea eax, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 27 BD FA FF: call 0x4b0320
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbd
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
