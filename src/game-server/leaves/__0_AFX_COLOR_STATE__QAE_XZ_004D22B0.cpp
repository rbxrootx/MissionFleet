// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D22B0 .. +0x49 bytes.
extern "C" __declspec(naked) void __0_AFX_COLOR_STATE__QAE_XZ_004D22B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F 04 07 00: call 0x542720
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 58712ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4d22dc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 10h
        ; Exact mapped bytes 73 10: jae 0x4d22f2
        __asm _emit 0x73
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 4], 0ffffffh
        ; Exact mapped bytes EB E1: jmp 0x4d22d3
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
