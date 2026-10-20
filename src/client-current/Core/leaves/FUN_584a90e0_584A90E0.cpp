// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A90E0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_584a90e0_584A90E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 15 00 00: call 0x584aa6a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 09: jge 0x584a90fd
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584a9104
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
