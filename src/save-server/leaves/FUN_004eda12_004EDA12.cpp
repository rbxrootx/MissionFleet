// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDA12 .. +0x110 bytes.
extern "C" __declspec(naked) void FUN_004eda12_004EDA12() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 1c5h
        push 677b4ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 32 C8 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1c6h
        push 677b4ch
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        ; Exact mapped bytes E8 1F C8 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 18h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 1C: je 0x4eda66
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
        ; Exact mapped bytes E8 05 41 04 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 636f38h
        ; Exact mapped bytes E8 AF C7 FE FF: call 0x4da225
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        push 1cch
        push 677b4ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D1 C7 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc7
        __asm _emit 0xfe
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
        ; Exact mapped bytes E8 49 60 02 00: call 0x513b09
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA 4F FE FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 18: je 0x4edae5
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
        ; Exact mapped bytes E8 25 DB 03 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 58 E3 03 00: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe3
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
