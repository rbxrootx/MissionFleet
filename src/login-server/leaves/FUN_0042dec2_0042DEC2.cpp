// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DEC2 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0042dec2_0042DEC2() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        mov esi, ecx
        ; Exact mapped bytes 74 4C: je 0x42df1b
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [esi]
        cmp dword ptr [eax - 0ch], 1
        lea ebx, [eax - 0ch]
        ; Exact mapped bytes 7F 2B: jg 0x42df05
        __asm _emit 0x7f
        __asm _emit 0x2b
        mov ecx, dword ptr [eax - 8]
        lea edx, [ecx + edi]
        cmp edx, dword ptr [eax - 4]
        ; Exact mapped bytes 7F 20: jg 0x42df05
        __asm _emit 0x7f
        __asm _emit 0x20
        push edi
        add ecx, eax
        push dword ptr [esp + 18h]
        push ecx
        ; Exact mapped bytes E8 CE 0C FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        add esp, 0ch
        add dword ptr [eax - 8], edi
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax - 8]
        and byte ptr [ecx + eax], 0
        ; Exact mapped bytes EB 16: jmp 0x42df1b
        __asm _emit 0xeb
        __asm _emit 0x16
        push dword ptr [esp + 14h]
        mov ecx, esi
        push edi
        push eax
        push dword ptr [eax - 8]
        ; Exact mapped bytes E8 87 FE FF FF: call 0x42dd9c
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 F8 FB FF FF: call 0x42db13
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
