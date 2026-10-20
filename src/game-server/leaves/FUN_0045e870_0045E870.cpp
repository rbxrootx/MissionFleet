// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E870 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0045e870_0045E870() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 77 E3 FB FF: call 0x41cc00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 4A 9F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
