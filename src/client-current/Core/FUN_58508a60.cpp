// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508A60 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_58508a60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9F F4 F7 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf4
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
        ; Exact mapped bytes E8 96 F4 F7 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 3A: je 0x58508add
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 28 C0 FF FF: call 0x58504ae0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc0
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
        ; Exact mapped bytes E8 54 AC F9 FF: call 0x584a3730
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xac
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        imul eax, dword ptr [ebp + 0ch], 18h
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], eax
        imul edx, dword ptr [ebp + 10h], 18h
        add edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
