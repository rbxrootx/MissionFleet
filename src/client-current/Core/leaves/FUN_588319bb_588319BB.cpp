// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588319BB .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_588319bb_588319BB() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D F0 66 96 58 FF: cmp dword ptr [0x589666f0], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xff
        push dword ptr [ebp + 8]
        ; Exact mapped bytes 75 07: jne 0x588319d1
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 46 42 03 00: call 0x58865c15
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x588319dc
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 589666f0h
        ; Exact mapped bytes E8 B7 42 03 00: call 0x58865c92
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        pop ecx
        xor ecx, ecx
        test eax, eax
        cmove ecx, dword ptr [ebp + 8]
        mov eax, ecx
        pop ebp
        ret
    }
}
