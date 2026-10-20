// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C24BC .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004c24bc_004C24BC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0b6h
        push 67c688h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 85 7D 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4c24f5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7h
        push 67c688h
        ; Exact mapped bytes E8 50 68 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c24f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c24db
        __asm _emit 0x75
        __asm _emit 0xe0
        push 67c698h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 7C 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c2520
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b8h
        push 67c688h
        ; Exact mapped bytes E8 25 68 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2520
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4c24fb
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0b9h
        push 67c688h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 27 7D 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F 48 06 00: call 0x526de0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4c2563
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 48 06 00: call 0x526e02
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 FE FF FF: call 0x4c23a2
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x4c2544
        __asm _emit 0xeb
        __asm _emit 0xe1
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
