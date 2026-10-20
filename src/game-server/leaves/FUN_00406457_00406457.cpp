// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00406457 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_00406457_00406457() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581068h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 C7 AA 00 00: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 5D 23 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
