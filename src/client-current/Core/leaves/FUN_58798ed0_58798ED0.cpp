// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798ED0 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_58798ed0_58798ED0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891780h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx]
        test esi, esi
        ; Exact mapped bytes 74 21: je 0x58798f1a
        __asm _emit 0x74
        __asm _emit 0x21
        push 584a9d30h
        push 3
        push 18h
        push esi
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 EA 8D 09 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        push 48h
        push esi
        ; Exact mapped bytes E8 1D 81 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
