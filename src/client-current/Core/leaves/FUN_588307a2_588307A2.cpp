// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588307A2 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_588307a2_588307A2() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 80 3D 18 62 96 58 00: cmp byte ptr [0x58966218], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x62
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x588307c0
        __asm _emit 0x75
        __asm _emit 0x12
        push 58830805h
        ; Exact mapped bytes C6 05 18 62 96 58 01: mov byte ptr [0x58966218], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x62
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes E8 0F 06 00 00: call 0x58830dce
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 14 62 96 58: mov dword ptr [0x58966214], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x62
        __asm _emit 0x96
        __asm _emit 0x58
        pop ebp
        ret
    }
}
