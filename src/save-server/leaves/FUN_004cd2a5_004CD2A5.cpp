// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD2A5 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_004cd2a5_004CD2A5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 00 7A 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F6 79 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 14: jle 0x4cd2df
        __asm _emit 0x7e
        __asm _emit 0x14
        push 211h
        push 6714ach
        ; Exact mapped bytes E8 66 BA 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd2df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CC: jne 0x4cd2b1
        __asm _emit 0x75
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CC 79 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 79 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 78: je 0x4cd377
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 79 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 79 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9B F2 FF FF: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 C3 F7 FF: call 0x449650
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 C7 7F F9 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7f
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 75 79 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 0F BE 0C 02: movsx ecx, byte ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x02
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4cd368
        __asm _emit 0x74
        __asm _emit 0x14
        push 217h
        push 6714ach
        ; Exact mapped bytes E8 DD B9 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd368
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4cd33c
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8B F3 FF FF: call 0x4cc702
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3A 79 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4cd397
        __asm _emit 0x75
        __asm _emit 0x14
        push 21ah
        push 6714ach
        ; Exact mapped bytes E8 AE B9 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd397
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4cd377
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
