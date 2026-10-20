// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054D310 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_0054d310_0054D310() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x54d326
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0f3h
        ; Exact mapped bytes 73 1D: jae 0x54d34c
        __asm _emit 0x73
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx*8 + 588878h]
        ; Exact mapped bytes 75 0C: jne 0x54d34a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax*8 + 58887ch]
        ; Exact mapped bytes EB 04: jmp 0x54d34e
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D1: jmp 0x54d31d
        __asm _emit 0xeb
        __asm _emit 0xd1
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
