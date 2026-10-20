// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA795 .. +0x32 bytes.
extern "C" __declspec(naked) void _GetMainWnd_CWinThread__UAEPAVCWnd__XZ_004FA795() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 08: je 0x4fa7ad
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 20h]
        ; Exact mapped bytes EB 16: jmp 0x4fa7c3
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 08: je 0x4fa7be
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 1ch]
        ; Exact mapped bytes EB 05: jmp 0x4fa7c3
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 B0 22 04 00: call 0x53ca73
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
