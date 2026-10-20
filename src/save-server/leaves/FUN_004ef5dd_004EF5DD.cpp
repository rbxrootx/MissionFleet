// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF5DD .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_004ef5dd_004EF5DD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ch
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x4ef5f2
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2C: jmp 0x4ef61e
        __asm _emit 0xeb
        __asm _emit 0x2c
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 64 E0 FF FF: call 0x4ed661
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x4ef605
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x4ef61e
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 00 00 00: call 0x4ef624
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
