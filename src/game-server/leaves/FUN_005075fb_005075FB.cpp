// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005075FB .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_005075fb_005075FB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x50761f
        __asm _emit 0x75
        __asm _emit 0x14
        push 89h
        push 5ca348h
        ; Exact mapped bytes E8 E6 D3 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50761f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x507605
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 48h], edx
        ; Exact mapped bytes 83 3D C0 5D 5C 00 00: cmp dword ptr [0x5c5dc0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x5d
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x507642
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
