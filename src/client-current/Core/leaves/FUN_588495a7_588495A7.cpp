// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588495A7 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_588495a7_588495A7() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp byte ptr [esi + 24h], bl
        ; Exact mapped bytes 75 07: jne 0x588495b9
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 09 FF FF FF: call 0x588494c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        cmp dword ptr [esi + 18h], 0
        mov byte ptr [esi + 24h], 1
        ; Exact mapped bytes 74 0F: je 0x588495d2
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [esi + 4], 0
        ; Exact mapped bytes 74 09: je 0x588495d2
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 18h]
        ; Exact mapped bytes FF 15 B0 42 89 58: call dword ptr [0x588942b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi + 18h], 0
        cmp dword ptr [esi + 4], 0
        ; Exact mapped bytes 74 09: je 0x588495e5
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 4]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi + 4], 0
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 08: je 0x588495f6
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi], 0
        mov eax, ebx
        pop esi
        pop ebx
        ret
    }
}
