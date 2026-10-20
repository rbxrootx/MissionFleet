// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00543B75 .. +0x39 bytes.
extern "C" __declspec(naked) void _GetDataNA_CThreadLocalObject__QAEPAVCNoTrackObject__XZ_00543B75() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 09: je 0x543b8f
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 64 70 68 00 00: cmp dword ptr [0x687064], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x543b93
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 17: jmp 0x543baa
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 64 70 68 00: mov ecx, dword ptr [0x687064]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 4C 02 00 00: call 0x543df0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
