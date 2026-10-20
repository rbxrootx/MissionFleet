// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046F300 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0046f300_0046F300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes A1 F0 DD 67 00: mov eax, dword ptr [0x67ddf0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 48 B9 68 00: call dword ptr [0x68b948]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 63: jne 0x46f387
        __asm _emit 0x75
        __asm _emit 0x63
        push 0e7h
        push 63ed3ch
        push 2
        push 74h
        push 1
        ; Exact mapped bytes E8 E7 78 FF FF: call 0x466c20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 38: je 0x46f37d
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 15 F0 DD 67 00: mov edx, dword ptr [0x67ddf0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 50 B9 68 00: call dword ptr [0x68b950]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x46f37d
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 7D FF FF FF: call 0x46f2e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes EB 0A: jmp 0x46f387
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 10h
        ; Exact mapped bytes E8 0C 70 FF FF: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B8 B9 68 00: call dword ptr [0x68b9b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
