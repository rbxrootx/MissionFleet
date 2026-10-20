// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552011 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00552011_00552011() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 48h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 65 AF FB FF: call 0x50cf9a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x55205a
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 78h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x552035
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2B: je 0x552091
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x55208a
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x552091
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
