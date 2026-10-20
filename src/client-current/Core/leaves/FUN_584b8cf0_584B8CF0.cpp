// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8CF0 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_584b8cf0_584B8CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 05: jne 0x584b8d07
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x584b8e60
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D 02 00 00: call 0x584b8f50
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 78h]
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x584b8dba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 F9 C9 FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 4A: je 0x584b8d8a
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E8 C9 FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 31: je 0x584b8d82
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x584b8d74
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584b8d7b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB B0: jmp 0x584b8d3a
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 88h], 0
        ; Exact mapped bytes EB 76: jmp 0x584b8e30
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 7ch]
        ; Exact mapped bytes 75 26: jne 0x584b8deb
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F3 BB FC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E5 BB FC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 98 0F 00 00: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 45: jmp 0x584b8e30
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD BB FC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 C9 FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 73 0F 00 00: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1B C9 FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 BB FC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 11 6A FE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2A: je 0x584b8e60
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x584b8e59
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584b8e60
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
