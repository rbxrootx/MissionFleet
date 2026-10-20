// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780560 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58780560_58780560() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7F 08: jg 0x58780572
        __asm _emit 0x7f
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 18: jmp 0x5878058a
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        or ecx, 70000h
        or ecx, 80000000h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
