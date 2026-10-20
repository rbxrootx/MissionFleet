// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785750 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_58785750_58785750() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c8h], 14h
        ; Exact mapped bytes 72 04: jb 0x58785769
        __asm _emit 0x72
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 41: jmp 0x587857aa
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 60h]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A8 00 00 00: call 0x58785830
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58785793
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 17: jmp 0x587857aa
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c8h], edx
        mov al, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 58 00: ret 0x58
        __asm _emit 0xc2
        __asm _emit 0x58
        __asm _emit 0x00
    }
}
