// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798050 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58798050_58798050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AF FE CE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A6 FE CE FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xce
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 54: je 0x587980e7
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 D8 F4 FF FF: call 0x58797580
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
        cdq
        mov ecx, 18h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 64 B6 D0 FF: call 0x584a3730
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
