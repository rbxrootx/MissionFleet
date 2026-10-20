// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055DE08 .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_0055de08_0055DE08() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f0abh
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D E9 FF FF: call 0x55c76d
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 63bdd4h
        push 70h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 70 7A F0 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7a
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 70h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 64h], edx
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x55de87
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 29 0C F7 FF: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0c
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55de87
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes E8 F4 EC FF FF: call 0x55cb80
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55de9f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        or ch, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 55c710h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3ch], 7804h
        mov edx, dword ptr [ebp - 10h]
        add edx, 0d0h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 94h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 98h], 104h
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0d0h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
