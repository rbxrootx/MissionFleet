// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E279 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_0040e279_0040E279() {
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
        ; Exact mapped bytes 74 13: je 0x40e2a8
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 B2 FF FF: call 0x4094b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x40e2a8
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x40e2aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
