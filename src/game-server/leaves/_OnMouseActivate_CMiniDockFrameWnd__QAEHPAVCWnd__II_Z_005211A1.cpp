// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005211A1 .. +0x34 bytes.
extern "C" __declspec(naked) void _OnMouseActivate_CMiniDockFrameWnd__QAEHPAVCWnd__II_Z_005211A1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0ah
        ; Exact mapped bytes 72 0D: jb 0x5211bb
        __asm _emit 0x72
        __asm _emit 0x0d
        cmp dword ptr [ebp + 0ch], 11h
        ; Exact mapped bytes 77 07: ja 0x5211bb
        __asm _emit 0x77
        __asm _emit 0x07
        mov eax, 3
        ; Exact mapped bytes EB 14: jmp 0x5211cf
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B CA 01 00: call 0x53dc3a
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
