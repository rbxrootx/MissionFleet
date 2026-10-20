// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487F70 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58487f70() {
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
        ; Exact mapped bytes E8 92 F7 FF FF: call 0x58487710
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 70 FF 8D 58: push 0x588dff70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 59 54 3C 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x54
        __asm _emit 0x3c
        __asm _emit 0x00
    }
}
