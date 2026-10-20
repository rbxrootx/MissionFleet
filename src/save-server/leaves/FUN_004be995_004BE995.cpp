// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BE995 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_004be995_004BE995() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0ech
        push 6745d4h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 AC B8 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4be9ce
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0edh
        push 6745d4h
        ; Exact mapped bytes E8 77 A3 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4be9ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4be9b4
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4be9ee
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0eeh
        push 6745d4h
        ; Exact mapped bytes E8 57 A3 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4be9ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4be9d4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 14: jle 0x4bea16
        __asm _emit 0x7e
        __asm _emit 0x14
        push 0efh
        push 6745d4h
        ; Exact mapped bytes E8 2F A3 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bea16
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4be9f4
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x4bea5f
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        lea ecx, [eax + ecx*4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*4]
        push edx
        ; Exact mapped bytes E8 04 72 FA FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], ecx
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
