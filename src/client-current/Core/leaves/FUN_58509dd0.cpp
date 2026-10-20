// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509DD0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58509dd0() {
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
        ; Exact mapped bytes E8 A2 CB FF FF: call 0x58506980
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 74 25 8E 58: push 0x588e2574
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x8e
        __asm _emit 0x58
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F9 35 34 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x00
    }
}
