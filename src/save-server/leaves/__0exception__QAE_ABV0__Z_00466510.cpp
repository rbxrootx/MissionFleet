// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466510 .. +0x84 bytes.
extern "C" __declspec(naked) void __0exception__QAE_ABV0__Z_00466510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 63e138h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 48: je 0x46657f
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 FD F1 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        ; Exact mapped bytes E8 11 5F 06 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 16: je 0x46657d
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 F6 F3 FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 0C: jmp 0x46658b
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
