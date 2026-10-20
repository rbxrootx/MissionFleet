// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056273B .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_0056273b_0056273B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 33bh
        push 67c6f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 06 7B F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x562777
        __asm _emit 0x75
        __asm _emit 0x14
        push 33ch
        push 67c6f0h
        ; Exact mapped bytes E8 CE 65 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562777
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x56275a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 79 41 FF FF: call 0x5568fe
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56279d
        __asm _emit 0x75
        __asm _emit 0x14
        push 33dh
        push 67c6f0h
        ; Exact mapped bytes E8 A8 65 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56279d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x56277d
        __asm _emit 0x75
        __asm _emit 0xda
        push 640c50h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 42 81 FE FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0C: jne 0x5627c9
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DC F1 FE FF: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x562806
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
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
        ; Exact mapped bytes 7D 0C: jge 0x5627fc
        __asm _emit 0x7d
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 F1 FE FF: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x562806
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4ch], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
