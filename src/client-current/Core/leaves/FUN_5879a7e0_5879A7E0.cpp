// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A7E0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_5879a7e0_5879A7E0() {
    __asm {
        movzx eax, byte ptr [ecx + 8]
        sub eax, 1
        ; Exact mapped bytes 74 4A: je 0x5879a833
        __asm _emit 0x74
        __asm _emit 0x4a
        sub eax, 1
        ; Exact mapped bytes 74 38: je 0x5879a826
        __asm _emit 0x74
        __asm _emit 0x38
        sub eax, 1
        ; Exact mapped bytes 75 30: jne 0x5879a823
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes F2 0F 10 09: movsd xmm1, qword ptr [ecx]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x09
        ; Exact mapped bytes 66 0F 2F 0D B0 51 89 58: comisd xmm1, xmmword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 72 22: jb 0x5879a823
        __asm _emit 0x72
        __asm _emit 0x22
        ; Exact mapped bytes F2 0F 10 05 B0 70 8B 58: movsd xmm0, qword ptr [0x588b70b0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 72 14: jb 0x5879a823
        __asm _emit 0x72
        __asm _emit 0x14
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes E8 14 ED FF FF: call 0x58799530
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test al, al
        ; Exact mapped bytes 75 2A: jne 0x5879a84d
        __asm _emit 0x75
        __asm _emit 0x2a
        xor al, al
        ret
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 77 F7: ja 0x5879a823
        __asm _emit 0x77
        __asm _emit 0xf7
        ; Exact mapped bytes 72 1F: jb 0x5879a84d
        __asm _emit 0x72
        __asm _emit 0x1f
        cmp dword ptr [ecx], -1
        ; Exact mapped bytes EB 18: jmp 0x5879a84b
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        test ecx, ecx
        ; Exact mapped bytes 7C E7: jl 0x5879a823
        __asm _emit 0x7c
        __asm _emit 0xe7
        ; Exact mapped bytes 7F 06: jg 0x5879a844
        __asm _emit 0x7f
        __asm _emit 0x06
        test eax, eax
        ; Exact mapped bytes 72 E1: jb 0x5879a823
        __asm _emit 0x72
        __asm _emit 0xe1
        test ecx, ecx
        ; Exact mapped bytes 77 DD: ja 0x5879a823
        __asm _emit 0x77
        __asm _emit 0xdd
        ; Exact mapped bytes 72 05: jb 0x5879a84d
        __asm _emit 0x72
        __asm _emit 0x05
        cmp eax, -1
        ; Exact mapped bytes 77 D6: ja 0x5879a823
        __asm _emit 0x77
        __asm _emit 0xd6
        mov al, 1
        ret
    }
}
