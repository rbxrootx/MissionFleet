// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426090 .. +0x38 bytes.
extern "C" __declspec(naked) void __0CCommonDialog__QAE_PAVCWnd___Z_00426090() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 6eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B A4 0C 00: call 0x4f04c7
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 581190h
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 1E 27 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x27
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
