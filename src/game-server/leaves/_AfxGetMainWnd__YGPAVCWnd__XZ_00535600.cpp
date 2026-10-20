// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535600 .. +0x32 bytes.
extern "C" __declspec(naked) void _AfxGetMainWnd__YGPAVCWnd__XZ_00535600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 AE 41 FC FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 10: je 0x535624
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x53562b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
