// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878FCA0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_5878fca0_5878FCA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a0h], 1
        movzx ecx, word ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x5878fcd0
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 14h]
        push edx
        movzx eax, word ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 08 00 00: call 0x58790570
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5878fceb
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        movzx edx, word ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 09 00 00: call 0x58790620
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 80h]
        ; Exact mapped bytes E8 47 1F 00 00: call 0x58791c40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 01 00 00: call 0x5878fe20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
