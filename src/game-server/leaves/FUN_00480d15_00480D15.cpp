// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00480D15 .. +0x1AA bytes.
extern "C" __declspec(naked) void FUN_00480d15_00480D15() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x480e77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 B4 96 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x480e77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 A1 96 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7A 32 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x480e08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 96 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 32 F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x480e08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D 96 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 60 96 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 74: jne 0x480e08
        __asm _emit 0x75
        __asm _emit 0x74
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 96 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x96
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
        ; Exact mapped bytes 75 58: jne 0x480e08
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 8e8h]
        mov dword ptr [eax + 30h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 D5 FF FF: call 0x47e30b
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 64 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d04h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 2C 64 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6D: jmp 0x480e75
        __asm _emit 0xeb
        __asm _emit 0x6d
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 64 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x64
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
        ; Exact mapped bytes E8 F9 63 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 52 D4 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8e8h]
        ; Exact mapped bytes E8 37 D4 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 32: jmp 0x480ea9
        __asm _emit 0xeb
        __asm _emit 0x32
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 63 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 03 D4 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 27 79 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x79
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
