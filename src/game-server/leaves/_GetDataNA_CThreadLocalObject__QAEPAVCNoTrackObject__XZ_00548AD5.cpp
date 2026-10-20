// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00548AD5 .. +0x39 bytes.
extern "C" __declspec(naked) void _GetDataNA_CThreadLocalObject__QAEPAVCNoTrackObject__XZ_00548AD5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 09: je 0x548aef
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 4C EB 5D 00 00: cmp dword ptr [0x5deb4c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x548af3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 17: jmp 0x548b0a
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 4C EB 5D 00: mov ecx, dword ptr [0x5deb4c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 4C 02 00 00: call 0x548d50
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
