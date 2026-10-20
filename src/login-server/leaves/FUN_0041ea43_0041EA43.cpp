// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041EA43 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_0041ea43_0041EA43() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes 83 3D CC AE 44 00 01: cmp dword ptr [0x44aecc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0F: jle 0x41ea63
        __asm _emit 0x7e
        __asm _emit 0x0f
        movzx eax, byte ptr [edi]
        push 8
        push eax
        ; Exact mapped bytes E8 A5 3C 00 00: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 0F: jmp 0x41ea72
        __asm _emit 0xeb
        __asm _emit 0x0f
        movzx eax, byte ptr [edi]
        ; Exact mapped bytes 8B 0D C0 AC 44 00: mov ecx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [ecx + eax*2]
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x41ea79
        __asm _emit 0x74
        __asm _emit 0x03
        inc edi
        ; Exact mapped bytes EB D2: jmp 0x41ea4b
        __asm _emit 0xeb
        __asm _emit 0xd2
        movzx esi, byte ptr [edi]
        inc edi
        cmp esi, 2dh
        mov ebp, esi
        ; Exact mapped bytes 74 05: je 0x41ea89
        __asm _emit 0x74
        __asm _emit 0x05
        cmp esi, 2bh
        ; Exact mapped bytes 75 04: jne 0x41ea8d
        __asm _emit 0x75
        __asm _emit 0x04
        movzx esi, byte ptr [edi]
        inc edi
        xor ebx, ebx
        ; Exact mapped bytes 83 3D CC AE 44 00 01: cmp dword ptr [0x44aecc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0C: jle 0x41eaa4
        __asm _emit 0x7e
        __asm _emit 0x0c
        push 4
        push esi
        ; Exact mapped bytes E8 64 3C 00 00: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 0B: jmp 0x41eaaf
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes A1 C0 AC 44 00: mov eax, dword ptr [0x44acc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [eax + esi*2]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x41eac0
        __asm _emit 0x74
        __asm _emit 0x0d
        lea eax, [ebx + ebx*4]
        lea ebx, [esi + eax*2 - 30h]
        movzx esi, byte ptr [edi]
        inc edi
        ; Exact mapped bytes EB CF: jmp 0x41ea8f
        __asm _emit 0xeb
        __asm _emit 0xcf
        cmp ebp, 2dh
        mov eax, ebx
        ; Exact mapped bytes 75 02: jne 0x41eac9
        __asm _emit 0x75
        __asm _emit 0x02
        neg eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
