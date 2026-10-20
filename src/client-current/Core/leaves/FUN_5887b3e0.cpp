// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B3E0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_5887b3e0() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes D9 FC: frndint
        __asm _emit 0xd9
        __asm _emit 0xfc
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
