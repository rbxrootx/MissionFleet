// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557285 .. +0xA7 bytes.
extern "C" __declspec(naked) void _CanPaste_COleClientItem__SGHXZ_00557285() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 38 71 68 00: mov eax, dword ptr [0x687138]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x55731e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 71 68 00: mov ecx, dword ptr [0x687134]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 70: jne 0x55731e
        __asm _emit 0x75
        __asm _emit 0x70
        ; Exact mapped bytes 8B 15 48 71 68 00: mov edx, dword ptr [0x687148]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 5F: jne 0x55731e
        __asm _emit 0x75
        __asm _emit 0x5f
        ; Exact mapped bytes A1 4C 71 68 00: mov eax, dword ptr [0x68714c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 4F: jne 0x55731e
        __asm _emit 0x75
        __asm _emit 0x4f
        push 3
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x55731e
        __asm _emit 0x75
        __asm _emit 0x43
        push 8
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 37: jne 0x55731e
        __asm _emit 0x75
        __asm _emit 0x37
        push 2
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x55731e
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 2C 71 68 00: mov ecx, dword ptr [0x68712c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x557315
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 15 28 71 68 00: mov edx, dword ptr [0x687128]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x55731e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x557325
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
