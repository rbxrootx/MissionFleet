// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F9AE0 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_004f9ae0_004F9AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 55 B9 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 76: jne 0x4f9b6d
        __asm _emit 0x75
        __asm _emit 0x76
        ; Exact mapped bytes E8 59 B4 04 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 14: je 0x4f9b1c
        __asm _emit 0x74
        __asm _emit 0x14
        push 105h
        push 5c60d0h
        ; Exact mapped bytes E8 E9 AE 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9b1c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4f9aff
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 0
        push 4fa4c2h
        push -1
        ; Exact mapped bytes FF 15 CC 25 5E 00: call dword ptr [0x5e25cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        mov ecx, 5de894h
        ; Exact mapped bytes E8 78 89 04 00: call 0x5424c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 0C: je 0x4f9b60
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 B4 B9 03 00: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov ecx, 5de890h
        ; Exact mapped bytes E8 D6 9E 04 00: call 0x543a40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
