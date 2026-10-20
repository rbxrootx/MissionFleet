// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862BC70 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5862bc70_5862BC70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 12c0h]
        ; Exact mapped bytes 73 12: jae 0x5862bc99
        __asm _emit 0x73
        __asm _emit 0x12
        imul edx, dword ptr [ebp + 8], 1ch
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 12c4h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 07: jmp 0x5862bca0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
