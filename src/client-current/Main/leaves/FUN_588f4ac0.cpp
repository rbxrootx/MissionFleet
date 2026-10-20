// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F4AC0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_588f4ac0() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 3E: jne 0x588f4b06
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [ecx + 3fch]
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x588f4b06
        __asm _emit 0x74
        __asm _emit 0x34
        cmp dword ptr [eax + 606ch], 0
        ; Exact mapped bytes 74 2B: je 0x588f4b06
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 4]
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x588f4af6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov al, byte ptr [eax + 354h]
        cmp al, byte ptr [edx + 354h]
        ; Exact mapped bytes 75 10: jne 0x588f4b06
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 49 24 01: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, dword ptr [ecx + 3f4h]
        ; Exact mapped bytes 66 83 49 24 01: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        ret
    }
}
