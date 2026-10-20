// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875CCB0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5875ccb0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        xor edx, edx
        cmp eax, edx
        ; Exact mapped bytes 75 05: jne 0x5875ccbf
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ecx + 58h], edx
        ; Exact mapped bytes EB 08: jmp 0x5875ccc7
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp eax, 1
        ; Exact mapped bytes 75 03: jne 0x5875ccc7
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ecx + 5ch], edx
        cmp dword ptr [ecx + 68h], edx
        ; Exact mapped bytes 74 3D: je 0x5875cd09
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp eax, edx
        ; Exact mapped bytes 75 1E: jne 0x5875ccee
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ecx + 50h]
        cmp eax, edx
        ; Exact mapped bytes 74 17: je 0x5875ccee
        __asm _emit 0x74
        __asm _emit 0x17
        push edx
        mov dword ptr [eax + 63b0h], 1
        mov ecx, dword ptr [ecx + 50h]
        push edx
        ; Exact mapped bytes E8 65 A1 17 00: call 0x588d6e50
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa1
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 54h]
        cmp eax, edx
        ; Exact mapped bytes 74 14: je 0x5875cd09
        __asm _emit 0x74
        __asm _emit 0x14
        push edx
        mov dword ptr [eax + 63b0h], 1
        mov ecx, dword ptr [ecx + 54h]
        push edx
        ; Exact mapped bytes E8 47 A1 17 00: call 0x588d6e50
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa1
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
