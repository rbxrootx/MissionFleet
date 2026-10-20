// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046F220 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_0046f220_0046F220() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 A7 15 00 00: call 0x4707d0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 60 B9 68 00: call dword ptr [0x68b960]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 F0 DD 67 00: mov dword ptr [0x67ddf0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F0 DD 67 00 FF: cmp dword ptr [0x67ddf0], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 04: jne 0x46f241
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5D: jmp 0x46f29e
        __asm _emit 0xeb
        __asm _emit 0x5d
        push 61h
        push 63ed3ch
        push 2
        push 74h
        push 1
        ; Exact mapped bytes E8 CD 79 FF FF: call 0x466c20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x46f274
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 8B 0D F0 DD 67 00: mov ecx, dword ptr [0x67ddf0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 50 B9 68 00: call dword ptr [0x68b950]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x46f278
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 26: jmp 0x46f29e
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 5F 00 00 00: call 0x46f2e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0ffffffffh
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
