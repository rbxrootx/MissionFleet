// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470810 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_00470810_00470810() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x470826
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 30h
        ; Exact mapped bytes 7D 4D: jge 0x470879
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx*4 + 67de00h], 0
        ; Exact mapped bytes 74 3E: je 0x470877
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp - 4], 11h
        ; Exact mapped bytes 74 38: je 0x470877
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [ebp - 4], 0dh
        ; Exact mapped bytes 74 32: je 0x470877
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [ebp - 4], 9
        ; Exact mapped bytes 74 2C: je 0x470877
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 26: je 0x470877
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx*4 + 67de00h]
        push eax
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*4 + 67de00h]
        push edx
        ; Exact mapped bytes E8 EC 6A FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB A4: jmp 0x47081d
        __asm _emit 0xeb
        __asm _emit 0xa4
        ; Exact mapped bytes A1 24 DE 67 00: mov eax, dword ptr [0x67de24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 DE 67 00: mov ecx, dword ptr [0x67de34]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 44 DE 67 00: mov edx, dword ptr [0x67de44]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 DE 67 00: mov eax, dword ptr [0x67de04]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 70 B9 68 00: call dword ptr [0x68b970]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
