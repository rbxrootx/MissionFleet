// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D600 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0045d600_0045D600() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        cmp eax, 5
        ; Exact mapped bytes 7D 12: jge 0x45d622
        __asm _emit 0x7d
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        imul eax, eax, 3
        add eax, 5d78d8h
        ; Exact mapped bytes EB 05: jmp 0x45d627
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 5ba418h
        pop ebp
        ret
    }
}
