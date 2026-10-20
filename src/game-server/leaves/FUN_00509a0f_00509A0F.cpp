// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509A0F .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_00509a0f_00509A0F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x509a35
        __asm _emit 0x7d
        __asm _emit 0x14
        push 162h
        push 5cb450h
        ; Exact mapped bytes E8 D0 AF 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509a35
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x509a1b
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x509a55
        __asm _emit 0x7d
        __asm _emit 0x14
        push 163h
        push 5cb450h
        ; Exact mapped bytes E8 B0 AF 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509a55
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x509a3b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 45 B6 FE FF: call 0x4f50aa
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E0 B5 FE FF: call 0x4f5058
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 28 B6 FE FF: call 0x4f50aa
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C3 B5 FE FF: call 0x4f5058
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F3 B8 FE FF: call 0x4f53a2
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
