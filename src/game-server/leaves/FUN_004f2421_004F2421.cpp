// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F2421 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_004f2421_004F2421() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 11 00 05 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 0C 30 05 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x4f2460
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 74 17: je 0x4f2460
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes FF 15 DC 25 5E 00: call dword ptr [0x5e25dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 74 0E: je 0x4f2477
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4f247c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
