// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3400 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004a3400_004A3400() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4a340e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x4a343c
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 83 3D 08 6E 68 00 00: cmp dword ptr [0x686e08], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1B: jne 0x4a3432
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 9C B9 68 00: call dword ptr [0x68b99c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4a3432
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x4a3439
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
