// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58615760 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_58615760_58615760() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 1
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1
        ; Exact mapped bytes 74 1B: je 0x58615794
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0ah
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A B9 F4 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58615794
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], 0ah
        mov eax, dword ptr [ebp + 8]
        and eax, 2
        ; Exact mapped bytes 74 1B: je 0x586157b7
        __asm _emit 0x74
        __asm _emit 0x1b
        push 66h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 B9 F4 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x586157b7
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 66h
        mov edx, dword ptr [ebp + 8]
        and edx, 4
        ; Exact mapped bytes 74 27: je 0x586157e6
        __asm _emit 0x74
        __asm _emit 0x27
        push 67h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 B8 F4 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x586157dc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 67h
        ; Exact mapped bytes EB 0A: jmp 0x586157e6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 2
        mov edx, dword ptr [ebp + 8]
        and edx, 8
        ; Exact mapped bytes 74 27: je 0x58615815
        __asm _emit 0x74
        __asm _emit 0x27
        push 68h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 B8 F4 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5861580b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 68h
        ; Exact mapped bytes EB 0A: jmp 0x58615815
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 2
        mov edx, dword ptr [ebp + 8]
        and edx, 10000h
        ; Exact mapped bytes 74 0A: je 0x5861582a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 0c9h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
