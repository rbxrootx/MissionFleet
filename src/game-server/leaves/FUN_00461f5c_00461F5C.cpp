// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461F5C .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_00461f5c_00461F5C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 00 00 00: call 0x462058
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x461f89
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 00 00 00: call 0x461f99
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x461f89
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x461f8b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 4B 68 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
