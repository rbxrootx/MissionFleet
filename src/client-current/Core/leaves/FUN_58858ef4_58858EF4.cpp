// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858EF4 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_58858ef4_58858EF4() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 228h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        and dword ptr [ebp - 218h], 0
        lea eax, [ebp - 20ch]
        push esi
        mov ecx, 104h
        mov dword ptr [ebp - 228h], eax
        push edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 220h], eax
        lea eax, [ebp - 20dh]
        mov dword ptr [ebp - 224h], ecx
        mov dword ptr [ebp - 21ch], ecx
        lea ecx, [ebp - 228h]
        push eax
        mov byte ptr [ebp - 214h], 0
        ; Exact mapped bytes E8 42 00 00 00: call 0x58858f93
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 17: jne 0x58858f6e
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 CC F6 FF FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push edi
        push dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 2C F2 FF FF: call 0x58858195
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov esi, eax
        cmp byte ptr [ebp - 214h], 0
        ; Exact mapped bytes 74 0C: je 0x58858f83
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 8E 3C 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        mov eax, esi
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 BF 80 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
