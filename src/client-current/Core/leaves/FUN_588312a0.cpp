// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588312A0 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_588312a0() {
    __asm {
        ; Exact mapped bytes 83 3D 1C 67 96 58 02: cmp dword ptr [0x5896671c], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 7C 08: jl 0x588312b1
        __asm _emit 0x7c
        __asm _emit 0x08
        ; Exact mapped bytes 83 EC 04: sub esp, 4
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x04
        ; Exact mapped bytes DB 0C 24: fisttp dword ptr [esp]
        __asm _emit 0xdb
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
