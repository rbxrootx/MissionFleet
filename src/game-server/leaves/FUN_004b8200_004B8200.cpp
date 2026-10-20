// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8200 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_004b8200_004B8200() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 40 02 5E 00 00: cmp dword ptr [0x5e0240], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x4b8219
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 40 02 5E 00 00 02 00 00: mov dword ptr [0x5e0240], 0x200
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x4b822c
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 83 3D 40 02 5E 00 14: cmp dword ptr [0x5e0240], 0x14
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x14
        ; Exact mapped bytes 7D 0A: jge 0x4b822c
        __asm _emit 0x7d
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 40 02 5E 00 14 00 00 00: mov dword ptr [0x5e0240], 0x14
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 83h
        push 58c8d0h
        push 2
        push 4
        ; Exact mapped bytes A1 40 02 5E 00: mov eax, dword ptr [0x5e0240]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 FB 23 FF FF: call 0x4aa640
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes A3 24 F2 5D 00: mov dword ptr [0x5df224], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 24 F2 5D 00 00: cmp dword ptr [0x5df224], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3F: jne 0x4b8295
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes C7 05 40 02 5E 00 14 00 00 00: mov dword ptr [0x5e0240], 0x14
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 86h
        push 58c8d0h
        push 2
        push 4
        ; Exact mapped bytes 8B 0D 40 02 5E 00: mov ecx, dword ptr [0x5e0240]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 C6 23 FF FF: call 0x4aa640
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes A3 24 F2 5D 00: mov dword ptr [0x5df224], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 24 F2 5D 00 00: cmp dword ptr [0x5df224], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x4b8295
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1ah
        ; Exact mapped bytes E8 AE 4A FF FF: call 0x4acd40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4b82a7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 14h
        ; Exact mapped bytes 7D 19: jge 0x4b82c6
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        shl eax, 5
        add eax, 5d1b48h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 24 F2 5D 00: mov edx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes EB D8: jmp 0x4b829e
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4b82d8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 4A: jge 0x4b8328
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        sar ecx, 5
        mov edx, dword ptr [ebp - 4]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        cmp dword ptr [eax + edx], -1
        ; Exact mapped bytes 74 1C: je 0x4b8316
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        sar ecx, 5
        mov edx, dword ptr [ebp - 4]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        cmp dword ptr [eax + edx], 0
        ; Exact mapped bytes 75 10: jne 0x4b8326
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 5
        mov dword ptr [ecx + 5d1b58h], 0ffffffffh
        ; Exact mapped bytes EB A7: jmp 0x4b82cf
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov esp, ebp
        pop ebp
        ret
    }
}
