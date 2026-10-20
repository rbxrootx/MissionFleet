// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786B30 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58786b30_58786B30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0e4h]
        ; Exact mapped bytes 76 04: jbe 0x58786b49
        __asm _emit 0x76
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x58786b4b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
