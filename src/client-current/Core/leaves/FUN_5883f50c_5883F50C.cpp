// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F50C .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_5883f50c_5883F50C() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 9E 5A 00 00: call 0x58844fb6
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp byte ptr [ebp + 8], 0
        ; Exact mapped bytes 75 08: jne 0x5883f528
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [esi + 4b0h], edi
        ; Exact mapped bytes 75 29: jne 0x5883f551
        __asm _emit 0x75
        __asm _emit 0x29
        cmp dword ptr [esi + 54h], edi
        ; Exact mapped bytes 75 08: jne 0x5883f535
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes A1 14 45 89 58: mov eax, dword ptr [0x58894514]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 54h], eax
        cmp dword ptr [esi + 78h], edi
        ; Exact mapped bytes 74 09: je 0x5883f543
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 78h]
        ; Exact mapped bytes FF 56 54: call dword ptr [esi + 0x54]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x54
        mov dword ptr [esi + 78h], edi
        cmp dword ptr [esi + 74h], edi
        ; Exact mapped bytes 74 09: je 0x5883f551
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 74h]
        ; Exact mapped bytes FF 56 54: call dword ptr [esi + 0x54]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x54
        mov dword ptr [esi + 74h], edi
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
