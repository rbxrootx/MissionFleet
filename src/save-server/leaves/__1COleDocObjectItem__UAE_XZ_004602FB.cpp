// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004602FB .. +0x94 bytes.
extern "C" __declspec(naked) void __1COleDocObjectItem__UAE_XZ_004602FB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f6ech
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 63cd14h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 12: je 0x460344
        __asm _emit 0x74
        __asm _emit 0x12
        push 400h
        push 0
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 60 78 0D 00: call 0x537ba4
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x46036b
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x460372
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F2 11 0F 00: call 0x551573
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x11
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
