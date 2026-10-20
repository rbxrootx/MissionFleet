// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426109 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_00426109_00426109() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0
        push 3eeh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 88 0C 00: call 0x4ee9e5
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C AB 0C 00: call 0x4f0ca2
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 26 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
