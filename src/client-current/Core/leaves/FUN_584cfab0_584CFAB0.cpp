// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CFAB0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_584cfab0_584CFAB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x584cfac2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 0F: je 0x584cfad9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax], 1
        ; Exact mapped bytes EB E0: jmp 0x584cfab9
        __asm _emit 0xeb
        __asm _emit 0xe0
        mov al, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
