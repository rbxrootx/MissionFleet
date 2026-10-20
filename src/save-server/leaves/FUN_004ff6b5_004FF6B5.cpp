// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF6B5 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004ff6b5_004FF6B5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d70ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 58h
        mov dword ptr [ebp - 64h], ecx
        mov eax, dword ptr [ebp - 64h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 94 92 FE FF: call 0x4e8973
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4ff70a
        __asm _emit 0x74
        __asm _emit 0x12
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 1E 93 FE FF: call 0x4e8a37
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
