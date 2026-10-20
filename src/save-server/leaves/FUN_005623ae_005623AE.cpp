// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005623AE .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_005623ae_005623AE() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 68 C5 02 00 00: push 0x2c5
        __asm _emit 0x68
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 F0 C6 67 00: push 0x67c6f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xc6
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 98 7E F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7e
        __asm _emit 0xf7
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
