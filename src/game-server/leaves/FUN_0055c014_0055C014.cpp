// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C014 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_0055c014_0055C014() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f64ch
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
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B1 D6 FF FF: call 0x5596ed
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 589964h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x55c065
        __asm _emit 0x74
        __asm _emit 0x13
        push 3bch
        push 5cebe0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 FB F0 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        push 140h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 60h
        push eax
        ; Exact mapped bytes E8 F8 D2 F4 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd2
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 140h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x55c0af
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 D1 4A F9 FF: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55c0af
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        or edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], 559690h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ch], 7805h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x55c0eb
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 10h]
        add eax, 88h
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC 9E FF FF: call 0x555f96
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B A2 FF FF: call 0x55631d
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], eax
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
