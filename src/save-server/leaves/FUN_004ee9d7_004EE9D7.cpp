// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE9D7 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_004ee9d7_004EE9D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4ee9fd
        __asm _emit 0x7d
        __asm _emit 0x14
        push 162h
        push 677c28h
        ; Exact mapped bytes E8 48 A3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee9fd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ee9e3
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4eea1d
        __asm _emit 0x7d
        __asm _emit 0x14
        push 163h
        push 677c28h
        ; Exact mapped bytes E8 28 A3 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eea1d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4eea03
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AD 45 FE FF: call 0x4d2fda
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 48 45 FE FF: call 0x4d2f88
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 90 45 FE FF: call 0x4d2fda
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2B 45 FE FF: call 0x4d2f88
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x45
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
        ; Exact mapped bytes E8 5B 48 FE FF: call 0x4d32d2
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x48
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
