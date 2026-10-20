// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58594800 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_58594800_58594800() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0fch], 0c8h
        ; Exact mapped bytes 75 0D: jne 0x58594823
        __asm _emit 0x75
        __asm _emit 0x0d
        push 64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 67 00 00: call 0x5859b010
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x58594831
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0c8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 67 00 00: call 0x5859b010
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
