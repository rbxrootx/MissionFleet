// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476037 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_00476037_00476037() {
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
        ; Exact mapped bytes E8 19 08 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 F5 06 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 EC 09 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x476091
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x4760be
        __asm _emit 0xeb
        __asm _emit 0x2d
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 57 09 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x4760bc
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 E8 FF FF: call 0x4748f1
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4760bc
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4760be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 18 27 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x27
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
