// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858D930 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5858d930_5858D930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0F: jl 0x5858d94e
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 7F 09: jg 0x5858d94e
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5858d955
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x5858d95d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1D: jmp 0x5858d97a
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        add edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 0a4h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
