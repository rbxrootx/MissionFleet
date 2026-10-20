// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831993 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58831993_58831993() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 80 3D EC 66 96 58 00: cmp byte ptr [0x589666ec], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x588319a5
        __asm _emit 0x74
        __asm _emit 0x06
        cmp byte ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 12: jne 0x588319b7
        __asm _emit 0x75
        __asm _emit 0x12
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 44 03 00: call 0x58865de5
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C D8 01 00: call 0x5884f231
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov al, 1
        pop ebp
        ret
    }
}
