// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C460 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_0040c460_0040C460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2D: je 0x40c49f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x40c49f
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 40d00h]
        ; Exact mapped bytes E8 38 4D FF FF: call 0x4011c5
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ca0h]
        push eax
        ; Exact mapped bytes FF 15 34 C2 43 00: call dword ptr [0x43c234]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB DA: jmp 0x40c479
        __asm _emit 0xeb
        __asm _emit 0xda
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
