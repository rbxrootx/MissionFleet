// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E7920 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_585e7920_585E7920() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ah
        ; Exact mapped bytes 75 1A: jne 0x585e7952
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 288h]
        mov dword ptr [ebp - 8], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F E5 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
