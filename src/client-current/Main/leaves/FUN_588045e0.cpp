// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588045E0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_588045e0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        add eax, -4
        cmp eax, 9
        ; Exact mapped bytes 77 60: ja 0x5880464c
        __asm _emit 0x77
        __asm _emit 0x60
        ; Exact mapped bytes FF 24 85 54 46 80 58: jmp dword ptr [eax*4 + 0x58804654]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0x80
        __asm _emit 0x58
        mov eax, dword ptr [esp + 8]
        ; Exact mapped bytes C6 05 5E 48 A2 58 01: mov byte ptr [0x58a2485e], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 0D B8 AD A0 58: mov word ptr [0x58a0adb8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        mov dl, byte ptr [eax + 2]
        ; Exact mapped bytes 88 15 BA AD A0 58: mov byte ptr [0x58a0adba], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xba
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        mov eax, 3
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 5F 48 A2 58 01: mov byte ptr [0x58a2485f], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x5f
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        xor eax, eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D 9C 90 9C 58: mov dword ptr [0x589c909c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        mov eax, 4
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 08 49 A2 58 01: mov byte ptr [0x58a24908], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        xor eax, eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 09 49 A2 58 01: mov byte ptr [0x58a24909], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        xor eax, eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
