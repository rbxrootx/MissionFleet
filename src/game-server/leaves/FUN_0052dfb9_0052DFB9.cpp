// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052DFB9 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0052dfb9_0052DFB9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 4A FC FF: call 0x4f2a61
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 19: je 0x52dfed
        __asm _emit 0x74
        __asm _emit 0x19
        push 848h
        push 5c8fcch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        push edx
        ; Exact mapped bytes E8 73 D1 FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
