// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474C50 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_00474c50_00474C50() {
    __asm {
        push ebp
        mov ebp, esp
        push 8000h
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes FF 15 64 B8 68 00: call dword ptr [0x68b864]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 48 02 68 00: mov edx, dword ptr [0x680248]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0C: jne 0x474c7e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 89 0D 48 02 68 00: mov dword ptr [0x680248], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 67e228h
        ; Exact mapped bytes 74 30: je 0x474cb7
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        ; Exact mapped bytes 8B 15 88 89 68 00: mov edx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 68 B8 68 00: call dword ptr [0x68b868]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x474cc1
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 38 E2 67 00 FF FF FF FF: mov dword ptr [0x67e238], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        ret
    }
}
