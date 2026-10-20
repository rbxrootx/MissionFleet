// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749110 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58749110_58749110() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 4]
        cmp ecx, 4
        ; Exact mapped bytes 7C 0B: jl 0x5874912e
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 4]
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x58749134
        __asm _emit 0x75
        __asm _emit 0x06
        mov al, 1
        ; Exact mapped bytes EB 04: jmp 0x58749136
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x58749136
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov esp, ebp
    }
}
