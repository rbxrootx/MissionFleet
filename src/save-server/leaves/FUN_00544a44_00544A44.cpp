// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544A44 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_00544a44_00544A44() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 28: je 0x544a7b
        __asm _emit 0x74
        __asm _emit 0x28
        push 1
        push 100h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 03 EA F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xea
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x544a7b
        __asm _emit 0x75
        __asm _emit 0x14
        push 8ch
        push 677f0ch
        ; Exact mapped bytes E8 CA 42 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544a7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x544a4d
        __asm _emit 0x75
        __asm _emit 0xcc
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B6 E9 F5 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x544aa4
        __asm _emit 0x75
        __asm _emit 0x14
        push 8dh
        push 677f0ch
        ; Exact mapped bytes E8 A1 42 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544aa4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x544a81
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0F: jmp 0x544ac7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 4F 4C F0 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4c
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 32: je 0x544b03
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5ch
        ; Exact mapped bytes 74 16: je 0x544af2
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2fh
        ; Exact mapped bytes 74 0B: je 0x544af2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 3ah
        ; Exact mapped bytes 75 0F: jne 0x544b01
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 15 4C F0 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB B5: jmp 0x544ab8
        __asm _emit 0xeb
        __asm _emit 0xb5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x544b18
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes EB 14: jmp 0x544b2c
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
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
