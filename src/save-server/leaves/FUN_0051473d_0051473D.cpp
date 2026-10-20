// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051473D .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_0051473d_0051473D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x514756
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5147f0
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 F6 22 01 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5147ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 FC 22 01 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x51479c
        __asm _emit 0x75
        __asm _emit 0x14
        push 646h
        push 673dc0h
        ; Exact mapped bytes E8 A9 45 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51479c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x514782
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 30: jne 0x5147e9
        __asm _emit 0x75
        __asm _emit 0x30
        push 636f08h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CA 59 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5147de
        __asm _emit 0x75
        __asm _emit 0x14
        push 649h
        push 673dc0h
        ; Exact mapped bytes E8 67 45 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5147de
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5147b9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 07: jmp 0x5147f0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x514764
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
