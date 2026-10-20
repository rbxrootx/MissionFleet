// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A57C0 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_004a57c0_004A57C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fe29h
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
        ; Exact mapped bytes E8 E7 1F 08 00: call 0x5277cf
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 63dd84h
        push 54h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 B8 00 FC FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 54h
        mov ecx, dword ptr [ebp + 8]
        or ch, 20h
        or ecx, 40000h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], ecx
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x4a5848
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 68 92 02 00: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4a5848
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        or ch, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 4a34d0h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a4h], 4a5c70h
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
