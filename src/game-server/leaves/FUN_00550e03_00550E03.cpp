// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550E03 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00550e03_00550E03() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 07: jne 0x550e1e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x550eaa
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 7ah
        push 5cf7b8h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 32 A3 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 50h
        ; Exact mapped bytes E8 54 22 FE FF: call 0x533091
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x550e57
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ch
        push 5cf7b8h
        ; Exact mapped bytes E8 AE 3B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550e57
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x550e40
        __asm _emit 0x75
        __asm _emit 0xe3
        push 5cf7d0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 A2 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa2
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x550e7f
        __asm _emit 0x75
        __asm _emit 0x11
        push 7dh
        push 5cf7b8h
        ; Exact mapped bytes E8 86 3B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550e7f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x550e5d
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 11: je 0x550ea1
        __asm _emit 0x74
        __asm _emit 0x11
        push 7eh
        push 5cf7b8h
        ; Exact mapped bytes E8 64 3B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550ea1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x550e85
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 4]
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
