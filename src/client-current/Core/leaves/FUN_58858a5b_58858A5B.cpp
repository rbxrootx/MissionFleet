// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858A5B .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_58858a5b_58858A5B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 448h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        mov edx, 104h
        push ebx
        mov dword ptr [ebp - 418h], eax
        xor ecx, ecx
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp - 20ch]
        push edi
        mov edi, eax
        mov dword ptr [ebp - 448h], eax
        lea eax, [ebp - 414h]
        mov dword ptr [ebp - 444h], edx
        mov dword ptr [ebp - 440h], edi
        mov dword ptr [ebp - 43ch], edx
        mov dword ptr [ebp - 438h], ecx
        mov byte ptr [ebp - 434h], cl
        mov dword ptr [ebp - 430h], eax
        mov dword ptr [ebp - 42ch], edx
        mov dword ptr [ebp - 428h], eax
        mov dword ptr [ebp - 424h], edx
        mov dword ptr [ebp - 420h], ecx
        mov byte ptr [ebp - 41ch], cl
        ; Exact mapped bytes E8 47 FB FF FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        lea eax, [ebp - 430h]
        push ebx
        push eax
        push esi
        ; Exact mapped bytes E8 87 F6 FF FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 75 32: jne 0x58858b2c
        __asm _emit 0x75
        __asm _emit 0x32
        lea eax, [ebp - 448h]
        push eax
        push dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 56 00 00 00: call 0x58858b62
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 440h]
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 12: jne 0x58858b2c
        __asm _emit 0x75
        __asm _emit 0x12
        push ebx
        push dword ptr [ebp - 418h]
        push edi
        ; Exact mapped bytes E8 72 00 00 00: call 0x58858b99
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esi, eax
        cmp byte ptr [ebp - 41ch], 0
        ; Exact mapped bytes 74 0C: je 0x58858b41
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 D0 40 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        cmp byte ptr [ebp - 434h], 0
        ; Exact mapped bytes 74 07: je 0x58858b51
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes E8 C0 40 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        mov eax, esi
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 F0 84 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
