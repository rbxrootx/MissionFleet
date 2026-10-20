// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441850 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_00441850_00441850() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 97 B3 FD FF: call 0x41cc00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 6A 6F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
