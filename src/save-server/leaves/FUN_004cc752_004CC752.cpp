// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC752 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004cc752_004CC752() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 55 85 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 05: jne 0x4cc76f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x4cc7f0
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 85 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7C 0A: jl 0x4cc786
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C FF FF FF: call 0x4cc690
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x4cc793
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 68510ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 04 00 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 85 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 14: je 0x4cc7b5
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b3h
        push 6714ach
        ; Exact mapped bytes E8 90 C5 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cc7b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4cc793
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 84 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7C 22: jl 0x4cc7ea
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 84 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 14: je 0x4cc7ea
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b4h
        push 6714ach
        ; Exact mapped bytes E8 5B C5 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cc7ea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CB: jne 0x4cc7bb
        __asm _emit 0x75
        __asm _emit 0xcb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
