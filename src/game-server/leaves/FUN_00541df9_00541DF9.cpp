// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541DF9 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_00541df9_00541DF9() {
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
        ; Exact mapped bytes E8 FB 36 FF FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 2E 68 FB FF: call 0x4f863a
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x68
        __asm _emit 0xfb
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
