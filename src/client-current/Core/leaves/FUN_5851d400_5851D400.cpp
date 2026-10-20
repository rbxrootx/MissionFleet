// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D400 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_5851d400_5851D400() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888148ch
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
        ; Exact mapped bytes 74 24: je 0x5851d459
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a40d4h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 50h
        ; Exact mapped bytes E8 37 8A FE FF: call 0x58505e80
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 47 9E F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CB FE FF FF: call 0x5851d340
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx], 588a40d0h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        sub eax, 50h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx - 4], eax
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        mov dword ptr [ebp - 18h], eax
        push 2
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 65 8F FE FF: call 0x58506420
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8f
        __asm _emit 0xfe
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
