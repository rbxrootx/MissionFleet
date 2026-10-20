// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E6DF0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_585e6df0_585E6DF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 10688h]
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x585e6e07
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0C: jmp 0x585e6e13
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp + 8]
        mov byte ptr [edx + 10688h], al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
