// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58491270 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58491270_58491270() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE BE FF FF: call 0x5848d140
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x584912c5
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 23: je 0x584912af
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 57 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 BD FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 05 BD FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 16: jne 0x584912c5
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0C CA 2C 00: call 0x5875dcd0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xca
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
