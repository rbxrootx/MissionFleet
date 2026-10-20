// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585208A0 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_585208a0_585208A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 A6 FE FF: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        cmp eax, ecx
        ; Exact mapped bytes 74 1C: je 0x585208d5
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F A6 FE FF: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 A6 FE FF: call 0x5850af40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 3dh
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E B9 FE FF: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
