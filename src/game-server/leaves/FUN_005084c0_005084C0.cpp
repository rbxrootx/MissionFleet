// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005084C0 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_005084c0_005084C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 36: je 0x508506
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x5084ec
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e3h
        push 5cb374h
        ; Exact mapped bytes E8 19 C5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5084ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x5084d0
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 C8 FE FF: call 0x4f4d3b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x508506
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 6F FE FF: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
