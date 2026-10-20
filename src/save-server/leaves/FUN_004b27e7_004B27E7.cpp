// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B27E7 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_004b27e7_004B27E7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4b2813
        __asm _emit 0x75
        __asm _emit 0x11
        push 4dh
        push 6731f8h
        ; Exact mapped bytes E8 32 65 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x65
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b2813
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4b27f1
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4b2830
        __asm _emit 0x75
        __asm _emit 0x11
        push 4eh
        push 673208h
        ; Exact mapped bytes E8 15 65 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x65
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b2830
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4b2819
        __asm _emit 0x75
        __asm _emit 0xe3
        push 1
        push 24h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 23 0C FF FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4b2858
        __asm _emit 0x75
        __asm _emit 0x11
        push 4fh
        push 673218h
        ; Exact mapped bytes E8 ED 64 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b2858
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4b2836
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 404h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
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
