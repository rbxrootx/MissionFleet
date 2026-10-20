// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588633B0 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_588633b0() {
    __asm {
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 0F B7 12: movzx edx, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x12
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
