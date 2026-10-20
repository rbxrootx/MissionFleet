// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E7F0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0045e7f0_0045E7F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F7 E3 FB FF: call 0x41cc00
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CA 9F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
