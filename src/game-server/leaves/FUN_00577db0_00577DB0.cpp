// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00577DB0 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_00577db0_00577DB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        cmp dword ptr [eax + 9ch], 0
        sete cl
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 00 00 00: call 0x577e28
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 75 04: jne 0x577ddf
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x577e22
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
