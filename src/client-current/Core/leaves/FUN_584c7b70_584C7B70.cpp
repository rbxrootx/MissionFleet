// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C7B70 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_584c7b70_584C7B70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 58895d60h
        push 58895d0ch
        ; Exact mapped bytes FF 15 DC 44 89 58: call dword ptr [0x588944dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x584c7b99
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 15: jmp 0x584c7bae
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 8002h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 E0 44 89 58: call dword ptr [0x588944e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
