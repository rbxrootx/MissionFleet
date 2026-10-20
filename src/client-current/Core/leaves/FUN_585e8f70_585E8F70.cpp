// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E8F70 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_585e8f70_585E8F70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4E: je 0x585e8fcd
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 DA E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xda
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 3E: jne 0x585e8fcd
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 DA E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xda
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F 90 17 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x90
        __asm _emit 0x17
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x585e8fcd
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20e74h]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D7 9A FE FF: call 0x585d2a90
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 04 7B F6 FF: call 0x58550ad0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x7b
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
