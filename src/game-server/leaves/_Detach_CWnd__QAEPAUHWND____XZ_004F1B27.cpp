// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1B27 .. +0x52 bytes.
extern "C" __declspec(naked) void _Detach_CWnd__QAEPAUHWND____XZ_004F1B27() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 29: je 0x4f1b68
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        ; Exact mapped bytes E8 69 FD FF FF: call 0x4f18af
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x4f1b5e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 22 B7 00 00: call 0x4fd280
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 38h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
