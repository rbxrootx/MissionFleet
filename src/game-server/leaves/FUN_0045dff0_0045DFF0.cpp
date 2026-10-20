// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045DFF0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0045dff0_0045DFF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 02 F4 08 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CC A7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa7
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
