// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C8BA .. +0x186 bytes.
extern "C" __declspec(naked) void FUN_0055c8ba_0055C8BA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f6c3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 06 CE FF FF: call 0x5596ed
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], 589bf8h
        push 54h
        push 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 69 CA F4 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xca
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 60h], 54h
        mov ecx, dword ptr [ebp + 8]
        or ecx, 40h
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x55c941
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 3F 42 F9 FF: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55c941
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes E8 BA D1 FF FF: call 0x559b00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55c959
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, 20h
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 70h], 559690h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 3ch], 7807h
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 0B 71 00 00: call 0x563a80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 2C: jne 0x55c9ab
        __asm _emit 0x75
        __asm _emit 0x2c
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F2 7A 00 00: call 0x564479
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55c99f
        __asm _emit 0x75
        __asm _emit 0x14
        push 4a3h
        push 5cebe0h
        ; Exact mapped bytes E8 66 80 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55c99f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x55c97f
        __asm _emit 0x75
        __asm _emit 0xda
        lea eax, [ebp - 1ch]
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x55c9c5
        __asm _emit 0x75
        __asm _emit 0x14
        push 4a6h
        push 5cebe0h
        ; Exact mapped bytes E8 40 80 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55c9c5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55c9ab
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C6 71 00 00: call 0x563b9b
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 84h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 0b4h
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 90h], edx
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 94h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 AB B5 FF FF: call 0x557fce
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
