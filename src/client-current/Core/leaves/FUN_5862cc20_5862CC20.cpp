// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862CC20 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5862cc20_5862CC20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 13: je 0x5862cc48
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 7D 9D E5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x9d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x5862cc4f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
