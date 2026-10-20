// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A22A .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_0041a22a_0041A22A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x41a242
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2A: jmp 0x41a26c
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E 00 00 00: call 0x41a27c
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 04: jne 0x41a257
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x41a26c
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 00 00 00: call 0x41a2d8
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x41a267
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x41a26c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 6A E5 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
