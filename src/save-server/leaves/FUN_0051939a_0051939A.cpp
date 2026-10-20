// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051939A .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0051939a_0051939A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 18 8E 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 E8 87 01 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 02 8E 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 D2 87 01 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 6347cch
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 80 A0 F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5193fb
        __asm _emit 0x75
        __asm _emit 0x11
        push 5bh
        push 67598ch
        ; Exact mapped bytes E8 4A F9 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5193fb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x5193d9
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 00 00 00: call 0x51942d
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 A0 90 01 00: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
