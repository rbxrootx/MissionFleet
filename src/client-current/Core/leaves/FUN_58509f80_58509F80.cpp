// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509F80 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58509f80_58509F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7F DF F7 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 76 DF F7 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdf
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 54: je 0x5850a017
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
        ; Exact mapped bytes E8 08 AB FF FF: call 0x58504ae0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xab
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
        ; Exact mapped bytes E8 34 97 F9 FF: call 0x584a3730
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x97
        __asm _emit 0xf9
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
