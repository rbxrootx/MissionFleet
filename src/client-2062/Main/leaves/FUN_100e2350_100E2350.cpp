// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E2350 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_100e2350_100E2350() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 78h], eax
        mov eax, dword ptr [eax + 0a4h]
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 75 31: jne 0x100e2397
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 111h
        ; Exact mapped bytes 7E 12: jle 0x100e2389
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100e2389
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 444h]
        ; Exact mapped bytes EB 02: jmp 0x100e238b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 50h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 5A: je 0x100e23ef
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes EB 30: jmp 0x100e23c7
        __asm _emit 0xeb
        __asm _emit 0x30
        cmp eax, 0a8h
        ; Exact mapped bytes 75 51: jne 0x100e23ef
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes A1 2C 58 1C 10: mov eax, dword ptr [0x101c582c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 164h]
        test edx, edx
        ; Exact mapped bytes 7E 0E: jle 0x100e23bb
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100e23bb
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100e23bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 50h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e23ef
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
