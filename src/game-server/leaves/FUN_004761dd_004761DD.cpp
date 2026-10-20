// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004761DD .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_004761dd_004761DD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 73 06 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 4F 05 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 46 08 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x476237
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x476264
        __asm _emit 0xeb
        __asm _emit 0x2d
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B1 07 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x476262
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B E7 FF FF: call 0x4749b2
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x476262
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x476264
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 72 25 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
