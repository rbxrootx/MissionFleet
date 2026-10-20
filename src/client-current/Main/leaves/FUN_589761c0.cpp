// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589761C0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_589761c0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes C7 41 14 36 00 00 00: mov dword ptr [ecx + 0x14], 0x36
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4C 24 0C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4A 18: mov dword ptr [edx + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x18
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
