// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004327BF .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004327bf_004327BF() {
    __asm {
        mov eax, 43ab74h
        ; Exact mapped bytes E8 3F CE FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 0ch
        push ebx
        push esi
        xor eax, eax
        push edi
        cmp dword ptr [ecx + 0ch], eax
        mov dword ptr [ebp - 10h], esp
        ; Exact mapped bytes 74 0F: je 0x4327e8
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
    }
}
