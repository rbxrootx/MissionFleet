// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005287EE .. +0x38 bytes.
extern "C" __declspec(naked) void __0CDumpContext__QAE_PAVCFile___Z_005287EE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 10: je 0x52880b
        __asm _emit 0x74
        __asm _emit 0x10
        push 2fh
        push 673af0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 55 1A FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
