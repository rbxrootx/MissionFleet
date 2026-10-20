// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418C72 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_00418c72_00418C72() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581138h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1010ch
        ; Exact mapped bytes E8 B5 4B 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3F FB 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
