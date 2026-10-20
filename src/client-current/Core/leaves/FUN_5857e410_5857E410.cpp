// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E410 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5857e410_5857E410() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 65 F0 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A7 34 FF FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 4
        ; Exact mapped bytes 75 18: jne 0x5857e449
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80010d04h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 E5 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe5
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
