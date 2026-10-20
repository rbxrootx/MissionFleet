// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588049C0 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_588049c0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        cmp eax, 64h
        ; Exact mapped bytes 75 34: jne 0x588049fd
        __asm _emit 0x75
        __asm _emit 0x34
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 75 5C: jne 0x58804a2e
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        movzx edx, byte ptr [edx + 354h]
        mov eax, dword ptr [esp + 0ch]
        cmp eax, edx
        ; Exact mapped bytes 74 45: je 0x58804a2e
        __asm _emit 0x74
        __asm _emit 0x45
        mov dword ptr [ecx + 7ch], eax
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 88 4B FB FF: call 0x587b9580
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0ch
        ; Exact mapped bytes 75 2C: jne 0x58804a2e
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x58804a2e
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x58804a20
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x58804a2e
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
