// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046003C .. +0xAE bytes.
extern "C" __declspec(naked) void _AfxOleUnlockControl__YGHABU_GUID___Z_0046003C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        ; Exact mapped bytes E8 1C 06 0E 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0bh
        ; Exact mapped bytes E8 29 2D 0E 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 D1 01 00 00: call 0x460230
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 6B: je 0x4600da
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
        ; Exact mapped bytes E8 58 8C FF FF: call 0x458ce0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x4600d2
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 6F 01 00 00: call 0x460210
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
        ; Exact mapped bytes 74 11: je 0x4600c4
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
        ; Exact mapped bytes EB 07: jmp 0x4600cb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 8F: jmp 0x460069
        __asm _emit 0xeb
        __asm _emit 0x8f
        push 0bh
        ; Exact mapped bytes E8 CB 2D 0E 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x2d
        __asm _emit 0x0e
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
