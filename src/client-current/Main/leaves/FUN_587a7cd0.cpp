// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A7CD0 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_587a7cd0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 254h], eax
        xor eax, eax
        mov dword ptr [esi + 258h], ecx
        mov dword ptr [esi + 29ch], ebx
        cmp ebx, eax
        ; Exact mapped bytes 74 3C: je 0x587a7d34
        __asm _emit 0x74
        __asm _emit 0x3c
        push ebp
        mov ebp, dword ptr [esp + 18h]
        cmp ebp, eax
        ; Exact mapped bytes 74 3E: je 0x587a7d3f
        __asm _emit 0x74
        __asm _emit 0x3e
        push edi
        push 40h
        push eax
        lea edi, [esi + 25ch]
        push edi
        ; Exact mapped bytes E8 37 4F 1D 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4f
        __asm _emit 0x1d
        __asm _emit 0x00
        lea edx, [ebx*8]
        push edx
        push ebp
        push edi
        ; Exact mapped bytes E8 2C 50 1D 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x50
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 18h
        pop edi
        pop ebp
        mov dword ptr [esi + 2a0h], 0
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [esi + 2a0h], eax
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        pop ebp
        mov dword ptr [esi + 2a0h], eax
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
