// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830832 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_58830832_58830832() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        ; Exact mapped bytes E8 B9 38 03 00: call 0x588640f4
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 8]
        push 2
        push 100h
        mov dword ptr [ebx], eax
        ; Exact mapped bytes E8 A4 8D 02 00: call 0x588595f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebx + 4], eax
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x58830873
        __asm _emit 0x74
        __asm _emit 0x1e
        push esi
        push edi
        ; Exact mapped bytes E8 C3 36 03 00: call 0x58863f1f
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, dword ptr [ebx + 4]
        mov ecx, 80h
        mov esi, eax
        mov dword ptr [ebx + 8], 1
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        ; Exact mapped bytes EB 0F: jmp 0x58830882
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes E8 A7 36 03 00: call 0x58863f1f
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebx + 4], eax
        mov dword ptr [ebx + 8], 0
        ; Exact mapped bytes E8 92 38 03 00: call 0x58864119
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebx + 0ch], eax
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5883089b
        __asm _emit 0x74
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes E8 39 3D 03 00: call 0x588645d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebx + 0ch], eax
        mov eax, ebx
        pop ebx
        pop ebp
        ret
    }
}
