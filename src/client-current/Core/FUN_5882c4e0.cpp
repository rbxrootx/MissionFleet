// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C4E0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_5882c4e0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 50 45 89 58: call dword ptr [0x58894550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 74 09: je 0x5882c50c
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5882c513
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
