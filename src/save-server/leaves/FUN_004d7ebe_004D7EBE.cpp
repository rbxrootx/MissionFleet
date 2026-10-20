// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D7EBE .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_004d7ebe_004D7EBE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 8F 9A 00 00 00: jg 0x4d7f6e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C2 12 00 00: call 0x4d91a2
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 1A: je 0x4d7f0d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 84h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 59: je 0x4d7f6c
        __asm _emit 0x74
        __asm _emit 0x59
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 84h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov dword ptr [ebp - 8], eax
        push 639040h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 22 00 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d7f56
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e6h
        push 6722d0h
        ; Exact mapped bytes E8 EF 0D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7f56
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4d7f31
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 90 00 00 00: call dword ptr [eax + 0x90]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A1: jmp 0x4d7f0d
        __asm _emit 0xeb
        __asm _emit 0xa1
        ; Exact mapped bytes EB 30: jmp 0x4d7f9e
        __asm _emit 0xeb
        __asm _emit 0x30
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 2A: jne 0x4d7f9e
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 22 12 00 00: call 0x4d91a2
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d7f98
        __asm _emit 0x74
        __asm _emit 0x14
        push 1ech
        push 6722d0h
        ; Exact mapped bytes E8 AD 0D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7f98
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4d7f74
        __asm _emit 0x75
        __asm _emit 0xd6
        xor eax, eax
        cmp dword ptr [ebp + 8], 1
        setl al
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
