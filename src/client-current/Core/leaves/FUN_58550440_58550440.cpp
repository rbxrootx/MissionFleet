// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58550440 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58550440_58550440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x58550460
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 24: jmp 0x58550484
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 0C 10: movsx ecx, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x10
        cmp ecx, 2fh
        ; Exact mapped bytes 75 04: jne 0x58550478
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x58550484
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 2F 1F FD FF: call 0x585223b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
