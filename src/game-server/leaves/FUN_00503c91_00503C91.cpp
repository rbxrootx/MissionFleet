// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503C91 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_00503c91_00503C91() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 1
        ; Exact mapped bytes E8 32 FF FF FF: call 0x503bd3
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x503cbe
        __asm _emit 0x75
        __asm _emit 0x14
        push 458h
        push 5c6db0h
        ; Exact mapped bytes E8 47 0D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503cbe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x503ca4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 93 FF FF: call 0x4fd020
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1F: je 0x503cf8
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x503cf8
        __asm _emit 0x74
        __asm _emit 0x14
        push 45ah
        push 5c6db0h
        ; Exact mapped bytes E8 0D 0D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503cf8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x503cd3
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
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
