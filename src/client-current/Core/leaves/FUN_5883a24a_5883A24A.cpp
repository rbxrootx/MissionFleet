// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A24A .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5883a24a_5883A24A() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x5883a258
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        or eax, 0ffffffffh
        xor edx, edx
        div dword ptr [ebp + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 73 05: jae 0x5883a269
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E9 07 45 FF FF: jmp 0x5882e770
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp + 0ch]
        cmp byte ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2C: je 0x5883a29f
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp ecx, 1000h
        ; Exact mapped bytes 72 24: jb 0x5883a29f
        __asm _emit 0x72
        __asm _emit 0x24
        lea eax, [ecx + 23h]
        cmp eax, ecx
        ; Exact mapped bytes 76 E2: jbe 0x5883a264
        __asm _emit 0x76
        __asm _emit 0xe2
        push eax
        ; Exact mapped bytes E8 7C 6D FF FF: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x5883a294
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 27 6D 01 00: jmp 0x58850fbb
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ecx + 23h]
        and eax, 0ffffffe0h
        mov dword ptr [eax - 4], ecx
        pop ebp
        ret
        push ecx
        ; Exact mapped bytes E8 5F 6D FF FF: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 E5: je 0x5883a28f
        __asm _emit 0x74
        __asm _emit 0xe5
        pop ebp
        ret
    }
}
