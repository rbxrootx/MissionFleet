// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878AB70 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_5878ab70() {
    __asm {
        inc dword ptr [ecx + 12104h]
        mov eax, dword ptr [ecx + 12108h]
        mov edx, dword ptr [ecx + 12104h]
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5878ab9c
        __asm _emit 0x75
        __asm _emit 0x16
        cmp edx, 0ea6h
        ; Exact mapped bytes 76 5A: jbe 0x5878abe8
        __asm _emit 0x76
        __asm _emit 0x5a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 2ch]
        push 0
        push 0
        push 63h
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ret
        cmp eax, 1
        ; Exact mapped bytes 75 47: jne 0x5878abe8
        __asm _emit 0x75
        __asm _emit 0x47
        cmp edx, 1770h
        ; Exact mapped bytes 76 3F: jbe 0x5878abe8
        __asm _emit 0x76
        __asm _emit 0x3f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 2ch]
        push 0
        push 0
        push 62h
        mov dword ptr [ecx + 12108h], 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 5F 1E 00: call 0x58970ae0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5f
        __asm _emit 0x1e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x5878abe8
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 05 88 45 A2 58 00 00 00 00: mov dword ptr [0x58a24588], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
