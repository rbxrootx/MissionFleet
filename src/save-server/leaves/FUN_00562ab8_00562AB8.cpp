// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562AB8 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_00562ab8_00562AB8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 39bh
        push 67c6f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 89 77 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x562af4
        __asm _emit 0x75
        __asm _emit 0x14
        push 39ch
        push 67c6f0h
        ; Exact mapped bytes E8 51 62 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562af4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x562ad7
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC 3D FF FF: call 0x5568fe
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x562b1a
        __asm _emit 0x75
        __asm _emit 0x14
        push 39dh
        push 67c6f0h
        ; Exact mapped bytes E8 2B 62 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562b1a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x562afa
        __asm _emit 0x75
        __asm _emit 0xda
        push 640c50h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 C5 7D FE FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0E: jne 0x562b48
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F EE FE FF: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 3A: jmp 0x562b82
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 7D 0E: jge 0x562b7d
        __asm _emit 0x7d
        __asm _emit 0x0e
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2A EE FE FF: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x562b82
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
