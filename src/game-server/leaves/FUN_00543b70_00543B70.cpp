// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00543B70 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_00543b70_00543B70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 C2 18 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x543b9b
        __asm _emit 0x74
        __asm _emit 0x11
        push 20h
        push 5c6360h
        ; Exact mapped bytes E8 6A 0E FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x543b9b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x543b7c
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x543bb4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x543cb5
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 5de894h
        ; Exact mapped bytes E8 02 E9 FF FF: call 0x5424c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x543c9c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 4c9f80h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 4c9ff0h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 4ca0b0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 4ca230h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], 4ca770h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 4ca660h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], 4caa70h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 4ca300h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 4ca440h
        ; Exact mapped bytes E8 E0 18 FF FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 5A: jne 0x543c92
        __asm _emit 0x75
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 75 04: jne 0x543ca9
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x543cb5
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes E8 5F 18 FF FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
