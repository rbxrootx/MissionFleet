// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857ED00 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_5857ed00_5857ED00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 5D F0 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 2B FF FF: call 0x585718d0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 2
        ; Exact mapped bytes 75 4F: jne 0x5857ed72
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 5C F0 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB 29 FF FF: call 0x585716f0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 5C F0 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 48 F6 FF: call 0x584e35c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x48
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 80010d02h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F DC 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xdc
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
