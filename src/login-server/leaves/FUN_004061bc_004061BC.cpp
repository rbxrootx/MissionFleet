// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004061BC .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_004061bc_004061BC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push -1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4061eb
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 32 00 00: call 0x4094b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x4061eb
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4061ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
