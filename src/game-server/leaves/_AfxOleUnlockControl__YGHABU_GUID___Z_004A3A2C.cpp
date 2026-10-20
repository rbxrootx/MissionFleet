// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3A2C .. +0xAE bytes.
extern "C" __declspec(naked) void _AfxOleUnlockControl__YGHABU_GUID___Z_004A3A2C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        ; Exact mapped bytes E8 0C 1A 0A 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0bh
        ; Exact mapped bytes E8 99 42 0A 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 D1 01 00 00: call 0x4a3c20
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 6B: je 0x4a3aca
        __asm _emit 0x74
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 48 8C FF FF: call 0x49c6c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x4a3ac2
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 6F 01 00 00: call 0x4a3c00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x4a3ab4
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4a3abb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 8F: jmp 0x4a3a59
        __asm _emit 0xeb
        __asm _emit 0x8f
        push 0bh
        ; Exact mapped bytes E8 3B 43 0A 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x43
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
