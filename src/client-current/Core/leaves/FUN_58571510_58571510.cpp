// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58571510 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_58571510_58571510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 110h], 1
        ; Exact mapped bytes 7E 23: jle 0x58571548
        __asm _emit 0x7e
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 110h], ecx
        ; Exact mapped bytes EB 07: jmp 0x5857154f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
