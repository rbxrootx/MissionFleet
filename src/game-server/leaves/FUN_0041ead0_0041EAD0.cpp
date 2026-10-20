// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041EAD0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_0041ead0_0041EAD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 ED 03 00 00: call 0x41eee0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 D9 9C 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
