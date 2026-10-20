// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEC80 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004cec80_004CEC80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C5 EA 01 00: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x4cece4
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        ; Exact mapped bytes E8 F9 ED FD FF: call 0x4adab0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4ceccc
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 06: jne 0x4cecca
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x4cecd3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A4 E3 FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB BD: jmp 0x4ceca1
        __asm _emit 0xeb
        __asm _emit 0xbd
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x4ced03
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        sub esi, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B9 21 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [eax + 4], esi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
