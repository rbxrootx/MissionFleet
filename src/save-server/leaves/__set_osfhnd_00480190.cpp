// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00480190 .. +0xB7 bytes.
extern "C" __declspec(naked) void __set_osfhnd_00480190() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 DC 8A 68 00: cmp eax, dword ptr [0x688adc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 87 00 00 00: jae 0x48022a
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 6889a0h]
        cmp dword ptr [eax + edx], -1
        ; Exact mapped bytes 75 6B: jne 0x48022a
        __asm _emit 0x75
        __asm _emit 0x6b
        ; Exact mapped bytes 83 3D 44 DA 67 00 01: cmp dword ptr [0x67da44], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 42: jne 0x48020a
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4801e2
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 16: je 0x4801f0
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 74 1E: je 0x4801fe
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes EB 28: jmp 0x48020a
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push -0ah
        ; Exact mapped bytes FF 15 24 B8 68 00: call dword ptr [0x68b824]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x48020a
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push -0bh
        ; Exact mapped bytes FF 15 24 B8 68 00: call dword ptr [0x68b824]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x48020a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push -0ch
        ; Exact mapped bytes FF 15 24 B8 68 00: call dword ptr [0x68b824]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 6889a0h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax], edx
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x480243
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 51 D4 FE FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 56 D4 FE FF: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
