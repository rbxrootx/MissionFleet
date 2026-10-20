// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579560 .. +0x8B bytes.
extern "C" __declspec(naked) void __1COleObjectFactory__UAE_XZ_00579560() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f4ach
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 5892bch
        mov dword ptr [ebp - 4], 0
        push 49h
        push 5ce6c8h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 C2 1B F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 45 00 00 00: call 0x5795eb
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 98 BE FC FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        ; Exact mapped bytes E8 25 E7 FC FF: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24h
        ; Exact mapped bytes E8 CC 23 FD FF: call 0x54b990
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        ; Exact mapped bytes E8 3E E8 FC FF: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5E E7 F7 FF: call 0x4f7d3b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
