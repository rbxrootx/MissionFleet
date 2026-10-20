// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6B29 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_004f6b29_004F6B29() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c079h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        push edi
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B8 E1 02 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1E 31 FE FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x4f6b9a
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 671230h
        ; Exact mapped bytes E8 A1 9A FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4f6b94
        __asm _emit 0x74
        __asm _emit 0x14
        push 8fh
        push 6711f0h
        ; Exact mapped bytes E8 B1 21 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6b94
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4f6b77
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 75 06: jne 0x4f6ba6
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F4 E1 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 25 FF FF FF: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1E 5D FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
