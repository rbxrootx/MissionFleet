// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513961 .. +0x128 bytes.
extern "C" __declspec(naked) void FUN_00513961_00513961() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 21ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 218h], ecx
        lea eax, [ebp - 210h]
        push eax
        lea ecx, [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 3e8h
        ; Exact mapped bytes E8 2B 01 F7 FF: call 0x483aba
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5139a7
        __asm _emit 0x75
        __asm _emit 0x14
        push 468h
        push 673dc0h
        ; Exact mapped bytes E8 9E 53 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5139a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x513973
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 208h
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 210h]
        push edx
        push 8000h
        push 3e4h
        push 3e8h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 B5 00 F7 FF: call 0x483ab4
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 3e4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 98 BF 68 00: call dword ptr [0x68bf98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 0D 2E FC FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x513a40
        __asm _emit 0x75
        __asm _emit 0x18
        lea ecx, [ebp - 20ch]
        push ecx
        push 673ef4h
        ; Exact mapped bytes E8 DC CB F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 40: jmp 0x513a80
        __asm _emit 0xeb
        __asm _emit 0x40
        lea edx, [ebp - 20ch]
        push edx
        ; Exact mapped bytes E8 24 E0 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 21ch], eax
        mov eax, dword ptr [ebp - 21ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x513a7e
        __asm _emit 0x75
        __asm _emit 0x14
        lea eax, [ebp - 20ch]
        push eax
        push 673f34h
        ; Exact mapped bytes E8 9A CB F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
