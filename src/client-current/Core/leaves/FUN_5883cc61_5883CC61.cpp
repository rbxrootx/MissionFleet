// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883CC61 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_5883cc61_5883CC61() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        or ebx, 0ffffffffh
        cmp dword ptr [esi + 8], ebx
        ; Exact mapped bytes 75 04: jne 0x5883cc71
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 5E: jmp 0x5883cccf
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 74 09: je 0x5883cc80
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 14h]
        ; Exact mapped bytes FF 15 E0 43 89 58: call dword ptr [0x588943e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esi], 0
        push edi
        ; Exact mapped bytes 8B 3D F8 42 89 58: mov edi, dword ptr [0x588942f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 74 26: je 0x5883ccb2
        __asm _emit 0x74
        __asm _emit 0x26
        push 64h
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 102h
        ; Exact mapped bytes 75 0A: jne 0x5883cca7
        __asm _emit 0x75
        __asm _emit 0x0a
        push 0
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 28 41 89 58: call dword ptr [0x58894128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [esi]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and dword ptr [esi], 0
        and dword ptr [esi + 4], 0
        cmp dword ptr [esi + 8], ebx
        ; Exact mapped bytes 74 08: je 0x5883ccbf
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 8], ebx
        cmp dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes 74 08: je 0x5883cccc
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [esi + 0ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 0ch], ebx
        mov al, 1
        pop edi
        pop esi
        pop ebx
        ret
    }
}
