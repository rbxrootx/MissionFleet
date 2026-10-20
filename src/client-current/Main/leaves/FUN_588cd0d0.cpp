// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CD0D0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_588cd0d0() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x588cd114
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [eax + 0cc0h]
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x588cd114
        __asm _emit 0x74
        __asm _emit 0x2e
        movzx eax, word ptr [eax + 2]
        sub eax, 0c8h
        ; Exact mapped bytes 74 0C: je 0x588cd0fd
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, 0fch
        ; Exact mapped bytes 74 05: je 0x588cd0fd
        __asm _emit 0x74
        __asm _emit 0x05
        sub eax, 27h
        ; Exact mapped bytes 75 17: jne 0x588cd114
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 4ch
        ; Exact mapped bytes E8 E6 E9 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F 7C E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x7c
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        ret
        mov eax, 1
        ret
    }
}
