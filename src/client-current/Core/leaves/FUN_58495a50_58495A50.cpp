// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58495A50 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58495a50_58495A50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 21a88h], 0
        ; Exact mapped bytes 7E 09: jle 0x58495a6e
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58495a75
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
