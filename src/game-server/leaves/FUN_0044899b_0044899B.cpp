// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044899B .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_0044899b_0044899B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 74 68: je 0x448a29
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16c04h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2D EC FF FF: call 0x447616
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 37: je 0x448a29
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes DF 6D F0: fild qword ptr [ebp - 0x10]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xf0
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 74 0F 06 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 0D A8 19 58 00: fmul qword ptr [0x5819a8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x19
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 DE 0A 06 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8bch], eax
        ; Exact mapped bytes EB 0D: jmp 0x448a36
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8bch], 0
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 FD 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
