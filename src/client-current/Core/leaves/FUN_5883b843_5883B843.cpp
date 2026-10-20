// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B843 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_5883b843_5883B843() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push ebx
        mov esi, ecx
        ; Exact mapped bytes E8 75 FA FF FF: call 0x5883b2c8
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 1C: je 0x5883b873
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883b861
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b863
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        push dword ptr [ebp + 0ch]
        sub ebx, eax
        mov ecx, esi
        push ebx
        push esi
        ; Exact mapped bytes E8 EE FE FF FF: call 0x5883b75f
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 43: jmp 0x5883b8b6
        __asm _emit 0xeb
        __asm _emit 0x43
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov ecx, esi
        push 0
        push edi
        ; Exact mapped bytes E8 E7 F9 FF FF: call 0x5883b268
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 2E: je 0x5883b8b3
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883b88f
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b891
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        test edi, edi
        ; Exact mapped bytes 74 0B: je 0x5883b8a0
        __asm _emit 0x74
        __asm _emit 0x0b
        push edi
        push ebx
        push eax
        ; Exact mapped bytes E8 F3 0F 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [esi + 14h], 10h
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes 72 04: jb 0x5883b8ad
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b8af
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        mov byte ptr [eax + edi], 0
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
