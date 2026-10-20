// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481417 .. +0x18B bytes.
extern "C" __declspec(naked) void FUN_00481417_00481417() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x48155a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 B2 8F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x48155a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 9F 8F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 78 2B F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2b
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x4814eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 8F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 2B F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x2b
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 72: jne 0x4814eb
        __asm _emit 0x75
        __asm _emit 0x72
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 8F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 62 8F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 59: jne 0x4814eb
        __asm _emit 0x75
        __asm _emit 0x59
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 8F F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0d78h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 EC 00 00 00: mov dx, word ptr [ecx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 1
        ; Exact mapped bytes 75 3D: jne 0x4814eb
        __asm _emit 0x75
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 5D 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d0bh
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 49 5D 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6D: jmp 0x481558
        __asm _emit 0xeb
        __asm _emit 0x6d
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 5D 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 16 5D 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 6F CD FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 54 CD FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 32: jmp 0x48158c
        __asm _emit 0xeb
        __asm _emit 0x32
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 5C 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 20 CD FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 44 72 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
