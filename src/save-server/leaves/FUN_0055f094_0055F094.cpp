// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F094 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_0055f094_0055F094() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f12ch
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
        ; Exact mapped bytes E8 B1 D6 FF FF: call 0x55c76d
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 63bf8ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x55f0e5
        __asm _emit 0x74
        __asm _emit 0x13
        push 3bch
        push 67b3b8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 7B B1 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0xff
        push 140h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 60h
        push eax
        ; Exact mapped bytes E8 C8 67 F0 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 140h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x55f12f
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 81 F9 F6 FF: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55f12f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        or edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], 55c710h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ch], 7805h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x55f16b
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 10h]
        add eax, 88h
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 58 FF FF: call 0x554a06
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B 5C FF FF: call 0x554d8d
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5c
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
