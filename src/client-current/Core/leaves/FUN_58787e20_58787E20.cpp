// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787E20 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58787e20_58787E20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 1B 18 D6 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x18
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 0fh
        ; Exact mapped bytes 74 04: je 0x58787e41
        __asm _emit 0x74
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x58787e43
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
