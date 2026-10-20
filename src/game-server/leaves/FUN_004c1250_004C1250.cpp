// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1250 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_004c1250_004C1250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], 0
        push 2
        ; Exact mapped bytes E8 8C 3F FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], 3
        ; Exact mapped bytes EB 09: jmp 0x4c1279
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 3B 0D 40 02 5E 00: cmp ecx, dword ptr [0x5e0240]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x4c1319
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes A1 24 F2 5D 00: mov eax, dword ptr [0x5df224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [eax + edx*4], 0
        ; Exact mapped bytes 74 7E: je 0x4c1314
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 8B 15 24 F2 5D 00: mov edx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 83h
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x4c12d1
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes A1 24 F2 5D 00: mov eax, dword ptr [0x5df224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 90 B2 FE FF: call 0x4ac550
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 74 09: je 0x4c12d1
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 8], 14h
        ; Exact mapped bytes 7C 3D: jl 0x4c1314
        __asm _emit 0x7c
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 8B 0D 24 F2 5D 00: mov ecx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        add edx, 20h
        push edx
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 2
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 8B 0D 24 F2 5D 00: mov ecx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes E8 BF 99 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 8B 0D 24 F2 5D 00: mov ecx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx + eax*4], 0
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x4c1270
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes E8 70 3F FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
