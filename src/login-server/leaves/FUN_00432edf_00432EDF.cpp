// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432EDF .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00432edf_00432EDF() {
    __asm {
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 8B 3D 44 C5 43 00: mov edi, dword ptr [0x43c544]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, ecx
        push 0bh
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 0ch
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp dword ptr [esi + 68h], 0
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 74 07: je 0x432f05
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 5C 42 00 00: call 0x43715f
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x432f0a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 85 42 00 00: call 0x43718f
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 C0 C3 43 00: call dword ptr [0x43c3c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D A8 C0 43 00: mov ebx, dword ptr [0x43c0a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        push 58h
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 5ah
        push edi
        mov dword ptr [esi + 18h], eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push edi
        push 0
        mov dword ptr [esi + 1ch], eax
        ; Exact mapped bytes FF 15 C4 C3 43 00: call dword ptr [0x43c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
