// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867BCA0 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_5867bca0_5867BCA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 3F E3 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4D 3E E3 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x3e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2e4h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2e4h], 0
        ; Exact mapped bytes 74 61: je 0x5867bd39
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2e4h]
        ; Exact mapped bytes E8 3A 35 E8 FF: call 0x584ff220
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x35
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2e4h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 53h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 3b6h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 10 99 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2e4h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A 3F E8 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x3f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2e4h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 30 E3 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x30
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
