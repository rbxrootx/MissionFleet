// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047CBA0 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_0047cba0_0047CBA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 ED 0A 00 00: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5F 0B 00 00: call 0x47d730
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 FB BB 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
