// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790760 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_58790760_58790760() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], eax
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 94 00 00 00: mov word ptr [eax + 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 98h], 1
        ; Exact mapped bytes 75 1B: jne 0x587907a7
        __asm _emit 0x75
        __asm _emit 0x1b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 56 CF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x56
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, 7dh
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 94 00 00 00: mov word ptr [eax + 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x587907b2
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 56 CF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x56
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
