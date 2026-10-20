// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A53C0 .. +0x49 bytes.
extern "C" __declspec(naked) void __0_AFX_COLOR_STATE__QAE_XZ_004A53C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3F 85 09 00: call 0x53d910
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 63974ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4a53ec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 10h
        ; Exact mapped bytes 73 10: jae 0x4a5402
        __asm _emit 0x73
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 4], 0ffffffh
        ; Exact mapped bytes EB E1: jmp 0x4a53e3
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
