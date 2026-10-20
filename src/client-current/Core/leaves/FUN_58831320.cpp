// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831320 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58831320() {
    __asm {
        ; Exact mapped bytes 83 3D 1C 67 96 58 02: cmp dword ptr [0x5896671c], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 7C 15: jl 0x5883133e
        __asm _emit 0x7c
        __asm _emit 0x15
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 83 C4 F8: add esp, -8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0xf8
        ; Exact mapped bytes 83 E4 F8: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xf8
        ; Exact mapped bytes DD 0C 24: fisttp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes 8B 04 24: mov eax, dword ptr [esp]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B E1: mov esp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
