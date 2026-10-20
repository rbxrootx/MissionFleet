// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865DE5 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58865de5_58865DE5() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp byte ptr [ebp + 8], 0
        ; Exact mapped bytes 74 12: je 0x58865e02
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 83 3D 18 96 96 58 00: cmp dword ptr [0x58969618], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x58865dfe
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 32 42 FF FF: call 0x5885a030
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, 1
        pop ebp
        ret
        push 588c4d00h
        push 588c4c80h
        ; Exact mapped bytes E8 4D FB 00 00: call 0x5887595e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        pop ebp
        ret
    }
}
