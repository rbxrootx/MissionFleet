// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58742D10 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58742d10() {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 50h]
        sub ecx, 1
        ; Exact mapped bytes 74 12: je 0x58742d2c
        __asm _emit 0x74
        __asm _emit 0x12
        sub ecx, 6
        ; Exact mapped bytes 74 04: je 0x58742d23
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax + 34h]
        ret
        mov dword ptr [eax + 50h], 3
        ; Exact mapped bytes EB 07: jmp 0x58742d33
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [eax + 50h], 2
        mov ecx, dword ptr [eax + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x58742d55
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        shr cl, 5
        test cl, 1
        ; Exact mapped bytes 74 0F: je 0x58742d55
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        push 0
        push 3
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        ret
    }
}
