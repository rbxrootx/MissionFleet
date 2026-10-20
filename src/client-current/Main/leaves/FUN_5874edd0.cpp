// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874EDD0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_5874edd0() {
    __asm {
        push esi
        push 2
        push 4
        push 8
        mov esi, ecx
        ; Exact mapped bytes E8 32 C9 FF FF: call 0x5874b710
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x5874ee30
        __asm _emit 0x74
        __asm _emit 0x4e
        push 2
        push 4
        mov ecx, esi
        ; Exact mapped bytes E8 C3 C9 FF FF: call 0x5874b7b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5874ee30
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov eax, dword ptr [ecx + 9a4h]
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x5874ee34
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        xor al, 0aah
        cmp al, byte ptr [esi + 17ah]
        ; Exact mapped bytes 72 04: jb 0x5874ee19
        __asm _emit 0x72
        __asm _emit 0x04
        cmp al, 53h
        ; Exact mapped bytes 76 1B: jbe 0x5874ee34
        __asm _emit 0x76
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 3bbh
        ; Exact mapped bytes E8 C7 CC 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 00 5F 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 D5 C9 FF FF: call 0x5874b810
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        setne al
        pop esi
        ret
    }
}
