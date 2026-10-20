// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B560 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_5850b560() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 E8 FF FF FF: call 0x5850b550
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 6B B4 FF FF: call 0x585069e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
