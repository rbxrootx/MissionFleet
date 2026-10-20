// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046BED0 .. +0x18A bytes.
extern "C" __declspec(naked) void FUN_0046bed0_0046BED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        push 688954h
        ; Exact mapped bytes FF 15 24 BA 68 00: call dword ptr [0x68ba24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 89 68 00 00: cmp dword ptr [0x688944], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x46bf0e
        __asm _emit 0x74
        __asm _emit 0x1e
        push 688954h
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push 13h
        ; Exact mapped bytes E8 AE 49 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x46bf15
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 0B: jne 0x46bf26
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D 98 DB 67 00: mov ecx, dword ptr [0x67db98]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 06: jmp 0x46bf2c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 86 E7 00 00 00: jbe 0x46c023
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 14h], dl
        cmp byte ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x46bf52
        __asm _emit 0x74
        __asm _emit 0x08
        cmp byte ptr [ebp - 14h], 25h
        ; Exact mapped bytes 74 07: je 0x46bf57
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes EB 5F: jmp 0x46bfb1
        __asm _emit 0xeb
        __asm _emit 0x5f
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x46c023
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes C7 05 EC 8A 68 00 00 00 00 00: mov dword ptr [0x688aec], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 23h
        ; Exact mapped bytes 75 13: jne 0x46bf88
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes C7 05 EC 8A 68 00 01 00 00 00: mov dword ptr [0x688aec], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov al, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 BD 00 00 00: call 0x46c060
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes EB 6D: jmp 0x46c01e
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        mov al, byte ptr [edx]
        ; Exact mapped bytes 8B 0D C0 DE 67 00: mov ecx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 8000h
        test edx, edx
        ; Exact mapped bytes 74 2B: je 0x46bff9
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 76 25: jbe 0x46bff9
        __asm _emit 0x76
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x46bf32
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x46c035
        __asm _emit 0x74
        __asm _emit 0x0c
        push 13h
        ; Exact mapped bytes E8 20 49 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0B: jmp 0x46c040
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 688954h
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 76 0E: jbe 0x46c054
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 02: jmp 0x46c056
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
