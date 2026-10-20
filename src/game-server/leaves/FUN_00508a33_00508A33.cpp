// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508A33 .. +0x110 bytes.
extern "C" __declspec(naked) void FUN_00508a33_00508A33() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 1c2h
        push 5cb374h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 11 27 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        push 1c3h
        push 5cb374h
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        ; Exact mapped bytes E8 FE 26 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 18h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 1C: je 0x508a87
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov ecx, dword ptr [edx + 70h]
        mov eax, dword ptr [ebp + 18h]
        mov edx, dword ptr [eax + 70h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 08 01 00 00: call dword ptr [eax + 0x108]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 CB 02 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 585e80h
        ; Exact mapped bytes E8 8E 26 FF FF: call 0x4fb125
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        push 1c9h
        push 5cb374h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B0 26 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 88h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 39 02 00: call 0x52c3ea
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 59 C0 FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 18: je 0x508b06
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        push 1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0e001h
        push 362h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 30 03 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 38 03 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
