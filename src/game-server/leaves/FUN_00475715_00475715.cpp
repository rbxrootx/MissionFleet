// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475715 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_00475715_00475715() {
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
        ; Exact mapped bytes E8 3B 11 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 17 10 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 0E 13 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x47576f
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x47579f
        __asm _emit 0xeb
        __asm _emit 0x30
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 79 12 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E E5 FF FF: call 0x473d20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x47579d
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x47579f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 37 30 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
