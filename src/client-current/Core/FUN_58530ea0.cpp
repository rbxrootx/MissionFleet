// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58530EA0 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_58530ea0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a4h], 40000000h
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x58530f5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 40000000h
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x58530f5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 6C: je 0x58530f5c
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        neg ecx
        imul edx, ecx, 64h
        ; Exact mapped bytes 03 15 64 20 96 58: add edx, dword ptr [0x58962064]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 50h
        ; Exact mapped bytes 7C 27: jl 0x58530f5c
        __asm _emit 0x7c
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 88h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
