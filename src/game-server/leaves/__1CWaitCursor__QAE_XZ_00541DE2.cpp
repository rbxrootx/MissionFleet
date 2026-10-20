// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541DE2 .. +0x17 bytes.
extern "C" __declspec(naked) void __1CWaitCursor__QAE_XZ_00541DE2() {
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
        ; Exact mapped bytes E8 12 37 FF FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 20 68 FB FF: call 0x4f8615
        __asm _emit 0xe8
        __asm _emit 0x20
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
