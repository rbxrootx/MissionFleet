// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A94F0 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_584a94f0_584A94F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FF 9C FF FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 48 0D: movsx ecx, byte ptr [eax + 0xd]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x0d
        test ecx, ecx
        ; Exact mapped bytes 75 63: jne 0x584a9592
        __asm _emit 0x75
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D3 E9 FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 10h
        push eax
        ; Exact mapped bytes E8 64 DD FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FE 08 00 00: call 0x584a9e60
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x584a957b
        __asm _emit 0x74
        __asm _emit 0x12
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 15: jmp 0x584a9590
        __asm _emit 0xeb
        __asm _emit 0x15
        mov dword ptr [ebp - 1ch], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 92: jmp 0x584a9524
        __asm _emit 0xeb
        __asm _emit 0x92
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
