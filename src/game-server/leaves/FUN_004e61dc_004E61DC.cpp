// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E61DC .. +0xF bytes.
extern "C" __declspec(naked) void FUN_004e61dc_004E61DC() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 E7 8E FE FF: call 0x4cf0d0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
