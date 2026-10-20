// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040368D .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_0040368d_0040368D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4036a5
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1B: jmp 0x4036c0
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 7C 04 00: call 0x44b39f
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 16 51 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
