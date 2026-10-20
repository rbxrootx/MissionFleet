// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478740 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_00478740_00478740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes 83 3D 9C 04 68 00 00: cmp dword ptr [0x68049c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1E: jne 0x478774
        __asm _emit 0x75
        __asm _emit 0x1e
        push 167h
        push 63f37ch
        push 2
        push 351h
        ; Exact mapped bytes E8 54 E0 FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes A3 9C 04 68 00: mov dword ptr [0x68049c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 04 68 00: mov eax, dword ptr [0x68049c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [eax], 0
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 09: jmp 0x47878e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ch
        mov eax, dword ptr [edx + 68049ch]
        push eax
        push 63f388h
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ecx + 680498h]
        push edx
        push 3
        ; Exact mapped bytes A1 9C 04 68 00: mov eax, dword ptr [0x68049c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 26 02 00 00: call 0x4789e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 46: jge 0x478809
        __asm _emit 0x7d
        __asm _emit 0x46
        push 63f374h
        ; Exact mapped bytes 8B 0D 9C 04 68 00: mov ecx, dword ptr [0x68049c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 AC D1 FE FF: call 0x465980
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        imul edx, edx, 0ch
        mov eax, dword ptr [edx + 68049ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ecx + 68049ch]
        push edx
        ; Exact mapped bytes E8 B7 99 FF FF: call 0x4721b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x478807
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 2E: jmp 0x478837
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x478816
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes A1 9C 04 68 00: mov eax, dword ptr [0x68049c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x47883c
        __asm _emit 0xeb
        __asm _emit 0x26
        push 2
        ; Exact mapped bytes A1 9C 04 68 00: mov eax, dword ptr [0x68049c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 3D EB FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 9C 04 68 00 00 00 00 00: mov dword ptr [0x68049c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 04 68 00: mov eax, dword ptr [0x6804b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x47883c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x478785
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
