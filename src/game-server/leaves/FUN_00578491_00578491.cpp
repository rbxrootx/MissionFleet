// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578491 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00578491_00578491() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 9ch]
        push eax
        ; Exact mapped bytes E8 29 AE F5 FF: call 0x4d32df
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xae
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 39: je 0x5784f8
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 8A F8 FF: call 0x500f70
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 89 F8 FF: call 0x500e67
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5784eb
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b2h
        push 5d1154h
        ; Exact mapped bytes E8 1A C5 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5784eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x5784c7
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x5784fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
