// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C6070 .. +0x230 bytes.
extern "C" __declspec(naked) void FUN_004c6070_004C6070() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1024h
        ; Exact mapped bytes E8 43 37 FE FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        push ebx
        push esi
        push edi
        lea eax, [ebp - 1004h]
        mov dword ptr [ebp - 1014h], eax
        mov dword ptr [ebp - 101ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 21: jge 0x4c60bd
        __asm _emit 0x7d
        __asm _emit 0x21
        push 58d570h
        push 0
        push 81h
        push 58d564h
        push 2
        ; Exact mapped bytes E8 7C AA FE FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4c60bd
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x4c6096
        __asm _emit 0x75
        __asm _emit 0xd3
        push 1
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 00 9A FF FF: call 0x4bfad0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 100ch], eax
        cmp dword ptr [ebp - 100ch], -1
        ; Exact mapped bytes 74 1F: je 0x4c6101
        __asm _emit 0x74
        __asm _emit 0x1f
        push 2
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E1 99 FF FF: call 0x4bfad0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1010h], eax
        cmp dword ptr [ebp - 1010h], -1
        ; Exact mapped bytes 75 08: jne 0x4c6109
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x4c6299
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 1010h]
        mov dword ptr [ebp - 1018h], ecx
        cmp dword ptr [ebp - 1018h], 0
        ; Exact mapped bytes 0F 8E FB 00 00 00: jle 0x4c6220
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1000h
        push 0
        mov edx, dword ptr [ebp - 1014h]
        push edx
        ; Exact mapped bytes E8 38 32 FE FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        push 8000h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C7 18 00 00: call 0x4c7a10
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 1018h], 1000h
        ; Exact mapped bytes 7C 0C: jl 0x4c6167
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov dword ptr [ebp - 1020h], 1000h
        ; Exact mapped bytes EB 0C: jmp 0x4c6173
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 1018h]
        mov dword ptr [ebp - 1020h], ecx
        mov edx, dword ptr [ebp - 1020h]
        mov dword ptr [ebp - 1008h], edx
        cmp dword ptr [ebp - 1018h], 1000h
        ; Exact mapped bytes 7C 0C: jl 0x4c6197
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov dword ptr [ebp - 1024h], 1000h
        ; Exact mapped bytes EB 0C: jmp 0x4c61a3
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 1018h]
        mov dword ptr [ebp - 1024h], eax
        mov ecx, dword ptr [ebp - 1024h]
        push ecx
        mov edx, dword ptr [ebp - 1014h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 66 9A FF FF: call 0x4bfc20
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1008h], eax
        cmp dword ptr [ebp - 1008h], -1
        ; Exact mapped bytes 75 23: jne 0x4c61ef
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes E8 AF B0 FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [eax], 5
        ; Exact mapped bytes 75 0B: jne 0x4c61e1
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 95 B0 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0dh
        mov ecx, dword ptr [ebp - 1008h]
        mov dword ptr [ebp - 101ch], ecx
        ; Exact mapped bytes EB 1F: jmp 0x4c620e
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 1018h]
        sub edx, dword ptr [ebp - 1008h]
        mov dword ptr [ebp - 1018h], edx
        cmp dword ptr [ebp - 1018h], 0
        ; Exact mapped bytes 0F 8F 41 FF FF FF: jg 0x4c614f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F5 17 00 00: call 0x4c7a10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 5E: jmp 0x4c627e
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp dword ptr [ebp - 1018h], 0
        ; Exact mapped bytes 7D 55: jge 0x4c627e
        __asm _emit 0x7d
        __asm _emit 0x55
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 98 98 FF FF: call 0x4bfad0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 7C B4 FF FF: call 0x4c16c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes FF 15 08 23 5E 00: call dword ptr [0x5e2308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        dec eax
        mov dword ptr [ebp - 101ch], eax
        cmp dword ptr [ebp - 101ch], -1
        ; Exact mapped bytes 75 1A: jne 0x4c627e
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 07 B0 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0dh
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 04 B0 FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], esi
        push 0
        mov edx, dword ptr [ebp - 100ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 40 98 FF FF: call 0x4bfad0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 101ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
