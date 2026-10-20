// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FE1C .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_0041fe1c_0041FE1C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, 0ffh
        ; Exact mapped bytes 76 5E: jbe 0x41fe89
        __asm _emit 0x76
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 65 FC 00: and word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0x00
        push edi
        xor eax, eax
        lea edi, [ebp - 2]
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        mov eax, ecx
        mov byte ptr [ebp + 0bh], cl
        shr eax, 8
        ; Exact mapped bytes 83 3D AC 11 45 00 00: cmp dword ptr [0x4511ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp + 0ah], al
        pop edi
        ; Exact mapped bytes 75 04: jne 0x41fe51
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        leave
        ret
        push 1
        lea eax, [ebp - 4]
        ; Exact mapped bytes FF 35 C4 13 45 00: push dword ptr [0x4513c4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 9C 11 45 00: push dword ptr [0x45119c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        lea eax, [ebp + 0ah]
        push 2
        push eax
        push 1
        ; Exact mapped bytes E8 98 56 00 00: call 0x425508
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 74 D6: je 0x41fe4d
        __asm _emit 0x74
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 7D FE 00: cmp word ptr [ebp - 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0x00
        ; Exact mapped bytes 75 CF: jne 0x41fe4d
        __asm _emit 0x75
        __asm _emit 0xcf
        test byte ptr [ebp - 4], 8
        ; Exact mapped bytes 74 C9: je 0x41fe4d
        __asm _emit 0x74
        __asm _emit 0xc9
        push 1
        pop eax
        leave
        ret
        ; Exact mapped bytes 83 3D CC AE 44 00 01: cmp dword ptr [0x44aecc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0C: jle 0x41fe9e
        __asm _emit 0x7e
        __asm _emit 0x0c
        push 8
        push ecx
        ; Exact mapped bytes E8 6A 28 00 00: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        leave
        ret
        ; Exact mapped bytes A1 C0 AC 44 00: mov eax, dword ptr [0x44acc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [eax + ecx*2]
        and eax, 8
        leave
        ret
    }
}
