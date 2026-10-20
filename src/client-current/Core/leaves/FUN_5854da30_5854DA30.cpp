// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854DA30 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_5854da30_5854DA30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a7f34h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 23 5C F5 FF: call 0x584a3670
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        ; Exact mapped bytes E8 18 5C F5 FF: call 0x584a3670
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 1F: je 0x5854da81
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 D7 35 2E 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x35
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        ; Exact mapped bytes E8 24 4B F5 FF: call 0x584a25b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 19 4B F5 FF: call 0x584a25b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x4b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 70 26 00: call 0x587b4b60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x70
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
