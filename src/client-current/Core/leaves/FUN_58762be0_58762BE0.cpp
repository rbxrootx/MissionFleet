// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762BE0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_58762be0_58762BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 80000000h
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58762c02
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x58762cb5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58762ca8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 17ch]
        ; Exact mapped bytes E8 CE 1D D2 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 6F: jne 0x58762ca8
        __asm _emit 0x75
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 17ch]
        ; Exact mapped bytes E8 B5 1D D2 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 55: jne 0x58762ca8
        __asm _emit 0x75
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 0ch]
        not eax
        mov ecx, dword ptr [ebp - 8]
        and eax, dword ptr [ecx + 344h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 344h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 17ch]
        ; Exact mapped bytes E8 94 0E E0 FF: call 0x58563b10
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0e
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 3D D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x3d
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 1B: jne 0x58762ca8
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 DF DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdf
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 69 DE DE FF: call 0x58550b10
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xde
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        shr eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 44 FF FF FF: jmp 0x58762bf9
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
