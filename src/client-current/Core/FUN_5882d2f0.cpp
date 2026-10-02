// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D2F0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5882d2f0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5882d30b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 10000h
        ; Exact mapped bytes 7D 0F: jge 0x5882d323
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4], 0
        ; Exact mapped bytes EB DF: jmp 0x5882d302
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
