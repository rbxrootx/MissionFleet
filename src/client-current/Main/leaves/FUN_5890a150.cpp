// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890A150 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_5890a150() {
    __asm {
        ; Exact mapped bytes 83 79 28 00: cmp dword ptr [ecx + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x5890a166
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 41 28: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x28
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 41 1C: mov eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x1c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
