// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874C840 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_5874c840() {
    __asm {
        push esi
        push 2
        push 3
        push 0ah
        mov esi, ecx
        ; Exact mapped bytes E8 C2 EE FF FF: call 0x5874b710
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5874c8a5
        __asm _emit 0x74
        __asm _emit 0x53
        push 2
        push 5
        mov ecx, esi
        ; Exact mapped bytes E8 53 EF FF FF: call 0x5874b7b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x5874c8a5
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, esi
        ; Exact mapped bytes E8 A8 EF FF FF: call 0x5874b810
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 39: je 0x5874c8a5
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, esi
        ; Exact mapped bytes E8 ED 28 00 00: call 0x5874f160
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 2E: je 0x5874c8a5
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx + 0cc0h]
        cmp byte ptr [edx + 35ch], 0
        ; Exact mapped bytes 75 1B: jne 0x5874c8a9
        __asm _emit 0x75
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 2716h
        ; Exact mapped bytes E8 52 F2 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8B 84 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        mov al, 1
        pop esi
        ret
    }
}
