// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F9A3C .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_004f9a3c_004F9A3C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 5A BA 04 00: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 68: je 0x4f9ac4
        __asm _emit 0x74
        __asm _emit 0x68
        push 0e6h
        push 5c60d0h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 F1 16 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8C BA 03 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 75 14: jne 0x4f9a8d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e7h
        push 5c60d0h
        ; Exact mapped bytes E8 78 AF 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9a8d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x4f9a6f
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 0A: je 0x4f9aa6
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        push 1
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x4f9aba
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 80 00 00 00: call dword ptr [edx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        push 0
        ; Exact mapped bytes E8 A9 00 00 00: call 0x4f9b74
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 EC 06 FB FF: call 0x4aa1c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
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
