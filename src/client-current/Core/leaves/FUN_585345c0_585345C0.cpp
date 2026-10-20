// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585345C0 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_585345c0_585345C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3F 39 F5 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x39
        __asm _emit 0xf5
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
        ; Exact mapped bytes E8 36 39 F5 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x39
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 3A: je 0x5853463d
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
        ; Exact mapped bytes E8 F8 28 F5 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x28
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
        cdq
        mov ecx, 11ch
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 94 01 00 00: call 0x585347d0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        imul eax, dword ptr [ebp + 0ch], 11ch
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], eax
        imul edx, dword ptr [ebp + 10h], 11ch
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
