// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C7EB .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_5884c7eb() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes E8 E8 FA FF FF: call 0x5884c2e6
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
