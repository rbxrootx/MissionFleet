// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528ACB .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00528acb_00528ACB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D D4 6C 68 00 00: cmp dword ptr [0x686cd4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x528ae0
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 25: jmp 0x528b05
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x528af5
        __asm _emit 0x75
        __asm _emit 0x0f
        push 673b28h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 58 FD FF FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x528b02
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 673b30h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 FD FF FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
