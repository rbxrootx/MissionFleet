// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8EA3 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_004e8ea3_004E8EA3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 35 FC FF FF: call 0x4e8af0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 05: jne 0x4e8ec9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x4e8f77
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 08 6E 68 00 00: cmp dword ptr [0x686e08], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x4e8ef6
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 78 B6 68 00: call dword ptr [0x68b678]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 12: je 0x4e8ef6
        __asm _emit 0x74
        __asm _emit 0x12
        push 673640h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A F9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x4e8f77
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        push 10h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 20 9D 04 00: call 0x532c24
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e8f1c
        __asm _emit 0x75
        __asm _emit 0x14
        push 4a4h
        push 6733e0h
        ; Exact mapped bytes E8 29 FE 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e8f1c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4e8ef6
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 673654h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 F9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C1 FA 03 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 673668h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 00 F9 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DD FA 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        push 673688h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 F8 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BA FB 03 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        push 67369ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 F8 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0x03
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
