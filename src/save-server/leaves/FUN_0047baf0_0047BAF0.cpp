// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BAF0 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_0047baf0_0047BAF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 40 89 68 00 00: cmp dword ptr [0x688940], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x47bb09
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 40 89 68 00 00 02 00 00: mov dword ptr [0x688940], 0x200
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x47bb1c
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 83 3D 40 89 68 00 14: cmp dword ptr [0x688940], 0x14
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x14
        ; Exact mapped bytes 7D 0A: jge 0x47bb1c
        __asm _emit 0x7d
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 40 89 68 00 14 00 00 00: mov dword ptr [0x688940], 0x14
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 83h
        push 63f488h
        push 2
        push 4
        ; Exact mapped bytes A1 40 89 68 00: mov eax, dword ptr [0x688940]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EB B0 FE FF: call 0x466c20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes A3 00 76 68 00: mov dword ptr [0x687600], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 76 68 00 00: cmp dword ptr [0x687600], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3F: jne 0x47bb85
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes C7 05 40 89 68 00 14 00 00 00: mov dword ptr [0x688940], 0x14
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 86h
        push 63f488h
        push 2
        push 4
        ; Exact mapped bytes 8B 0D 40 89 68 00: mov ecx, dword ptr [0x688940]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 B6 B0 FE FF: call 0x466c20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes A3 00 76 68 00: mov dword ptr [0x687600], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 76 68 00 00: cmp dword ptr [0x687600], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x47bb85
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1ah
        ; Exact mapped bytes E8 0E A8 FE FF: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47bb97
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 14h
        ; Exact mapped bytes 7D 19: jge 0x47bbb6
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        shl eax, 5
        add eax, 6805f8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 00 76 68 00: mov edx, dword ptr [0x687600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes EB D8: jmp 0x47bb8e
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47bbc8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 4A: jge 0x47bc18
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        sar ecx, 5
        mov edx, dword ptr [ebp - 4]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 6889a0h]
        cmp dword ptr [eax + edx], -1
        ; Exact mapped bytes 74 1C: je 0x47bc06
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        sar ecx, 5
        mov edx, dword ptr [ebp - 4]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 6889a0h]
        cmp dword ptr [eax + edx], 0
        ; Exact mapped bytes 75 10: jne 0x47bc16
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 5
        mov dword ptr [ecx + 680608h], 0ffffffffh
        ; Exact mapped bytes EB A7: jmp 0x47bbbf
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov esp, ebp
        pop ebp
        ret
    }
}
