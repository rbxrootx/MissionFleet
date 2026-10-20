// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004633E0 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_004633e0_004633E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 43 51 00 00: call 0x468540
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 D9 53 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x53
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
