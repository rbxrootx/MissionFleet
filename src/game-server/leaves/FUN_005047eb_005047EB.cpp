// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005047EB .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_005047eb_005047EB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6A FF FF FF: call 0x50476e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 37: jne 0x504844
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, 1
        sub ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 4D FF FF FF: call 0x50476e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 14: jne 0x50483e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e8h
        push 5c7650h
        ; Exact mapped bytes E8 C7 01 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50483e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x504824
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        imul edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0C: jne 0x50486b
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3E 99 FE FF: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x50487a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2D 99 FE FF: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x50490f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x50489e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fbh
        push 5c7650h
        ; Exact mapped bytes E8 67 01 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50489e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x504884
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 06 00 00: call 0x504f8a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 09: je 0x5048c4
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        push 3
        ; Exact mapped bytes E8 E5 18 00 00: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 45: je 0x50490f
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E7 C5 02 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 C7 04 50 00 00: mov word ptr [eax + edx*2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 00 C6 02 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5B 92 FE FF: call 0x4edb58
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 FD 8A FE FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
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
