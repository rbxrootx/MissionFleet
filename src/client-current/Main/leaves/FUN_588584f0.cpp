// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588584F0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_588584f0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes E8 7C DA F8 FF: call 0x587e5f80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0xff
        mov al, byte ptr [esp + 0ch]
        mov cl, byte ptr [esi + ebx*4 + 878h]
        xor cl, al
        and cl, 1fh
        xor al, cl
        and al, 1fh
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 04: je 0x58858523
        __asm _emit 0x74
        __asm _emit 0x04
        or al, 40h
        ; Exact mapped bytes EB 02: jmp 0x58858525
        __asm _emit 0xeb
        __asm _emit 0x02
        or al, 20h
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 4
        lea edx, [esp + 10h]
        push edx
        push 16h
        mov byte ptr [esp + 18h], al
        mov byte ptr [esp + 19h], 0
        mov byte ptr [esp + 1ah], bl
        ; Exact mapped bytes E8 2A D5 F8 FF: call 0x587e5a70
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xff
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
