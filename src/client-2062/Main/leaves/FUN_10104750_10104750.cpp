// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104750 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_10104750_10104750() {
    __asm {
        mov edx, dword ptr [esp + 4]
        cmp edx, -1
        ; Exact mapped bytes 74 20: je 0x10104779
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ecx + 78h]
        test edx, edx
        ; Exact mapped bytes 7E 0C: jle 0x1010476c
        __asm _emit 0x7e
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x10104783
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [eax + 14h]
        dec edx
        test edx, edx
        ; Exact mapped bytes 7F F4: jg 0x10104760
        __asm _emit 0x7f
        __asm _emit 0xf4
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x10104783
        __asm _emit 0x74
        __asm _emit 0x13
        mov dword ptr [ecx + 84h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ecx + 84h], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
