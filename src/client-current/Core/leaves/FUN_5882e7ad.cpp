// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E7AD .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5882e7ad() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4D F4: lea ecx, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 36 FF FF FF: call 0x5882e6f4
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 F8 C4 8E 58: push 0x588ec4f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xc4
        __asm _emit 0x8e
        __asm _emit 0x58
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 19 EC 01 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
