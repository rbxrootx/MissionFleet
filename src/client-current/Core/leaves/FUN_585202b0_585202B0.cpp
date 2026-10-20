// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585202B0 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_585202b0_585202B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2C: je 0x585202ed
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 D5 0F 00 00: call 0x585212a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 1D A5 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 CD AC FE FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x585202ff
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58520306
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
