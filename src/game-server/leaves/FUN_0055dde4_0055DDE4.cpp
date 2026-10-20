// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055DDE4 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_0055dde4_0055DDE4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 9ah
        push 5cfea0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5D D3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd3
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x55de1d
        __asm _emit 0x75
        __asm _emit 0x14
        push 9bh
        push 5cfea0h
        ; Exact mapped bytes E8 E8 6B FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55de1d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55de03
        __asm _emit 0x75
        __asm _emit 0xe0
        push 9ch
        push 5cfea0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 2A D3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x55de5f
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 6C F9 FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 06: je 0x55de5f
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8F 30 FF FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 37: je 0x55debc
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 2C: je 0x55deba
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E A0 FF FF: call 0x557ea4
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x55deba
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 10: je 0x55deb5
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 92 6C F9 FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x55deba
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x55debe
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B4: jmp 0x55de70
        __asm _emit 0xeb
        __asm _emit 0xb4
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
