// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F18FB .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_004f18fb_004F18FB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 639f18h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 88 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f192c
        __asm _emit 0x75
        __asm _emit 0x14
        push 29ch
        push 678234h
        ; Exact mapped bytes E8 19 74 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f192c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4f1907
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x4f1945
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 4C: call dword ptr [edx + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x4c
        ; Exact mapped bytes EB 0B: jmp 0x4f1950
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 54: call dword ptr [edx + 0x54]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x4f1974
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x4f197b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
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
