// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E0B8 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_0051e0b8_0051E0B8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 14 6E 68 00 00: cmp dword ptr [0x686e14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x51e0ce
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 16: je 0x51e0e4
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 F3 00 00: call 0x52d42a
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2A: jmp 0x51e10e
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bch], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c0h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E E4 00 00: call 0x52c544
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 01 00 00: call 0x51e21d
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
