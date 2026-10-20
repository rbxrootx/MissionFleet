// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050C9D4 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_0050c9d4_0050C9D4() {
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
        ; Exact mapped bytes 74 12: je 0x50c9fc
        __asm _emit 0x74
        __asm _emit 0x12
        push 5cbbbch
        push 5cbbf4h
        ; Exact mapped bytes E8 1C 32 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x32
        __asm _emit 0xfc
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
        ; Exact mapped bytes E8 A0 0C FE FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0xfe
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
