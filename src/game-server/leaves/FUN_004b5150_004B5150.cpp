// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5150 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004b5150_004B5150() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4b5166
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 30h
        ; Exact mapped bytes 7D 4D: jge 0x4b51b9
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx*4 + 5d193ch], 0
        ; Exact mapped bytes 74 3E: je 0x4b51b7
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp - 4], 11h
        ; Exact mapped bytes 74 38: je 0x4b51b7
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [ebp - 4], 0dh
        ; Exact mapped bytes 74 32: je 0x4b51b7
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [ebp - 4], 9
        ; Exact mapped bytes 74 2C: je 0x4b51b7
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 26: je 0x4b51b7
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx*4 + 5d193ch]
        push eax
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*4 + 5d193ch]
        push edx
        ; Exact mapped bytes E8 0C 5B FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB A4: jmp 0x4b515d
        __asm _emit 0xeb
        __asm _emit 0xa4
        ; Exact mapped bytes A1 60 19 5D 00: mov eax, dword ptr [0x5d1960]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 19 5D 00: mov ecx, dword ptr [0x5d1970]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 80 19 5D 00: mov edx, dword ptr [0x5d1980]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 19 5D 00: mov eax, dword ptr [0x5d1940]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
