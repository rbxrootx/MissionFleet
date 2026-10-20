// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00580043 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_00580043_00580043() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8C 23 00 00: call 0x5823e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x58006e
        __asm _emit 0x75
        __asm _emit 0x14
        push 180h
        push 67849ch
        ; Exact mapped bytes E8 D7 8C FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x58006e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x580054
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 04: je 0x580082
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1F: jmp 0x5800a1
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        sub eax, 10h
        mov dword ptr [ebp - 4], eax
        push 18dh
        push 67849ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 C2 A1 F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
