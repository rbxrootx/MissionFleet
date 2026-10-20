// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F2AF .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_5884f2af_5884F2AF() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        ; Exact mapped bytes 66 8B 7D 0C: mov di, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x0c
        xor esi, esi
        ; Exact mapped bytes 83 3D 1C 67 96 58 02: cmp dword ptr [0x5896671c], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        movzx edx, di
        ; Exact mapped bytes 7D 2A: jge 0x5884f2f0
        __asm _emit 0x7d
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 8]
        mov esi, ecx
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 F5: jne 0x5884f2cb
        __asm _emit 0x75
        __asm _emit 0xf5
        sub ecx, 2
        cmp ecx, esi
        ; Exact mapped bytes 74 09: je 0x5884f2e6
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 39 39: cmp word ptr [ecx], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x39
        ; Exact mapped bytes 75 F4: jne 0x5884f2d6
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, ecx
        ; Exact mapped bytes EB 67: jmp 0x5884f34d
        __asm _emit 0xeb
        __asm _emit 0x67
        xor eax, eax
        ; Exact mapped bytes 66 39 11: cmp word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x11
        cmove eax, ecx
        ; Exact mapped bytes EB 5D: jmp 0x5884f34d
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 11: jmp 0x5884f306
        __asm _emit 0xeb
        __asm _emit 0x11
        movzx eax, word ptr [edx]
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        cmove esi, edx
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 48: je 0x5884f34b
        __asm _emit 0x74
        __asm _emit 0x48
        add edx, 2
        lea eax, [edx + 1]
        test al, 0eh
        ; Exact mapped bytes 75 E8: jne 0x5884f2f5
        __asm _emit 0x75
        __asm _emit 0xe8
        xor eax, eax
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 1E: jne 0x5884f332
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, 0ffff0001h
        ; Exact mapped bytes 66 0F 6E C8: movd xmm1, eax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc8
        ; Exact mapped bytes EB 03: jmp 0x5884f322
        __asm _emit 0xeb
        __asm _emit 0x03
        add edx, 10h
        ; Exact mapped bytes 0F 10 02: movups xmm0, xmmword ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x02
        ; Exact mapped bytes 66 0F 3A 63 C8 15: pcmpistri xmm1, xmm0, 0x15
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0xc8
        __asm _emit 0x15
        ; Exact mapped bytes 75 F2: jne 0x5884f31f
        __asm _emit 0x75
        __asm _emit 0xf2
        lea eax, [edx + ecx*2]
        ; Exact mapped bytes EB 1B: jmp 0x5884f34d
        __asm _emit 0xeb
        __asm _emit 0x1b
        movzx eax, di
        ; Exact mapped bytes 66 0F 6E C0: movd xmm0, eax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 3A 63 02 41: pcmpistri xmm0, xmmword ptr [edx], 0x41
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x41
        ; Exact mapped bytes 73 03: jae 0x5884f344
        __asm _emit 0x73
        __asm _emit 0x03
        lea esi, [edx + ecx*2]
        ; Exact mapped bytes 74 05: je 0x5884f34b
        __asm _emit 0x74
        __asm _emit 0x05
        add edx, 10h
        ; Exact mapped bytes EB EE: jmp 0x5884f339
        __asm _emit 0xeb
        __asm _emit 0xee
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        ret
    }
}
