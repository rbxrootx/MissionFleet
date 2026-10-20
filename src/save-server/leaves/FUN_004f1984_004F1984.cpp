// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1984 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_004f1984_004F1984() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4f19ac
        __asm _emit 0x74
        __asm _emit 0x12
        push 678394h
        push 6783cch
        ; Exact mapped bytes E8 6C EC FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 90 AD FD FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
