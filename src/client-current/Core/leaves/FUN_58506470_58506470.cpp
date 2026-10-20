// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506470 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_58506470_58506470() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888052ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2E: je 0x585064d3
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a3d88h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], 588a3d90h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 68h
        ; Exact mapped bytes E8 BD F9 FF FF: call 0x58505e80
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        or edx, 1
        mov dword ptr [ebp - 14h], edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 18h
        push eax
        ; Exact mapped bytes E8 CF 0D F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D3 F9 FF FF: call 0x58505ec0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax], 588a3d84h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 68h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx - 4], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        mov dword ptr [ebp - 18h], ecx
        push 3
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 ED FE FF FF: call 0x58506420
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
