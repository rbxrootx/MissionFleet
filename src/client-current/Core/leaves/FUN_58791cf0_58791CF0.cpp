// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791CF0 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58791cf0_58791CF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 01 00 00: call 0x58791e70
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x58791d0e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 27: jmp 0x58791d35
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 01 00 00: call 0x58791e30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58791d25
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x58791d35
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 1
        imul edx, ecx, 18h
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + edx + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
