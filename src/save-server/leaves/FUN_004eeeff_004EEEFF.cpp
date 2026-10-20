// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EEEFF .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004eeeff_004EEEFF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6B 73 FE FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 70: call dword ptr [eax + 0x70]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x70
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x4eef5b
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 B0 6D 68 00: mov edx, dword ptr [0x686db0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 800000h
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x4eef5b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x4eef94
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D B4 6D 68 00: mov ecx, dword ptr [0x686db4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 800000h
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x4eef94
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
