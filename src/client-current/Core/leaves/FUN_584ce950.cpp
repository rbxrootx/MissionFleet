// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CE950 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_584ce950() {
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
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E8 CE 01 00 00: call 0x584ceb30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
