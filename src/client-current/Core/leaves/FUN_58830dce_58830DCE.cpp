// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830DCE .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58830dce_58830DCE() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 20 60 90 58 00: cmp dword ptr [0x58906020], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 32 19 03 00: je 0x58862710
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 A4 43 89 58: call dword ptr [0x588943a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 60 90 58: mov ecx, dword ptr [0x58906020]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        dec ecx
        ; Exact mapped bytes 89 0D 20 60 90 58: mov dword ptr [0x58906020], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ecx*4 + 58966330h], eax
        pop ebp
        ret
    }
}
