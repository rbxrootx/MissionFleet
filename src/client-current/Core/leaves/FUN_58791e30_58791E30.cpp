// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791E30 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58791e30_58791E30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 00 00 00: call 0x58791e70
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x58791e4e
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 10: jmp 0x58791e5e
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        imul eax, edx, 18h
        mov ecx, dword ptr [ebp - 4]
        mov al, byte ptr [ecx + eax + 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
