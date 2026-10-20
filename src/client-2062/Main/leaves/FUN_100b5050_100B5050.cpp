// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B5050 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_100b5050_100B5050() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov dword ptr [esi + 50h], 400h
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 25 00 1F: and ax, 0x1f00
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 66 3D 00 02: cmp ax, 0x200
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 06: je 0x100b5074
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 54: jne 0x100b50c8
        __asm _emit 0x75
        __asm _emit 0x54
        mov eax, dword ptr [esi + 74h]
        mov ecx, 0fffeh
        mov dword ptr [esi + 58h], 0
        push ebx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        push edi
        lea edi, [esi + 7ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        mov ebx, 10h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 14 38 F6 FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x38
        __asm _emit 0xf6
        __asm _emit 0xff
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x100b50a5
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        pop edi
        and ecx, 0e4fdh
        pop ebx
        or ecx, 405h
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        pop esi
        cmp dword ptr [eax + 170h], 32h
        ; Exact mapped bytes 7E 18: jle 0x100b50ef
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x100b50ef
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 0c8h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ret
        xor ecx, ecx
        push ecx
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ret
    }
}
