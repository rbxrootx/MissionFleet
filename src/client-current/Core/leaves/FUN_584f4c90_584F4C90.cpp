// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F4C90 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_584f4c90_584F4C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6F 32 F9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x32
        __asm _emit 0xf9
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
        ; Exact mapped bytes E8 66 32 F9 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 4F: je 0x584f4d22
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 28 22 F9 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
        sar eax, 3
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 29 AD FA FF: call 0x5849fa30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
