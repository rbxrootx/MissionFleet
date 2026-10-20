// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58546550 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58546550_58546550() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 300h], 0
        ; Exact mapped bytes 75 04: jne 0x58546569
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 69: jmp 0x585465d2
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 49 A6 27 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa6
        __asm _emit 0x27
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x585465d0
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 57 AD 27 00: call 0x587c12e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xad
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5854659c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 15: jge 0x585465b7
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0b4h]
        ; Exact mapped bytes E8 2C AD 27 00: call 0x587c12e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xad
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x58546593
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 31 00 00: call 0x585496e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 B0 FF FF: call 0x58541630
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x585465d2
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x585465d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
